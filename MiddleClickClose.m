/* 
 MiddleClickClose
 Copyright © 2008 Joey Gibson <joey@joeygibson.com>
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#import <WebKit/WebKit.h>
#import "MiddleClickClose.h"

@implementation MiddleClickClose
+ (void) load
{
	BOOL rc;
	
	rc = MethodSwizzle(NSClassFromString(@"TabButton"), @selector(otherMouseUp:), @selector(_mcc_mouseUp:));

	if (rc == 0) {
		rc = MethodSwizzle(NSClassFromString(@"TabButton"), @selector(mouseUp:), @selector(_mcc_mouseUp:));
	}
	
	NSLog(@"MiddleClickClose loaded.");
}

+ (MiddleClickClose*) sharedInstance
{
	static MiddleClickClose* plugin = nil;
	
	if (plugin == nil)
	{
		plugin = [[MiddleClickClose alloc] init];
	}
	
	return plugin;
}
@end
