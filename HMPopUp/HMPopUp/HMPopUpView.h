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

typedef NS_ENUM(NSInteger, HMPopUpTransitionType) {
    HMPopUpTransitionTypePop,
    HMPopUpTransitionTypePopFromBottom,
    HMPopUpTransitionTypePopFromTop,
    HMPopUpTransitionTypeFadeIn,
    HMPopUpTransitionTypeFadeInFromBottom,
    HMPopUpTransitionTypeFadeInFromTop
};

typedef NS_ENUM(NSInteger, HMPopUpDismissType) {
    HMPopUpDismissTypeFadeOut,
    HMPopUpDismissTypeFadeOutBottom,
    HMPopUpDismissTypeFadeOutTop
};


#pragma mark - Delegate
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

#pragma mark - Properties
/**
 *  HMPopUpViewDelegate delegate propoerty
 */
@property (nonatomic, strong) id<HMPopUpViewDelegate> hmDelegate;

/**
 *  Sets the font for the title.
 */
@property (nonatomic, strong) UIFont * titleFont;

/**
 *  Sets the font for the text field.
 */
@property (nonatomic, strong) UIFont * textFieldFont;

/**
 *  Sets the border color around the pop up view.
 */
@property (nonatomic, strong) UIColor * borderColor;

/**
 *  Sets the background color for the separator view between the title label and text field.
 */
@property (nonatomic, strong) UIColor * titleSeparatorColor;

/**
 *  Sets the background color for button view.
 */
@property (nonatomic, strong) UIColor * buttonViewBGColor;

/**
 *  sets the background color for the text field.
 */
@property (nonatomic, strong) UIColor * textFieldBGColor;

/**
 *  sets the boarder width for the text field.
 */
@property (nonatomic, assign) CGFloat textFieldBoarderWidth;

/**
 *  sets the boarder color for the text field.
 */
@property (nonatomic, strong) UIColor * textFieldBoarderColor;

/**
 *  sets the background color for the middle view which the text field is positioned area.
 */
@property (nonatomic, strong) UIColor * middleViewBGColor;

/**
 *  Sets the transition type. Default is HMPopUpTransitionTypePop
 */
@property (nonatomic, assign) HMPopUpTransitionType transitionType;

/**
 *  Sets the transition type. Default is HMPopUpDismissTypeFadeOut
 */
@property (nonatomic, assign) HMPopUpDismissType dismissType;

/**
 *  Sets the presentation animation duration. Default is 0.8
 */
@property (nonatomic, assign) NSTimeInterval presentAnimationDuration;

/**
 *  Sets the dismiss animation duration. Default is 0.4
 */
@property (nonatomic, assign) NSTimeInterval dismissAnimationDuration;

/**
 *  Sets the text color of the text field. Default is White.
 */
@property (nonatomic, strong) UIColor * textFieldTextColor;

@property (nonatomic, strong) UIColor * okButtonTextColor;

/**
 *  Sets the 'Ok' button background color
 */
@property (nonatomic, strong) UIColor * okButtonBGColor;

@property (nonatomic, strong) UIColor * cancelButtonTextColor;

/**
 *  Sets the 'Cancel' button background color
 */
@property (nonatomic, strong) UIColor * cancelButtonBGColor;

/**
 *  Sets the border width for the pop up view. Default is 2.
 */
@property (nonatomic, assign) float borderWidth;

#pragma mark - Methods
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
