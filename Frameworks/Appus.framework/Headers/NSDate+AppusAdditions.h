#import <Foundation/Foundation.h>

@interface NSDate (AppusAdditions)

- (NSUInteger) daysAgo;
- (NSUInteger) daysAgoAgainstMidnight;
- (NSString *) stringDaysAgo;
- (NSString *) stringDaysAgoAgainstMidnight:(BOOL)flag;
- (NSUInteger) weekday;
- (NSUInteger) day;
- (NSUInteger) month;
- (NSUInteger) year;
- (NSUInteger) hour;
- (NSUInteger) hourWith12hCycle;
- (BOOL) isPM;
- (NSUInteger) minute;
- (NSUInteger) second;
- (NSDate *) addMonthes:(int) monthesToAdd;
- (NSDate *) addDays:(int) daysToAdd;
- (NSDate *) addHours:(int) hours;
- (NSDate *) addMinutes:(int) minutes;
- (NSDate *) addSeconds:(int) seconds;
/*
 * returns human readable string of time difference. i.e. 1 Month, 2 Weeks, 3 Hours, 7 Days (ago)
 */
- (NSString*) timeAgoFromDate:(NSDate *) date;
- (NSString *) weekdayString;
+ (NSString *) weekdayToString:(NSUInteger) week;
- (NSString *) weekdayShortString;

- (NSString *) monthString;
+ (NSString *) monthToString:(NSUInteger) month;
- (NSString *) monthShortString;

- (NSDate *) dateWithoutTime;
+ (NSDate *) dateWithoutTime;

#pragma mark -
#pragma mark NSString -> NSDate
// yyyy-MM-dd HH:mm:ss
+ (NSString *) dbFormatString;

//
// Deprecated. 
// Use +(NSDate *)dateFromDateString:(NSString *)string withFormat:(NSString *)format
// timezone GMT
+ (NSDate *) dateFromString:(NSString *)string withFormat:(NSString *)format __attribute__((deprecated));
//
// Deprecated.
// Use +(NSDate *)dateFromDateString:(NSString *)string;
// yyyy-MM-dd HH:mm:ss (timezone GMT)
// timezone GMT
+ (NSDate *) dateFromString:(NSString *)string __attribute__((deprecated));

// yyyy-MM-dd HH:mm:ss (timezone [NSTimeZone defaultTimeZone])
+ (NSDate *) dateFromDateString:(NSString *)string;

// in default timezone [NSTimeZone defaultTimeZone]
+ (NSDate *) dateFromDateString:(NSString *)string withFormat:(NSString *)format;

// if timezone == nil -> [NSTimeZone defaultTimeZone]
+ (NSDate *) dateFromDateString:(NSString *)string withFormat:(NSString *)format inTimeZone:(NSTimeZone*)timezone;



#pragma mark -
#pragma mark NSDate -> NSString

// yyyy-MM-dd HH:mm:ss in default timezone [NSTimeZone defaultTimeZone]
- (NSString *) stringValue;

// in default timezone [NSTimeZone defaultTimeZone]
- (NSString *) stringValueWithFormat:(NSString *)string;

// if timezone == nil -> [NSTimeZone defaultTimeZone]
- (NSString *) stringValueWithFormat:(NSString *)format inTimeZone:(NSTimeZone*)timeZone;


#pragma mark -

+ (NSString *) stringForDisplayFromDate:(NSDate *)date;
+ (NSString *) stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed;
+ (NSString *) endingForDayNumber:(int) dayNumber;
+ (NSDateComponents *) timeIntervalToDateComponents:(NSTimeInterval) interval;
@end