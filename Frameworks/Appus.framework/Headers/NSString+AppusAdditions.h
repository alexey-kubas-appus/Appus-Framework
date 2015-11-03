//
//  NSStringAdditions.h
//  Vipera
//
//  Created by Dmitry Mikheev on 12/11/09.
//  Copyright 2009 POLAR-B. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSString (AppusAdditions)
+ (NSString *) stringWithGUID;
+ (BOOL) isEmpty:(NSString *) string;
+ (NSString *) cachesPath;
+ (NSString *) documentPath;
+ (NSString *) documentPathByAppendingPath:(NSString *) path;
+ (NSString *) cachesPathByAppendingPath:(NSString *) path;
+ (NSString *) tempPath;
+ (NSString *) tempPathByAppendingPath:(NSString *) path;
+ (NSString *) bundlePath;
+ (NSString *) bundlePathByAppendingPath:(NSString *) path;
+ (NSString *) libraryPath;
+ (NSString *) libraryPathByAppendingPath:(NSString *) path;


- (BOOL) containsString:(NSString *) str;
- (BOOL) startsWithString:(NSString *) str;
- (BOOL) endsWithString:(NSString *) str;
- (BOOL) isEmpty;
- (NSString *) trim;
- (NSString *) stringByTrimmingWithLength:(int) length
								  postfix:(NSString *) postfix;
- (NSString *)URLEncoded;
- (NSString*)URLDecoded;

- (NSString *) removeStringBeginingFromString:(NSString *) text;
- (NSString *) removeStringBeginingFromString:(NSString *) text includingSearchText:(BOOL) includingSearchText;
- (NSString*) addCommaToPriceString;
@end
