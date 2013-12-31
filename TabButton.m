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
#import "TabButton.h"
#import "WebKit/WebKit.h"

@implementation NSObject (MCCSwizzle)
- (void)_mcc_mouseUp:(NSEvent *) theEvent
{
	if (theEvent.buttonNumber == 2 || [theEvent modifierFlags] & NSCommandKeyMask) {
		[self closeTab: theEvent];
	}
}
@end
