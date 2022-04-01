//
//  NETSApiModelMapping.h
//  NLiteAVDemo
//
//  Created by Ease on 2020/12/1.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 请求工具映射类
 */

@interface NETSApiModelMapping : NSObject

// 对象在数据中层级
@property (nonatomic, copy)     NSString    *keyPath;
// 对象是否为数组
@property (nonatomic, assign)   BOOL        isArray;
// 解析类
@property (nonatomic, strong)   Class       mappingClass;

+ (instancetype)mappingWith:(NSString *)keyPath mappingClass:(Class)mappingClass isArray:(BOOL)isArray;

@end

NS_ASSUME_NONNULL_END
