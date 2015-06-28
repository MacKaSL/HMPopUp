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
    hmPopUp.borderColor = [UIColor colorWithRed:0.181 green:0.663 blue:0.882 alpha:1.000];
    hmPopUp.titleSeparatorColor = [UIColor colorWithRed:0.181 green:0.663 blue:0.882 alpha:1.000];
    
//    [hmPopUp configureHMPopUpViewWithBGColor:[UIColor whiteColor]
//                                      titleColor:[UIColor colorWithRed:0.894 green:0.000 blue:0.476 alpha:1.000]
//                                 buttonViewColor:[UIColor whiteColor]
//                                   buttonBGColor:[UIColor colorWithRed:0.181 green:0.663 blue:0.882 alpha:1.000]
//                                 buttonTextColor:[UIColor colorWithRed:0.181 green:0.663 blue:0.882 alpha:1.000]];
    
    hmPopUp.okButtonBGColor = [UIColor colorWithRed:0.181 green:0.663 blue:0.882 alpha:1.000];
    hmPopUp.okButtonTextColor = [UIColor colorWithRed:0.894 green:0.000 blue:0.476 alpha:1.000];
    
    hmPopUp.textFieldBGColor = [UIColor redColor];
    hmPopUp.borderWidth = 1;
    hmPopUp.transitionType = HMPopUpTransitionTypePopFromBottom;
    hmPopUp.dismissType = HMPopUpDismissTypeFadeOutTop;
    [hmPopUp showInView:self.view];
    
}

#pragma mark - HMPopUpViewDelegate
-(void)popUpView:(HMPopUpView *)view accepted:(BOOL)accept inputText:(NSString *)text{
    if (accept) {
        //do stuff
        NSLog(@"User pressed Okay button");
        
    } else {
        NSLog(@"User pressed Cancel button");
        
    }
}

@end
