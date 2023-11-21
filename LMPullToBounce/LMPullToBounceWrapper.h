//
//  WKPullToBounceWrapper.h
//  
//
//  Created by luck-mac on 15/8/19.
//
//

#import <UIKit/UIKit.h>
#import "BounceView.h"

typedef void (^DidPullToRefresh)();
@interface LMPullToBounceWrapper : UIView
@property (nonatomic, strong) DidPullToRefresh didPullTorefresh;
- (instancetype) initWithScrollView:(UIScrollView *)scrollView
                     bounceDuration:(CFTimeInterval)bounceDuration
                           ballSize:(CGFloat)ballSize
                   ballMoveTimeFunc:(CAMediaTimingFunction *)ballMoveTimeFunc
                     moveUpDuration:(CFTimeInterval)moveUpDuration
                       pullDistance:(CGFloat)pullDistance
                       bendDistance:(CGFloat)bendDistance
                   didPullToRefresh:(DidPullToRefresh)didPullToRefresh;
- (instancetype) initWithScrollView:(UIScrollView *)scrollView;
- (void)stopLoadingAnimation;
@property (nonatomic, strong) BounceView *bounceView;

@end
