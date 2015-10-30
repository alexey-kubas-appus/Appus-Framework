//
//  UIImageView+Gif.h
//  Frameworx
//
//  Created by polar12 on 11/7/12.
//  Copyright (c) 2012 eighteye. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface UIImageView (Gif)

-(void)addImageFromData:(NSData*)imageData isShowGifAnimation:(BOOL)isShowGifAnimation;
-(void)addGifImage:(NSData*)gifImageData;
-(void)exportGifImageToPath:(NSString*)path;
@end

@interface NSData (Gif)
-(BOOL)isGifimage;
@end