//
//  TTTrickView.m
//  TTTrickDemo
//
//  Created by xiepingjia on 15/12/11.
//  Copyright 2015 tsepingkai. All rights reserved.
//

#import "TTTrickView.h"
#import "JPEngine.h"

@implementation TTTrickView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (instancetype)init
{
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (void)dealloc
{
    if (!self.trickTimer) {
        [self.trickTimer invalidate];
        self.trickTimer = nil;
    }
}

- (void)load {
    
    self.trickTimer = [[NSTimer alloc] initWithFireDate:[[[NSDate alloc] init]  dateByAddingTimeInterval:1]
                                             interval:2
                                               target:self selector:@selector(addTimerAction)
                                             userInfo:self
                                              repeats:YES];
    [[NSRunLoop currentRunLoop] addTimer:self.trickTimer forMode:NSDefaultRunLoopMode];
    
    [JPEngine startEngine];
    
    // Get main script
    NSString *mPath = [[NSBundle mainBundle] pathForResource:@"main" ofType:@"js"];
    NSString *mScriptData = [NSString stringWithContentsOfFile:mPath encoding:NSUTF8StringEncoding error:nil];
    
    // Get running script
    NSString *rPath = [[NSBundle mainBundle] pathForResource:@"sample" ofType:@"js"];
    NSString *rScriptData = [NSString stringWithContentsOfFile:rPath encoding:NSUTF8StringEncoding error:nil];
    
    // exec js directly
    [JPEngine evaluateScript:rScriptData];
    [JPEngine evaluateScript:mScriptData];
}

- (void)addTimerAction {
    NSLog(@"addTimerAction oc");
}
@end
