//
//  YHNetUnility.h
//  YHNetSDK
//
//  Created by zxl on 2018/2/1.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString * const YHNetUserAgent;//USERAGENT Flag

typedef void(^YHSuccessed)(id obj);

typedef void(^YHFailed)(NSError *error);

@interface YHNetUnility : NSObject


/**
 getRequest

 @param url url
 @param successed success
 @param failed failed
 */
+(void)getRequestWithUrl:(NSString *)url withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;


/**
 postRequest

 @param url url
 @param parameters 参数
 @param successed successed
 @param failed failed
 */
+(void)postRequestWithUrl:(NSString *)url withParameters:(NSDictionary *)parameters withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;

/**
 设置UA

 @param userAgentValue str
 */
+(void)setUserAgent:(NSString *)userAgentValue;

@end
