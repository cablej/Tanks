//
//  TanksGamePage.h
//  Tanks
//
//  Created by greg.minter on 4/13/14.
//  Copyright (c) 2014 Montablo. All rights reserved.
//

#import "GameKitHelper.h"
#import <SpriteKit/SpriteKit.h>
#import "JCImageJoystick.h"
#import "JCJoystick.h"
#import "TanksConstants.h"
#import "UserTank.h"
#import "AITank.h"
#import "Bullet.h"
#import "TanksAppDelegate.h"
#import "TanksNavigation.h"
#import "MultiplayerNetworking.h"

@interface TanksGamePage : SKScene <MultiplayerNetworkingProtocol>

@property (strong, nonatomic) JCJoystick *joystick;
@property (nonatomic, strong) MultiplayerNetworking *networkingEngine;

-(void) pauseGame;
-(void) unpauseGame;

@end
