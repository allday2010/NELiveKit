//
//  NEPersonView.h
//  NLiteAVDemo
//
//  Created by I am Groot on 2020/11/17.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NEPersonView : UIView
@property(strong,nonatomic)UILabel *titleLabel;
@property(strong,nonatomic)UILabel *detailLabel;
@property(strong,nonatomic)UIImageView  *iconImageView;
@property(strong,nonatomic)UIImageView  *indicatorImageView;


@end

NS_ASSUME_NONNULL_END
