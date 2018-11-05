//
//  UIImageView+JKRImagesAnimation.h
//  LuckyRocket
//
//  Created by Joker on 2018/10/24.
//  Copyright © 2018年 Joker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (JKRImagesAnimation)

- (void)jkr_startAnimationWithDuration:(NSTimeInterval)duration images:(NSArray *)images completion:(void (^ __nullable)(BOOL finished))completion;
- (void)jkr_startRepeatAnimationWithDuration:(NSTimeInterval)duration images:(NSArray *)images;
- (void)jkr_finishAnimation;

@end

