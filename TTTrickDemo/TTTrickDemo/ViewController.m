//
//  ViewController.m
//  TTTrickDemo
//
//  Created by xiepingjia on 15/12/11.
//  Copyright 2015 tsepingkai. All rights reserved.
//

#import "ViewController.h"
#import "JPEngine.h"
#import "TTTrickView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    TTTrickView *trickView = [[TTTrickView alloc] init];
    trickView.backgroundColor = [UIColor brownColor];
    trickView.frame = [UIScreen mainScreen].bounds;
    [self.view addSubview:trickView];
    
    [trickView load];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
