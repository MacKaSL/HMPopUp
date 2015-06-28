#HMPopUp
=======

This will provide you custom pop up view with custom configuration. This will provide you 6 different presentation styles and 3 different dismiss styles. Separate properties to customize the look of the UI.  Known issue : Button text color not working.

![PopUp View iPhone Screenshot](https://raw.githubusercontent.com/MacKaSL/HMPopUp/master/popUpSS.PNG)
-------------------

###Installation Steps:
It's very easy to add this custom view to your project.

1) Open the HMPopUp project folder.

2) Drag and drop "HMPopUpView.h" and "HMPopUpView.m" files to your project or you can do this through Xcode by adding files to your project. Either way files will copy to your project.


###Implementaion:
1) Import header file `HMPopUpView.h`

2) Add delegate protocol `<HMPopUpViewDelegate>`

3) In your ViewController.m
```
HMPopUpView *hmPopUp = [[HMPopUpView alloc] initWithTitle:@"Hey PopUp..." okButtonTitle:@"Okay" cancelButtonTitle:@"Cancel" delegate:self];
[hmPopUp showInView:self.view];
```

<br>
######Note:
By default the view is in black and white unless you configure view using method
```
configureHMPopUpViewWithBGColor: titleColor: buttonViewColor: buttonBGColor: buttonTextColor:
 ```
<br>
#####More way to Customize:
######Presentation Styles
```
HMPopUpTransitionTypePop
HMPopUpTransitionTypePopFromBottom
HMPopUpTransitionTypePopFromTop
HMPopUpTransitionTypeFadeIn
HMPopUpTransitionTypeFadeInFromBottom
HMPopUpTransitionTypeFadeInFromTop
```

######Dismiss Styles
```
HMPopUpDismissTypeFadeOut
HMPopUpDismissTypeFadeOutBottom
HMPopUpDismissTypeFadeOutTop
```
<br>
######Define transition
Default presentation style - `HMPopUpTransitionTypePop`

Default dismiss style - `HMPopUpDismissTypeFadeOut`

```
hmPopUp.transitionType = HMPopUpTransitionTypeFadeInFromBottom;
hmPopUp.dismissType = HMPopUpDismissTypeFadeOutTop;
```

Enjoy :smiley:
===
