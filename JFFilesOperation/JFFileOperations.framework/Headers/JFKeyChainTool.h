//
//  JFKeyChainTool.h
//  ReactNativeWork
//
//  Created by Elvis on 2019/5/29.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <JFFileOperations/JFFileToolBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFKeyChainTool : JFFileToolBase

/**
 保存数据至KeyChain内
 
 @param value 要保存的对象
 @param key 要保存对象的key值
 @return 保存结果
 */
+ (BOOL)saveKeyChainWithValue:(id)value key:(NSString *)key;

/**
 读取KeyChain内保存数据
 
 @param key 要读取对象的key值
 @return 读取结果
 */
+ (id)getKeyChainWithKey:(NSString *)key;

/**
 删除KeyChain内保存数据

 @param key 要删除对象的key值
 @return 删除结果
 */
+ (BOOL)deleteKeyChianWithKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
