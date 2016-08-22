// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
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
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import CoreData;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC14AppFriendsCore14HCSDKConstants")
@interface HCSDKConstants : NSObject
+ (NSString * _Nonnull)kUserName;
+ (NSString * _Nonnull)kUserAvatar;
+ (NSString * _Nonnull)kUserID;
+ (NSString * _Nonnull)kUserEmail;
+ (NSString * _Nonnull)kUserRealName;
+ (NSString * _Nonnull)kCustomData;
+ (NSString * _Nonnull)kDialogTypeGroup;
+ (NSString * _Nonnull)kDialogTypeIndividual;
+ (NSString * _Nonnull)kDialogTypeChannel;
+ (NSString * _Nonnull)kDialogTypeSystem;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;
@class NSDictionary;
@class UIImage;
@protocol HCSDKCoreSyncDelegate;

SWIFT_CLASS("_TtC14AppFriendsCore9HCSDKCore")
@interface HCSDKCore : NSObject
+ (HCSDKCore * _Nonnull)sharedInstance;
@property (nonatomic, readonly, copy) NSString * _Nonnull applicationKey;
@property (nonatomic, readonly, copy) NSString * _Nonnull applicationSecret;
@property (nonatomic, weak) id <HCSDKCoreSyncDelegate> _Nullable syncDelegate;
@property (nonatomic, readonly, copy) NSString * _Nullable appFriendsUserAccessToken;
- (void)initializeWithKey:(NSString * _Nonnull)applicationKey secret:(NSString * _Nonnull)applicationSecret completion:(void (^ _Nullable)(BOOL success, NSError * _Nullable error))completion;
- (void)enableDebug;
- (BOOL)isLogin;
- (void)loginWithUserInfo:(NSDictionary<NSString *, id> * _Nullable)params completion:(void (^ _Nullable)(id _Nullable response, NSError * _Nullable error))completion;
- (void)startRequestWithHttpMethod:(NSString * _Nonnull)method path:(NSString * _Nonnull)requestPath parameters:(NSDictionary<NSString *, id> * _Nullable)params completion:(void (^ _Nullable)(id _Nullable response, NSError * _Nullable error))completion;
- (NSString * _Nullable)currentUserID;
- (NSString * _Nullable)currentUserName;
- (void)sendMessage:(NSDictionary * _Nonnull)messageJSON dialogID:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(id _Nullable response, NSError * _Nullable error))completion;
- (void)sendMessage:(NSDictionary * _Nonnull)messageJSON userID:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(id _Nullable response, NSError * _Nullable error))completion;
- (void)uploadImage:(UIImage * _Nonnull)image completion:(void (^ _Nonnull)(NSString * _Nullable imagePublicID, NSError * _Nullable error))completion progress:(void (^ _Nonnull)(NSInteger percentage))progress;
- (NSString * _Null_unspecified)fullImage:(NSString * _Null_unspecified)publicID;
- (NSString * _Null_unspecified)thumbnailImage:(NSString * _Null_unspecified)publicID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore21HCSDKCoreSyncDelegate_")
@protocol HCSDKCoreSyncDelegate

/// This is the callback when new messages are received
///
/// \param messages array of messages of JSON objects
- (void)messagesReceived:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)messages;
@end

@class NSManagedObjectContext;
@class NSEntityDescription;

SWIFT_CLASS("_TtC14AppFriendsCore9_HCDialog")
@interface _HCDialog : NSManagedObject
+ (NSString * _Nonnull)entityName;
+ (NSEntityDescription * _Nullable)entity:(NSManagedObjectContext * _Nonnull)managedObjectContext;
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithManagedObjectContext:(NSManagedObjectContext * _Nonnull)managedObjectContext;
@property (nonatomic, copy) NSString * _Nullable customData;
@property (nonatomic, copy) NSString * _Nullable dialogID;
@property (nonatomic, strong) id _Nullable members;
@property (nonatomic, copy) NSString * _Nullable ownerID;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable type;
@end

#pragma clang diagnostic pop
