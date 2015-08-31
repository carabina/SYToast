//
//  iToast.h
//  iToast
//
//  Created by zhangshaoyu on 15/7/30.
//  Copyright (c) 2015年 zhangshaoyu. All rights reserved.
//  提示语弹窗视图

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// 显示位置，居中，偏顶端，偏底端
typedef NS_ENUM(NSInteger, iToastPosition)
{
    /// 居中
    PositionCenter = 1,
    
    /// 偏顶
    PositionTop = 2,
    
    /// 偏底
    PositionBottom = 3,
};

@interface iToast : UIView

/// 单例
+ (id)shareIToast;

/// 显示信息（默认位置为居中）
- (void)showText:(NSString *)text;

/// 隐藏
- (void)hidden;

/// 显示信息，自定义显示位置
- (void)showText:(NSString *)text postion:(iToastPosition)position;

@end