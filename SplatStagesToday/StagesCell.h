//
//  StagesCell.h
//  SplatStages
//
//  Created by mac on 2015-09-27.
//  Copyright © 2015 OatmealDome. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StagesCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *timePeriod;
@property (weak, nonatomic) IBOutlet UILabel *rankedGamemodeLabel;
@property (weak, nonatomic) IBOutlet UILabel *regularStageOneLabel;
@property (weak, nonatomic) IBOutlet UILabel *regularStageTwoLabel;
@property (weak, nonatomic) IBOutlet UILabel *rankedStageOneLabel;
@property (weak, nonatomic) IBOutlet UILabel *rankedStageTwoLabel;

- (void) setupWithSchedule:(NSDictionary*) schedule timePeriod:(NSString*) timePeriod;
- (void) setupWithSplatfestStages:(NSArray*) stages;

@end
