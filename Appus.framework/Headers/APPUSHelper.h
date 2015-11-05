#import <Foundation/Foundation.h>

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 \
alpha:(a)]
#define HSVCOLOR(h,s,v) [UIColor colorWithHue:(h) saturation:(s) value:(v) alpha:1]
#define HSVACOLOR(h,s,v,a) [UIColor colorWithHue:(h) saturation:(s) value:(v) alpha:(a)]
#define kNSTrue         ((id) kCFBooleanTrue)
#define kNSFalse        ((id) kCFBooleanFalse)
#define NSBool(x)       ((x) ? kNSTrue : kNSFalse)
#define degreesToRadians(x) (M_PI * x / 180.0)
#define radiansToDegrees(x) (x * (180 / M_PI))
#define HEXCOLOR(c) [UIColor colorWithRed:((c>>24)&0xFF)/255.0 \
green:((c>>16)&0xFF)/255.0 \
blue:((c>>8)&0xFF)/255.0 \
alpha:((c)&0xFF)/255.0];

#define RELEASE_SAFELY(__POINTER) [__POINTER release]; __POINTER = nil
#define RELEASE_TIMER_SAFELY(__POINTER) [__POINTER invalidate]; __POINTER = nil

#define ShowShortMessage(title, body) [[[UIAlertView alloc] initWithTitle:(title) message:(body) delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil] show]
#define ShowConnectionErrorMesage ShowShortMessage(nil,@"Please check your internet connection and try again.")

#ifdef DEBUG
#define PBLog(args...) _AppusLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define PBLog(args...)
#endif

#define isIpad (UI_USER_INTERFACE_IDIOM()==UIUserInterfaceIdiomPad ? YES : NO)
#define isIphone (UI_USER_INTERFACE_IDIOM()==UIUserInterfaceIdiomPhone ? YES : NO)
#define isIphone5 ([[UIScreen mainScreen] bounds].size.height==568)

#define PBImageResizable(image) [[UIDevice currentDevice].systemVersion floatValue] >= 5?[image resizableImageWithCapInsets:UIEdgeInsetsMake(image.size.height/2, image.size.width/2, image.size.height/2, image.size.width/2) ]:[image stretchableImageWithLeftCapWidth:image.size.width/2 topCapHeight:image.size.height/2]
#define PBImageResizableWithCaps(image,leftCap,topCap) [[UIDevice currentDevice].systemVersion floatValue] >= 5?[image resizableImageWithCapInsets:UIEdgeInsetsMake(topCap, leftCap, topCap, leftCap) ]:[image stretchableImageWithLeftCapWidth:leftCap topCapHeight:topCap]


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)



@interface APPUSHelper : NSObject{
}
void _AppusLog(const char *file, int lineNumber, const char *funcName, NSString *format,...);
@end

