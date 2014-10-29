//
//  Grid.h
//  GameOfLife
//
//  Created by Denis Tyurkov on 28/10/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end

@interface evolveStep : CCSprite

-(void)evolveStep;

@end

@interface countNeighbors : CCSprite

-(void)countNeighbors;

@end
