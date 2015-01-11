//
//  RestartView.h
//  FlappyRect
//
//  Created by Xubin Zheng on 9/11/14.
//  Copyright (c) 2015 Xubin Zheng. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@class RestartView;
@protocol RestartViewDelegate <NSObject>

- (void)restartView:(RestartView *)restartView didPressRestartButton:(SKSpriteNode *)restartButton;

@end

@interface RestartView : SKSpriteNode

@property (weak, nonatomic) id <RestartViewDelegate> delegate;

+ (RestartView *)getInstanceWithSize:(CGSize)size;
- (void)dismiss;
- (void)showInScene:(SKScene *)scene;

@end
