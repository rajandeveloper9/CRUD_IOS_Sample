//
//  OperationsDetailViewController.h
//  DemoApp
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

// CRUD operations using Core Data
@interface OperationsDetailViewController : UIViewController

// IBOutlet methods
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;
@property (strong) NSManagedObject *device;

// IBAction methods
- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
