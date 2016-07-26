//
//  ViewController.m
//  Notiforward
//
//  Created by Sparky on 15/04/15.
//  Copyright (c) 2015 minus. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *tokenTitleLable;
@property (weak, nonatomic) IBOutlet UILabel *tokenValueLable;
@property (nonatomic, readwrite) NSString *token;

@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




- (IBAction)GetDeviceTokenButton:(UIButton *)sender {

    NSLog(@"My token is: %@", (NSString *) _token);

}

@end
