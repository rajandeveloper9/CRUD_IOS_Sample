//
//  MapViewController.h
//  DemoApp
//
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewController : UIViewController <MKMapViewDelegate>

// IBOutlet for mapview
@property (nonatomic, weak) IBOutlet MKMapView *mapView;

@end
