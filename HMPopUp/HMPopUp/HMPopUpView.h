//
//  HMPopUpView.h
//  HMPopUp
//
//  Created by Himal Madhushan on 12/16/14.
//  Copyright (c) 2014 Himal Madhushan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum HMPopUpType{
    HMAlertView,
    HMInputView
}HMPopUpType;

/**
 *  HMPopUpViewDelegate Protocol
 */
@class HMPopUpView;
@protocol HMPopUpViewDelegate <NSObject>
@optional
/**
 *  Delegate method to detect user event whether accept or not
 *
 *  @param alert  HMPopUpView
 *  @param accept YES or NO
 */
- (void) popUpView:(HMPopUpView *)view accepted:(BOOL)accept inputText:(NSString *)text;

@end

@interface HMPopUpView : UIView <UITextFieldDelegate>

/**
 *  HMPopUpViewDelegate delegate propoerty
 */
@property (nonatomic, strong) id<HMPopUpViewDelegate> hmDelegate;

/**
 *  Intializing view with View Title, Button titles (ok/cancel), HMPopUpViewDelegate.
 *
 *  @param title      title for view
 *  @param okBtnTtl   title for ok button
 *  @param cnclBtnTtl title for cancel button
 *  @param delegate   HMPopUpViewDelegate to enable delegate mothods
 *
 *  @return id
 */
- (id)initWithTitle:(NSString *)title
      okButtonTitle:(NSString *)okBtnTtl
  cancelButtonTitle:(NSString *)cnclBtnTtl
           delegate:(id<HMPopUpViewDelegate>)delegate;

/**
 *  User is allowed to configure the view with colors.
 *
 *  @param BGColor     alert view background color
 *  @param ttlColor    title label color (text color)
 *  @param btnBGColor  background color for buttons ("ok" or "cancel")
 *  @param btnTxtColor button title label color (text color)
 */
- (void)configureHMPopUpViewWithBGColor:(UIColor *)BGColor
                             titleColor:(UIColor *)ttlColor
                        buttonViewColor:(UIColor *)btnViewColor
                          buttonBGColor:(UIColor *)btnBGColor
                        buttonTextColor:(UIColor *)btnTxtColor;

/**
 *  Adding HMPopUpView to current ViewController's view
 *
 *  @param view current ViewController's view
 */
- (void)showInView:(UIView *)view;
@end
