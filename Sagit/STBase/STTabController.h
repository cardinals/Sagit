//
//  STTabController.h
//  IT恋
//
//  Created by 陈裕强 on 2017/12/24.
//  Copyright © 2017年. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STTabController : UITabBarController
//!事件在UI初始化之前执行
-(void)onInit;
//!UI初始化
-(void)initUI;
//!事件在UI初始化之后执行
-(void)initData;
@end