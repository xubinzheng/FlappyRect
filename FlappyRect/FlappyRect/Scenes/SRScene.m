//
//  SRScene.m
//  FlappyRect
//
//  Created by Xubin Zheng on 9/11/14.
//  Copyright (c) 2015 Xubin Zheng. All rights reserved.
//

#import "SRScene.h"

@interface SRScene()

@property BOOL contentCreated;

@end

@implementation SRScene

- (void)didMoveToView:(SKView *)view
{
    if (_contentCreated) {
        return;
    }
    
    [self initalize];
    self.contentCreated = YES;
}

- (void)initalize
{
    
}

@end
