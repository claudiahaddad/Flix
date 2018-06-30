//
//  MovieCell.h
//  Flix
//
//  Created by Claudia Haddad on 6/27/18.
//  Copyright © 2018 Claudia Haddad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property (weak, nonatomic) IBOutlet UILabel *synopsisLabel;
@property (weak, nonatomic) IBOutlet UILabel *releaseDate;

@end
