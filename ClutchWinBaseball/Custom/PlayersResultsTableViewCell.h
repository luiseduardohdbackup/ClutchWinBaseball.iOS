//
//  PlayersResultsTableViewCell.h
//  ClutchWinBaseball
//
//  Created by Joe Hoover on 2014-04-21.
//  Copyright (c) 2014 com.clutchwin.baseball. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlayersResultsTableViewCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet UILabel *yearLabel;
@property (nonatomic, weak) IBOutlet UILabel *typeLabel;
@property (nonatomic, weak) IBOutlet UILabel *gamesLabel;
@property (nonatomic, weak) IBOutlet UILabel *atBatLabel;
@property (nonatomic, weak) IBOutlet UILabel *hitLabel;
@property (nonatomic, weak) IBOutlet UILabel *secondBaseLabel;
@property (nonatomic, weak) IBOutlet UILabel *thirdBaseLabel;
@property (nonatomic, weak) IBOutlet UILabel *homeRunLabel;
@property (nonatomic, weak) IBOutlet UILabel *runBattedInLabel;
@property (nonatomic, weak) IBOutlet UILabel *strikeOutLabel;
@property (nonatomic, weak) IBOutlet UILabel *averageLabel;
@property (weak, nonatomic) IBOutlet UILabel *walkLabel;

@end
