//
//  CardTableViewCell.h
//  DemoApp
//
//

#import <UIKit/UIKit.h>

@interface CardTableViewCell : UITableViewCell {
    NSString *website;
}
// IBOutlet properties
@property (weak, nonatomic) IBOutlet UIView *mainView;
@property (weak, nonatomic) IBOutlet UIImageView *profilePhoto;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *webLabel;
@property (weak, nonatomic) IBOutlet UIButton *webButton;

- (void)setupWithDictionary:(NSDictionary *)dictionary;

@end
