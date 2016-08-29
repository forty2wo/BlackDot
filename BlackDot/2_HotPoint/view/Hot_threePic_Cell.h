//
//  Hot_threePic_Cell.h
//  MyZaker
//
//  Created by Penny&Me on 16/6/30.
//  Copyright © 2016年 WangYuetong. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HotPointModel;
@interface Hot_threePic_Cell : UITableViewCell
@property(nonatomic,strong)HotPointModel * hModel;
@property (weak, nonatomic) IBOutlet UIImageView *firstImageView;
@property (weak, nonatomic) IBOutlet UIImageView *secondImageView;
@property (weak, nonatomic) IBOutlet UIImageView *thirdImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *authorLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
-(void)setHModel:(HotPointModel *)hModel AndImageArray:(NSArray *)imageArray;

@end









