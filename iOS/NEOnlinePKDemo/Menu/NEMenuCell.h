//
//  NEMenuCell.h
//  NLiteAVDemo
//
//  Created by I am Groot on 2020/8/21.
// Copyright (c) 2021 NetEase, Inc.  All rights reserved.
// Use of this source code is governed by a MIT license that can be found in the LICENSE file.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^NEMenuCellBlock)(void);

@interface NEMenuCellModel : NSObject
//主标题
@property (nonatomic, copy) NSString    *title;
//副标题
@property (nonatomic, copy) NSString    *subtitle;
//头像
@property (nonatomic, copy) NSString    *icon;

- (instancetype)initWithTitle:(NSString *)title
                     subtitle:(NSString *)subtitle
                         icon:(NSString *)icon;

@end

///

@interface NEMenuCell : UITableViewCell

+ (NEMenuCell *)cellWithTableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                             data:(NEMenuCellModel *)data;

+ (CGFloat)height;

@end

NS_ASSUME_NONNULL_END
