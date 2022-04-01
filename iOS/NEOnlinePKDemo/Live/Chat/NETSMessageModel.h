//
//  NETSMessageModel.h
//  NLiteAVDemo
//
//  Created by Ease on 2020/11/24.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class M80AttributedLabel;

///
/// IM消息
///

typedef NS_ENUM(NSInteger, NETSMessageType) {
    NETSMessageNormal = 0,
    NETSMessageReward,
    NETSMessageNotication,
};

@interface NETSMessageModel : NSObject

/// 消息
@property (nonatomic,copy) NSString *text;
@property (nonatomic, copy) NSString *sender;

/// 消息类型
@property (nonatomic,assign) NETSMessageType type;
/// 消息size
@property (nonatomic,assign) CGSize size;
/// 消息富文本
@property (nonatomic,readonly) NSAttributedString *formatMessage;
@property (nonatomic, assign)    BOOL        isAnchor;

@property (nonatomic, assign) int giftId;
@property (nonatomic, copy) NSString *giftFrom;


@property (nonatomic, copy) NSString *notication;

///
/// 计算宽度
/// @param width - 宽度
///
- (void)caculate:(CGFloat)width;

///
/// 绘制富文本
/// @param label - 富文本容器
///
- (void)drawAttributeLabel:(M80AttributedLabel *)label;

@end

NS_ASSUME_NONNULL_END
