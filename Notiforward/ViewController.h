//
//  ViewController.h
//  Notiforward
//
//  Created by Sparky on 15/04/15.
//  Copyright (c) 2015 minus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextView *textView;

- (IBAction)GetDeviceTokenButton:(UIButton *)sender;

@end

