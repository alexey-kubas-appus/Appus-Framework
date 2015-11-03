//  POLAR-B framework
//
//  Created by Dmytro Mikheiev on 5/25/10.
//  Copyright 2010 POLAR-B. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PBSettings : NSObject {
	NSDictionary *_publicDictionary;
    NSMutableDictionary *_sessionDictionary;
}
+ (PBSettings *)instance;

//
// Security key for encoding/decoding data
//
+(NSString*)securityKey;


/*
 * Returns settings defined in settings.plist for current app
 */
- (id)app:(NSString*) key;
+ (id)app:(NSString *)key;
/*
 * Returns setting defined for current user (device) fully converted to Mutable (including nested objects)
 */
+ (id)userMutable:(NSString*) key;
- (id)userMutable:(NSString*) key;
/*
 * Returns setting defined for current user (device). Use NSUserDefaults
 */
- (id)user:(NSString*) key;
+ (id)user:(NSString*) key;
/*
 * Set setting for current user (device)
 */
- (void)user:(id)val key:(NSString*) key;
+ (void)user:(id)val key:(NSString*) key;
/*
 * Remove setting specified for current user
 */
- (void)removeUserSetting:(NSString*) key;
+ (void)removeUserSetting:(NSString*) key;
/*
 * Returns setting defined for current app session
 */
- (id)session:(NSString*) key;
+ (id)session:(NSString*) key;
/*
 * Set setting for current app session
 */
- (void)session:(id)val key:(NSString*) key;
+ (void)session:(id)val key:(NSString*) key;
/*
 * Remove setting specified for current app session
 */
- (void)removeSessionSetting:(NSString *) key;
+ (void)removeSessionSetting:(NSString *) key;

@end
