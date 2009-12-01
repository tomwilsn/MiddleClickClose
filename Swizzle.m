/*
 Swizzle.m
 SafariBlock
 
 Copyright 2007 Braden Thomas
 Modified by Russell Gray - Oct 2009
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "Swizzle.h"

void swizzleMethods(NSArray* methods)
{		
	for (NSArray* methodDesc in methods)
	{
		if ([methodDesc count]==4)
			MethodSwizzle(NSClassFromString([methodDesc objectAtIndex:0]),NSSelectorFromString([methodDesc objectAtIndex:1]),NSSelectorFromString([[@"sb_" stringByAppendingString:[methodDesc objectAtIndex:3]] stringByAppendingString:[methodDesc objectAtIndex:1]]),[[methodDesc objectAtIndex:2] boolValue]);
		else
			MethodSwizzle(NSClassFromString([methodDesc objectAtIndex:0]),NSSelectorFromString([methodDesc objectAtIndex:1]),NSSelectorFromString([@"sb_" stringByAppendingString:[methodDesc objectAtIndex:1]]),[[methodDesc objectAtIndex:2] boolValue]);
	}
}


BOOL MethodSwizzle(Class aClass, SEL orig_sel, SEL alt_sel, BOOL isInstance)
{	
	// To swizzle class methods, manipulate methods on the metaclass
	Class target = isInstance ? aClass : object_getClass(aClass);
	
	if (![target instancesRespondToSelector: orig_sel]) {
		if (isInstance) {
			NSLog(@"Warning: Instances of class %@ do not respond to %@",
				  NSStringFromClass(aClass), NSStringFromSelector(orig_sel));
		} else {
			NSLog(@"Warning: Class %@ does not respond to %@",
				  NSStringFromClass(aClass), NSStringFromSelector(orig_sel));
		}
		return NO;
	}
	
	
	Method orig = class_getInstanceMethod(target, orig_sel);
	Method repl = class_getInstanceMethod(target, alt_sel);
	
	// We have (origSel -> origIMP, replSel -> replIMP).
	// But maybe origSel is inherited--we don't want to swap origIMP in superclasses!
	// Check if it's inherited by trying to add origSel.
	if (class_addMethod(target, orig_sel, method_getImplementation(repl), method_getTypeEncoding(repl))) {
		// Adding succeeded, the method was inherited.
		// We have (origSel -> replIMP, replSel -> replIMP).
		// Just change where replSel points
		class_replaceMethod(target, alt_sel, method_getImplementation(orig), method_getTypeEncoding(orig));
	} else {
		// Not inherited, we can safely swap IMPs
		method_exchangeImplementations(orig, repl);
	}
	return YES;
}
