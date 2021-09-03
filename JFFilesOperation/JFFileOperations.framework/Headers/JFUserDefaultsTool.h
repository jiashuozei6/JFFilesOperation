//
//  JFUserDefaultsTool.h
//  ReactNativeWork
//
//  Created by Elvis on 2019/5/24.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <JFFileOperations/JFFileToolBase.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN NSString * const kJFKeyDefaultEncrypt; // 加密秘钥;

UIKIT_EXTERN NSString * const kJFUserDefaultsSaveSuccess; //@"偏好文件保存成功";
UIKIT_EXTERN NSString * const kJFUserDefaultsSaveFaild; //@"偏好文件保存失败";
UIKIT_EXTERN NSString * const kJFUserDefaultsGetFaild; //@"没有偏好数据";
UIKIT_EXTERN NSString * const kJFUserDefaultsDeleteSuccess; //@"偏好文件删除成功";
UIKIT_EXTERN NSString * const kJFUserDefaultsDeleteFaild; //@"偏好文件删除失败";

@interface JFUserDefaultsTool : JFFileToolBase

/**
 保存偏好文件关键字对应数据

 @param value 保存内容
 @param key 保存关键字
 @return 保存结果
 */
+ (BOOL)saveUserDefaultsWithValue:(id)value key:(NSString *)key;

/**
 读取偏好文件关键字对应保存数据

 @param key 读取关键字
 @return 读取的内容
 */
+ (id)getUserDefaultsWithKey:(NSString *)key;

/**
 删除偏好文件关键字对应保存数据

 @param key 删除关键字
 @return 删除结果
 */
+ (BOOL)deleteUserDefaultsWithKey:(NSString *)key;

/**
 加密保存偏好文件关键字对应数据
 
 @param value 保存内容
 @param key 保存关键字
 @param secretKey 加密密钥
 @return 保存结果
 */
+ (BOOL)saveUserDefaultsWithValue:(id)value key:(NSString *)key secretKey:(NSString *)secretKey;

/**
 读取偏好文件关键字对应保存的加密数据
 
 @param key 读取关键字
 @param secretKey 加密密钥
 @return 读取的内容
 */
+ (id)getUserDefaultsWithKey:(NSString *)key secretKey:(NSString *)secretKey;

@end

NS_ASSUME_NONNULL_END
