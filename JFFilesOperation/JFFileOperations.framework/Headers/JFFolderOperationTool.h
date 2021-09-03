//
//  FolderOperationTool.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/16.
//

#import <JFFileOperations/JFFileToolBase.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, JFDirectory)  {
  
  JFDirectoryAlreadyExistAtPath = 6280, //文件夹已经存在
  JFDirectoryDoesNotExistAtPath = 6281, //文件夹已经存在
  JFDirectoryCreateSuccess = 0, //文件夹创建成功
  JFDirectoryCreateFaild = 6282, //文件夹创建失败
  JFDirectoryDeletedSuccess = 0, //文件夹删除成功
  JFDirectoryDeletedFaild = 6283, //文件夹删除失败
  JFDirectoryIsEmpty = 6284 //文件夹下无目录
};

UIKIT_EXTERN NSString * const kJFDirectory;
UIKIT_EXTERN NSString * const kJFDirectoryAlreadyExistAtPath;
UIKIT_EXTERN NSString * const kJFDirectoryDoesNotExistAtPath;
UIKIT_EXTERN NSString * const kJFDirectoryCreateSuccess;
UIKIT_EXTERN NSString * const kJFDirectoryCreateFaild;
UIKIT_EXTERN NSString * const kJFDirectoryDeletedSuccess;
UIKIT_EXTERN NSString * const kJFDirectoryDeletedFaild;
UIKIT_EXTERN NSString * const kJFDirectoryIsEmpty;

@interface JFFolderOperationTool : JFFileToolBase

/**
 文件夹是否存在

 @param path 检测路径
 @return 检测结果
 */
+ (BOOL)directoryExistsAtPath:(NSString *)path;

/**
 删除文件夹
 
 @param path 删除路径
 @return 删除结果
 */
+ (BOOL)deleteDirectoryAtPath:(NSString *)path;

/**
 创建文件夹
 
 @param path 创建路径
 @param complete 创建结果
 @return 返回结果
 */
+ (BOOL)createDirectoryAtPath:(NSString *)path completionHandler:(void (^)(NSUInteger result, NSString *message))complete;

/**
 获取文件夹下子路径

 @param path 文件夹路径
 @param isLocateFileType 是否需要定位到文件类型
 @return 文件名集合
 */
+ (NSArray *)getSubpathInDirectoryPath:(NSString *)path locateFileType:(BOOL)isLocateFileType;

/**
  文件夹信息

 @param directoryPath 文件夹路径
 @return 结果
 */
+ (NSDictionary *)getDirectoryInfoAtPath:(NSString *)directoryPath;
@end

NS_ASSUME_NONNULL_END
