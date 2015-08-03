//
//  ViewController.h
//  DroneControl
//
//  Created by Dennis Baldwin on 7/9/15.
//  Copyright (c) 2015 Unmanned Airlines, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <DJISDK/DJISDK.h>
#import <DJISDK/DJIMainControllerDef.h>

@import GoogleMaps;

@interface ViewController : UIViewController<DJIDroneDelegate, DJIGimbalDelegate, DJICameraDelegate, GMSMapViewDelegate, DJIMainControllerDelegate>
{
    DJIDrone *_drone;
    DJIInspireGimbal *_gimbal;
    DJIInspireCamera *_camera;
    //GMSMapView *_mapView;
    int photoCount;
    int loopCount;
    float totalProgress;
    int totalPhotoCount;
    BOOL panoInProgress;
    DJIInspireMainController* mInspireMainController;
}

@property (nonatomic, retain) IBOutlet UIView *videoPreviewView;

@property (strong, nonatomic) IBOutlet GMSMapView *testView;

@property (weak, nonatomic) IBOutlet UILabel *photoCountLabel;

@property (weak, nonatomic) IBOutlet UILabel *batteryRemainingLabel;

@property (weak, nonatomic) IBOutlet UILabel *altitudeLabel;

@property (weak, nonatomic) IBOutlet UIProgressView *progressView;

@property (weak, nonatomic) IBOutlet UIButton *startButton;

- (void) connectToDrone;
- (void)pitchDown;
- (void)rotateGimbalAndTakePhoto;

- (IBAction)setWorkModeAndBeginPano;
- (IBAction)rotateGimbalRight:(id)sender;
- (IBAction)rotateGimbalLeft:(id)sender;
- (IBAction)resetGimbalYaw:(id)sender;
- (IBAction)pitchDown15:(id)sender;
- (IBAction)pitchUp:(id)sender;

@end

