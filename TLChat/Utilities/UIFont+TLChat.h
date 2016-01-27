//
//  UIFont+TLChat.h
//  TLChat
//
//  Created by 李伯坤 on 16/1/27.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (TLChat)

#pragma mark - Conversation
+ (UIFont *) fontConversationUsername;
+ (UIFont *) fontConversationDetail;
+ (UIFont *) fontConversationTime;

#pragma mark - Friends
+ (UIFont *) fontFriendsUsername;

@end