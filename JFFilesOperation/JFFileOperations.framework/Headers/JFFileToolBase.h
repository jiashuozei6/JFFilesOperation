//
//  JFFileToolBase.h
//  ReactNativeWork
//
//  Created by Elvis on 2019/5/16.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JFFileToolBase : NSObject

/**
 object编码
 
 @param object 编码对象
 @return 编码字符串
 */
+ (NSString *)stringByEncodingObject:(id)object;

/**
 字符串解码
 
 @param string 字符串
 @return 对象
 */
+ (id)objectByDecodingString:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
