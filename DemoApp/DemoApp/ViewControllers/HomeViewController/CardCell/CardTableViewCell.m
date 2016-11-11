//
//  CardTableViewCell.m
//  DemoApp
//
//

#import "CardTableViewCell.h"

@implementation CardTableViewCell

- (void)awakeFromNib {
    // Initialization code
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

// Reading contents loaded from items dictionary file
- (void)setupWithDictionary:(NSDictionary *)dictionary
{
    self.mainView.layer.cornerRadius = 10;
    self.mainView.layer.masksToBounds = YES;
    
    self.profilePhoto.image = [UIImage imageNamed:[dictionary valueForKey:@"image"]];
    
    self.nameLabel.text = [dictionary valueForKey:@"name"];
    self.titleLabel.text = [dictionary valueForKey:@"title"];
    
    website = [dictionary valueForKey:@"web"];
    if (website) {
        self.webLabel.text = [dictionary valueForKey:@"web"];
    } else {
        self.webLabel.hidden = YES;
        self.webButton.hidden = YES;
    }
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}

// Launch in webview
- (IBAction)launchWeb:(id)sender
{
    if (website) {
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:website]];
    }
}


@end
