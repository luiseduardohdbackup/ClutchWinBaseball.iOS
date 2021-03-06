//
//  OpponentsTVC.h
//  ClutchWinBaseball
//
//  Created by Joe Hoover on 2014-04-18.
//  Copyright (c) 2014 com.clutchwin.baseball. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TeamsContextViewModel.h"

@class TeamsOpponentsTVC;

@protocol TeamsOpponentsTVCDelegate
- (void)teamsOpponentSelected:(TeamsOpponentsTVC *)controller;
@end

@interface TeamsOpponentsTVC : UICollectionViewController


@property (weak, nonatomic) IBOutlet UILabel *notifyLabel;
@property (nonatomic, strong) NSArray *franchises;
@property (weak, nonatomic) id <TeamsOpponentsTVCDelegate> delegate;
@property (nonatomic, strong) TeamsContextViewModel *teamsContextViewModel;

- (void)refresh;

@end
