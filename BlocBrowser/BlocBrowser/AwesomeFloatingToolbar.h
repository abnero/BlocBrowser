//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Abner Flores on 9/26/15.
//  Copyright (c) 2015 Abner Flores. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

-(void) floatingToolbar: (AwesomeFloatingToolbar *) toolbar didSelectButtonWithTitle: (NSString *) title;
-(void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset: (CGPoint) offset;

@end

@interface AwesomeFloatingToolbar : UIView

-(instancetype) initWithFourTitles: (NSArray *) title;

-(void) setEnabled: (BOOL) enabled forButtonWithTitle: (NSString *) title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end
