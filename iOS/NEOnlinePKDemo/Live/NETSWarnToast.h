//
//  NETSWarnToast.h
//  NLiteAVDemo
//
//  Created by Ease on 2020/11/12.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NETSWarnToast : UIView

/// 文字颜色
@property (nonatomic, strong)   UIColor     *textCol;
/// 标志
@property (nonatomic, strong)   UIImage     *icon;
/// toast文字
@property (nonatomic, copy)     NSString    *toast;

@end

NS_ASSUME_NONNULL_END
