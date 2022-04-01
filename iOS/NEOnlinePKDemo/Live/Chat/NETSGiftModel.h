//
//  NETSGiftModel.h
//  NLiteAVDemo
//
//  Created by Ease on 2020/11/26.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///
/// 礼物模型
///

@interface NETSGiftModel : NSObject
//礼物id，1荧光棒 2安排 3跑车 4 火箭
@property (nonatomic, assign)   int32_t     giftId;
@property (nonatomic, copy)     NSString    *icon;
@property (nonatomic, copy)     NSString    *display;
@property (nonatomic, assign)   int32_t     price;

- (instancetype)initWithGiftId:(int32_t)giftId icon:(NSString *)icon display:(NSString *)display price:(int32_t)price;

@end

NS_ASSUME_NONNULL_END
