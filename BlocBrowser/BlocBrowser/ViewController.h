//
//  ViewController.h
//  BlocBrowser
//
//  Created by Abner Flores on 9/17/15.
//  Copyright (c) 2015 Abner Flores. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/*
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropiately.
 */

-(void) resetWebView;

@end

