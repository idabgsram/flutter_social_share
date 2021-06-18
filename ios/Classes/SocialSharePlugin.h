#import <Flutter/Flutter.h>

@interface SocialSharePlugin : NSObject<FlutterPlugin>

// Whatsapp UTI
typedef enum {
	WhatsAppImageType = 0,
	WhatsAppAudioType,
	WhatsAppVideoType
} WhatsAppType;

+ (id)getInstance;
- (void)sendText:(NSString*)message;
- (void)sendFile:(NSData *)data UTI:(WhatsAppType)type inView:(UIView *)view;

@end
