//
//  PPSDKUtils.h
//  PPMessage
//
//  Created by PPMessage on 2/4/16.
//  Copyright © 2016 PPMessage. All rights reserved.
//

#import <Foundation/Foundation.h>

//#define PP_LOCAL_DEBUG
//#define PP_LOCAL_NGROK_DEBUG

extern NSString *const PPApiHost;
extern NSString *const PPFileHost;
extern NSString *const PPWebSocketHost;
extern NSString *const PPFileUploadHost;
extern NSString *const PPTxtUploadHost;
extern NSString *const PPAuthHost;

extern NSString *const PPApiKey;

NSString* PPFileURL(NSString *fileId);

NSString* PPRandomUUID();
NSString* PPSafeString(NSString *str);

BOOL PPIsObjectNull(id obj);
BOOL PPIsNull(NSString* str);
BOOL PPIsNotNull(NSString *str);

// An alphaumeric string that uniquely identifies a device
NSString* PPDeviceUUID();

/**
 * @description 
 *  将服务器返回的时间格式字符串：`2016-02-20 16:51:43 256237` 解析成对应的 timestamp，最后7位" 256237"将会舍去
 *  字符串长度必须是26，最终生成的timestamp是解析前19位而成的
 *  单位是秒
 */
double PPRetrieveTimestampFromString(NSString *string);

/**
 * @param withHHMMSS 是否带有具体的时间，如果YES: 那么返回 `日期 时间`这样的格式；如果NO: 那么返回`日期`这样的格式
 *                   (如果是同一天，那么不管有没有设置，都会返回`时间`这样的格式）
 */
NSString* PPFormatTimestampToHumanReadableStyle(double timestamp, BOOL withHHMMSS);
double PPFixTimestamp(double originTimestampInSeconds);
double PPCurrentTimestamp();

NSString* PPDataToString(NSData *data);
NSString* PPLocalizedString(NSString* key);

NSString* PPFormatFileSize(NSUInteger fileSizeInBytes);

/**
 * Fetch image by path
 *
 * @imagePathWithOutSuffix you should provided `aa` instead of `aa.png` when you want to get `aa.png` image
 */
UIImage* PPImageFromAssets(NSString* imagePathWithOutSuffix);
UIImage* PPDefaultAvatarImage();
UIImage* PPImageFromBundle(NSString* imagePathWithOutSuffix);
