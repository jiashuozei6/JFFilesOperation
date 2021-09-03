//
//  JFFileOperationTool.h
//  JFGlobalFunctions
//
//  Created by Elvis on 2019/5/31.
//

#import <JFFileOperations/JFFileToolBase.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, JFFile)  {
  
  JFFileAlreadyExistAtPath = 6270, //文件已存在
  JFFileDoesNotExistAtPath = 6271, //文件不存在
  JFFileSavedSuccess = 0, //文件保存成功
  JFFileSavedFaild = 6272, //文件保存失败
  JFFileCopiedSuccess = 0, //文件拷贝成功
  JFFileCopiedFaild = 6273, //文件复制失败
  JFFileCutSuccess = 0, //文件剪切成功
  JFFileCutFaild = 6274, //文件剪切失败
  JFFileDeletedSuccess = 0, //文件删除成功
  JFFileDeletedFaild = 6275, //文件删除失败
  JFFileReadSuccess = 0, //文件读取成功
  JFFileReadFaild = 6276, //读取文件失败
};

UIKIT_EXTERN NSString * const kJFFile;
UIKIT_EXTERN NSString * const kJFFileAlreadyExistAtPath;
UIKIT_EXTERN NSString * const kJFFileDoesNotExistAtPath;
UIKIT_EXTERN NSString * const kJFFileSavedSuccess;
UIKIT_EXTERN NSString * const kJFFileSavedFaild;
UIKIT_EXTERN NSString * const kJFFileCopiedSuccess;
UIKIT_EXTERN NSString * const kJFFileCopiedFaild;
UIKIT_EXTERN NSString * const kJFFileCutSuccess;
UIKIT_EXTERN NSString * const kJFFileCutFaild;
UIKIT_EXTERN NSString * const kJFFileDeletedSuccess;
UIKIT_EXTERN NSString * const kJFFileDeletedFaild;
UIKIT_EXTERN NSString * const kJFFileReadSuccess;
UIKIT_EXTERN NSString * const kJFFileReadFaild;

@interface JFFileOperationTool : JFFileToolBase
/**
 判断文件是否已经已经存在
 
 @param filePath 文件路径
 @return YES:存在
 @return NO:不存在
 */
+ (BOOL)fileExistsAtPath:(NSString *)filePath;

/**
 拷贝文件
 
 @param srcPath 起始路径
 @param desPath 目标路径
 @return 拷贝结果
 */
+ (BOOL)copyFileAtPath:(NSString *)srcPath toPath:(NSString *)desPath;

/**
 移动/剪切文件
 
 @param srcPath 起始路径
 @param desPath 目标路径
 @return 移动结果
 */
+ (BOOL)moveFileAtPath:(NSString *)srcPath toPath:(NSString *)desPath;

/**
 删除文件
 
 @param filePath 文件路径
 @return 删除结果
 */
+ (BOOL)removeFileAtPath:(NSString *)filePath;

/**
 创建文件
 
 @param filePath 文件路径
 @param dataString 文件内容
 @return 创建结果
 */
+ (BOOL)createFileAtPath:(NSString *)filePath data:(NSString *)dataString;

/**
 获取文件信息
 
 @param filePath 文件路径
 @return 文件信息
 */
+ (NSDictionary *)getFileInfoAtPath:(NSString *)filePath;

/**
获取文件信息(修改为自定义字段)

@param sourcePath 文件路径
@return 文件信息
*/
+ (NSDictionary *)customKeyFileInfoAtPath:(NSString *)sourcePath;

/**
 获取文件大小
 
 @param filePath 文件路径
 @return 文件大小
 */
+ (NSString *)fileSizeAtPath:(NSString *)filePath;

/**
 文件是否可读
 
 @param filePath 文件路径
 @return 判断结果
 */
+ (BOOL)fileReadableAtPath:(NSString *)filePath;

/**
 文件是否可写
 
 @param filePath 文件路径
 @return 判断结果
 */
+ (BOOL)fileWriteableAtPath:(NSString *)filePath;

/**
 文件是否可删
 
 @param filePath 文件路径
 @return 判断结果
 */
+ (BOOL)fileDeleteableAtPath:(NSString *)filePath;

@end

NS_ASSUME_NONNULL_END
