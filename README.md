#HMPopUp
=======

This will provide you custom pop up views with custom configuration.

![PopUp View iPhone Screenshot](https://raw.githubusercontent.com/MacKaSL/HMPopUp/master/popUpSS.PNG)
-------------------

###Installation Steps:
It's very easy to add this custom view to your project.

1) Open the HMPopUp project folder.

2) Drag and drop "HMPopUpView.h" and "HMPopUpView.m" files to your project or you can do this through Xcode by adding files to your project. Either way files will copy to your project.


###Implementaion:
1) Import header file `HMPopUpView.h`

2) Add delegate protocol `<HMPopUpViewDelegate>`

3) In ViewController.m
```
HMPopUpView *hmPopUp = [[HMPopUpView alloc] initWithTitle:@"Hey PopUp..." okButtonTitle:@"Okay" cancelButtonTitle:@"Cancel" delegate:self];
[hmPopUp showInView:self.view];
```

Enjoy :smiley:
===
