//
//  mainMenu.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 23/3/12.
//  Copyright (c) 2012 Korec s.r.l. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface mainMenu : NSObject

@property (nonatomic, copy) NSString *mainLabel;
@property (nonatomic, copy) NSString *upperLabel;
@property int family;
@property (nonatomic, copy) NSString *icon;

@end