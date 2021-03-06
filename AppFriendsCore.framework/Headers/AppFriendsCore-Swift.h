// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreData;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_PROTOCOL("_TtP14AppFriendsCore20AFEncryptionDelegate_")
@protocol AFEncryptionDelegate
/// Encrypt an array of text before sending it to a user. The delegate should encrypt the text with the user’s public key.
/// \param text the array of text to be encrypted
///
/// \param userID the ID of the receiver
///
/// \param completion finish callback block. Will contain either the error or the array of encrypted text depending on the result of the encryption
///
- (void)encryptWithTexts:(NSArray<NSString *> * _Nonnull)texts forUser:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Decrypt and array of encrypted text for a user
/// \param encryptedText the array of the encrypted text
///
/// \param userID the ID of the receiver
///
/// \param completion finish callback block. Will contain either the error or the array of decrypted text depending on the result of the encryption
///
- (void)decryptWithEncryptedTexts:(NSArray<NSString *> * _Nonnull)encryptedTexts forUser:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Encrypt an array of text before sending it to a conversation. The delegate should encrypt the text with the public keys of all the users in the conversation.
/// \param text the array of text to be encrypted
///
/// \param dialogID the ID of the dialog
///
/// \param completion finish callback block. Will contain either the error or the array of encrypted text depending on the result of the encryption
///
- (void)encryptWithTexts:(NSArray<NSString *> * _Nonnull)texts forDialog:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Decrypt and array of encrypted text for a dialog
/// \param encryptedText the array of the encrypted text
///
/// \param userID the ID of the dialog
///
/// \param completion finish callback block. Will contain either the error or the array of decrypted text depending on the result of the encryption
///
- (void)decryptWithEncryptedTexts:(NSArray<NSString *> * _Nonnull)encryptedTexts forDialog:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
@end

typedef SWIFT_ENUM(NSInteger, AFError) {
  AFErrorUnknownError = 90000,
  AFErrorInvalidParams = 90001,
  AFErrorSdkNotInitialized = 90002,
  AFErrorUserNotLoggedIn = 90003,
  AFErrorDialogNotFound = 20005,
  AFErrorUserAlreadyLoggedIn = 90007,
  AFErrorLogoutWhenNotLoggedIn = 90009,
  AFErrorServerError = 90500,
  AFErrorUserNotFound = 30001,
  AFErrorRequestIsTooFrequent = 91000,
};

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("HCDialog")
@interface HCDialog : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSObject;
@class NSNumber;

@interface HCDialog (SWIFT_EXTENSION(AppFriendsCore))
@property (nonatomic, copy) NSString * _Nullable customData;
@property (nonatomic, copy) NSString * _Nullable dialogID;
@property (nonatomic, strong) NSObject * _Nullable members;
@property (nonatomic, strong) NSNumber * _Nullable muted;
@property (nonatomic, copy) NSString * _Nullable ownerID;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable type;
@end


SWIFT_CLASS("_TtC14AppFriendsCore14HCSDKConstants")
@interface HCSDKConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kUserName;)
+ (NSString * _Nonnull)kUserName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kUserAvatar;)
+ (NSString * _Nonnull)kUserAvatar SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kUserID;)
+ (NSString * _Nonnull)kUserID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kUserEmail;)
+ (NSString * _Nonnull)kUserEmail SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kUserRealName;)
+ (NSString * _Nonnull)kUserRealName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kCustomData;)
+ (NSString * _Nonnull)kCustomData SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kAppFriendsPushCategory;)
+ (NSString * _Nonnull)kAppFriendsPushCategory SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kMessageTypeSystem;)
+ (NSString * _Nonnull)kMessageTypeSystem SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull kNotificationDuplicatedSession;)
+ (NSString * _Nonnull)kNotificationDuplicatedSession SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol HCSDKCoreSyncDelegate;
@protocol HCSDKCoreEventsDelegate;
@protocol HCSDKCoreAppCustomDataDelegate;
@protocol HCSDKCoreOnlineUserObserver;
@class NSDictionary;
@class NSError;
@class UIImage;

SWIFT_CLASS("_TtC14AppFriendsCore9HCSDKCore")
@interface HCSDKCore : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HCSDKCore * _Nonnull sharedInstance;)
+ (HCSDKCore * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull applicationKey;
@property (nonatomic, readonly, copy) NSString * _Nonnull applicationSecret;
@property (nonatomic, readonly) BOOL registeredPush;
@property (nonatomic, weak) id <HCSDKCoreSyncDelegate> _Nullable syncDelegate;
@property (nonatomic, weak) id <HCSDKCoreEventsDelegate> _Nullable dialogEventDelegate;
@property (nonatomic, weak) id <HCSDKCoreAppCustomDataDelegate> _Nullable customDataReceiver;
@property (nonatomic, weak) id <AFEncryptionDelegate> _Nullable encryptionDelegate;
@property (nonatomic, readonly, copy) NSString * _Nullable appFriendsUserAccessToken;
@property (nonatomic, weak) id <HCSDKCoreOnlineUserObserver> _Nullable onlineUserObserver;
@property (nonatomic, copy) NSArray<NSDictionary *> * _Nullable onlineUsers;
@property (nonatomic) NSInteger onlineUsersCount;
- (void)initializeWithKey:(NSString * _Nonnull)applicationKey secret:(NSString * _Nonnull)applicationSecret uiVersion:(NSString * _Nullable)version completion:(void (^ _Nullable)(BOOL, NSError * _Nullable))completion;
- (NSString * _Nullable)authorizationtoken SWIFT_WARN_UNUSED_RESULT;
- (void)subscribeToOnlineUsers:(id <HCSDKCoreOnlineUserObserver> _Nonnull)observer;
- (void)unsubscribeToOlineUsers;
- (void)enableDebug;
- (BOOL)isLoggedIn SWIFT_WARN_UNUSED_RESULT;
- (void)loginWithUserInfo:(NSDictionary<NSString *, id> * _Nullable)params completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
/// Logout the current user.
/// <em>warning</em>* Please Note that this call alone does not unregister the device for push notification.
/// If you have previously registered the device for push,
/// we recommand calling AFSession.unregisterDeviceForPushNotification before you call logout.
/// \param completion call back block, which will have an error if the logout has failed
///
- (void)logout:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)startRequestWithHttpMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)requestPath parameters:(NSDictionary<NSString *, id> * _Nullable)params completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)startRequestWithHttpMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)requestPath jsonBody:(id _Nonnull)jsonBody completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)registerDeviceForPush:(NSString * _Nonnull)userID pushToken:(NSString * _Nonnull)pushToken completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (NSString * _Nullable)currentUserID SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)currentUserName SWIFT_WARN_UNUSED_RESULT;
- (void)updateUserInfo:(NSString * _Nonnull)userID userInfo:(NSDictionary<NSString *, id> * _Nonnull)userInfo completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)sendMessage:(NSDictionary<NSString *, id> * _Nonnull)messageJSON dialogID:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)sendMessage:(NSDictionary<NSString *, id> * _Nonnull)messageJSON userID:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)sendMessage:(NSDictionary<NSString *, id> * _Nonnull)messageJSON channelID:(NSString * _Nonnull)channelID completion:(void (^ _Nullable)(id _Nullable, NSError * _Nullable))completion;
- (void)uploadImage:(UIImage * _Nonnull)image completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion progress:(void (^ _Nonnull)(NSInteger))progress;
/// upload video to AppFriends CDN
/// \param videoData the video data. Max size is 10MB
///
/// \param completion completion block
///
/// \param progress progress block
///
- (void)uploadVideo:(NSData * _Nonnull)videoData completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion progress:(void (^ _Nonnull)(NSInteger))progress;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface HCSDKCore (SWIFT_EXTENSION(AppFriendsCore))
- (void)postMessageReceiptWithTempID:(NSString * _Nonnull)messageTempID dialogID:(NSString * _Nonnull)dialogID senderID:(NSString * _Nonnull)senderID receiptStatus:(NSString * _Nonnull)receiptStatus;
@end


@interface HCSDKCore (SWIFT_EXTENSION(AppFriendsCore))
/// User’s session in public channel expires in 3 minutes,
/// so if you are in the channel, you should renew the session before it expires.
/// \param channelID the public channel’s ID
///
- (void)renewSessionForPublicChannel:(NSString * _Nonnull)channelID forceReloadMessage:(BOOL)forced completion:(void (^ _Nullable)(BOOL))completion;
- (void)fetchHistoryMessagesFromPublicChannel:(NSString * _Nonnull)channelID fromMessageID:(NSString * _Nonnull)messageID completion:(void (^ _Nullable)(NSError * _Nullable, NSString * _Nullable))completion;
- (void)joinChannelWithChannelID:(NSString * _Nonnull)cid completion:(void (^ _Nullable)(NSError * _Nullable))completion;
- (void)leaveChannelWithChannelID:(NSString * _Nonnull)cid completion:(void (^ _Nullable)(NSError * _Nullable))completion;
@end


@interface HCSDKCore (SWIFT_EXTENSION(AppFriendsCore))
@end

@class NSHTTPCookie;
@class UIApplication;

@interface HCSDKCore (SWIFT_EXTENSION(AppFriendsCore))
- (NSDictionary<NSString *, NSString *> * _Nonnull)appfriendsHttpHeader SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSHTTPCookie *> * _Nullable)cookiesForAppFriendsStreamingWithUrl:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isAppFriendsVideoURLWithUrl:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)videoStreamingURLWithPublicID:(NSString * _Nonnull)pid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)videoThumbnailURLWithPublicID:(NSString * _Nonnull)pid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)fullImageWithPublicID:(NSString * _Nonnull)pid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)thumbnailImageWithPublicID:(NSString * _Nonnull)pid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)convertToAppFriendsPublicResourceWithOriginal:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
/// Use this if the resource needs signature to display. (full content)
/// \param url original url
///
///
/// returns:
/// private url
- (NSString * _Nonnull)convertToAppFriendsPrivateResourceWithOriginal:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)convertFromAppFriendsResourceWithOriginal:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (void)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (BOOL)application:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore30HCSDKCoreAppCustomDataDelegate_")
@protocol HCSDKCoreAppCustomDataDelegate
@optional
/// App defined custom data is received
/// \param data the data the app ask AF to send
///
- (void)appCustomPushReceivedWithData:(NSString * _Nonnull)data;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore23HCSDKCoreEventsDelegate_")
@protocol HCSDKCoreEventsDelegate
/// This is the callback to report dialog events posted by the app.
/// For example, typing indicator is deliver via this callback
- (void)dialogEventReceived:(NSString * _Nonnull)dialogID eventName:(NSString * _Nonnull)eventName customData:(NSString * _Nonnull)customData;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore27HCSDKCoreOnlineUserObserver_")
@protocol HCSDKCoreOnlineUserObserver
- (void)onlineUserCountChangedWithCount:(NSInteger)count;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore21HCSDKCoreSyncDelegate_")
@protocol HCSDKCoreSyncDelegate
/// This is the callback when new messages are received
/// \param messages array of messages of JSON objects
///
- (void)messagesReceived:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)messages;
/// This is asking to provide the last message you received in a certain channel.
/// AppFriendsUI SDK takes care of this.
/// However, if you decide to only use AppFriendsCore,
/// you need to be responsible of implementing this method in the delegate class
/// \param channelID the ID of the channel
///
///
/// returns:
/// the ID of the last message you received in that channel
- (NSString * _Nullable)lastReceivedMessageIDInChannel:(NSString * _Nonnull)channelID SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSError (SWIFT_EXTENSION(AppFriendsCore))
+ (NSError * _Nonnull)errorWithAFErrorWithAfError:(enum AFError)afError SWIFT_WARN_UNUSED_RESULT;
+ (NSError * _Nonnull)errorWithAFErrorWithAfError:(enum AFError)afError errorMessage:(NSString * _Nonnull)errorMessage SWIFT_WARN_UNUSED_RESULT;
+ (NSError * _Nonnull)afErrorWithErrorCode:(NSInteger)code errorReason:(NSString * _Nullable)reason errorDescription:(NSString * _Nullable)description SWIFT_WARN_UNUSED_RESULT;
@end

#pragma clang diagnostic pop
