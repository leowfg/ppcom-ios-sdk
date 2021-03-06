//
//  PPImageView.h
//  PPMessage
//
//  Created by PPMessage on 2/5/16.
//  Copyright © 2016 PPMessage. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PPMessageImageMediaPart;

@interface PPImageView : UIImageView

- (void)loadWithUrl:(NSURL*)imageUrl placeHolderImage:(UIImage*)placeHolderImage completionHandler:(void(^)(UIImage *image))completionHandler;

- (void)loadWithImageMediaPart:(PPMessageImageMediaPart *)imageMediaPart placeHolderImage:(UIImage*)placeHolderImage completionHandler:(void(^)(UIImage *image))completionHandler;

- (void)loadWithLocaUrl:(NSString *)url;

@end
