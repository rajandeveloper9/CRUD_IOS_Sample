//
//  ViewController.h
//  DemoApp
//
//

#import <UIKit/UIKit.h>
#import "CardTableViewCell.h"

@interface ViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

// IBOutlet and items properties
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSArray *items;
@property (assign, nonatomic) CATransform3D initialTransformation;

@end

