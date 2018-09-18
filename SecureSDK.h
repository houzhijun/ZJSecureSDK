//
//  SecureTool.h
//  EncryptSDK
//
//  Created by RG on 2018/9/17.
//  Copyright © 2018年 Houzhijun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>


@interface SecureSDK : NSObject

/** MD5 32位 大写输出*/
+ (NSString *)md532:(NSString *)inPutText;

/** md5 32位 小写输出*/
+ (NSString *)MD532:(NSString *)inPutText;

/**3DES加密/解密
 *  @parameter   plainText  加解密内容
 *  @parameter   operationType  加密\ 解密
 *  @parameter   key       密钥（不能为空）
 *   @parameter   deslv  便宜向量(可为空)
 */
+ (NSString *)inputText3DES:(NSString *)inputText operationType:(CCOperation)operationType key:(NSString *)key desIv:(NSString *)desIv;

/**DES加密/解密
 *  @parameter   plainText  加解密内容
 *  @parameter   operationType  加密\ 解密
 *  @parameter   key       密钥（不能为空）
 *   @parameter   deslv  便宜向量(可为空)
 */
+ (NSString *)inputTextDES:(NSString *)inputText operationType:(CCOperation)operationType key:(NSString *)key desIv:(NSString *)desIv;


/**AES加密/解密
 *  @parameter   plainText  加解密内容
 *  @parameter   operationType  加密\ 解密
 *  @parameter   key       密钥（不能为空）
 *   @parameter   deslv  便宜向量(可为空)
 */
+ (NSString *)inputTextAES:(NSString *)inputText operationType:(CCOperation)operationType key:(NSString *)key desIv:(NSString *)desIv;


@end
