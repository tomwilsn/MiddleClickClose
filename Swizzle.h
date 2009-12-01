/*
	Swizzle.h
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

#import <Cocoa/Cocoa.h>
#import <objc/objc-class.h>

void swizzleMethods(NSArray* methods);
BOOL MethodSwizzle(Class aClass, SEL orig_sel, SEL alt_sel, BOOL isInstance);