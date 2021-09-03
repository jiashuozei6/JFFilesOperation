//
//  JFFileConfig.h
//  JFFileOperations
//
//  Created by Elvis on 2021/4/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

UIKIT_EXTERN NSString * const kJFProjectSettingPlist; //@"ProjectSetting.plist"
UIKIT_EXTERN NSString * const kJFProjectSettingConfig; //@"app.config"

UIKIT_EXTERN NSString * const kJFPathBundleProjectFolder; //@"project://ReactNativeBundle/"
UIKIT_EXTERN NSString * const kJFPathBundleUpdateFolder; //@"document://bundleUpadateFile/"

@interface JFFileConfig : NSObject

/**
 是否需要路径解析

 @param path 带判断路径
 @return 检测结果
 */
+ (BOOL)needPathAnalysis:(NSString *)path;

/**
 解析本地路径
 
 @return 解析后的路径
 */
+ (NSString *)pathAnalysis:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
