//
//  ViewController.m
//  HMPopUp
//
//  Created by Himal Madhushan on 12/16/14.
//  Copyright (c) 2014 Himal Madhushan. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

#pragma mark - View
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Button Action
- (IBAction)LaunchPopUpView:(id)sender {
    HMPopUpView *hmPopUp = [[HMPopUpView alloc] initWithTitle:@"Hey PopUp..." okButtonTitle:@"Okay" cancelButtonTitle:@"Cancel" delegate:self];
    [hmPopUp showInView:self.view];
    
}

#pragma mark - HMPopUpViewDelegate
-(void)popUpView:(HMPopUpView *)view accepted:(BOOL)accept {
    if (accept) {
        //do stuff
        NSLog(@"User pressed Okay button");
        
    } else {
        NSLog(@"User pressed Cancel button");
        
    }
}

@end
