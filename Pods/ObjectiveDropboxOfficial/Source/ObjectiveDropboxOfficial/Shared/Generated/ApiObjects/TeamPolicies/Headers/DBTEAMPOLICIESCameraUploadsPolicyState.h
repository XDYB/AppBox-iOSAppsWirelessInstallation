///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMPOLICIESCameraUploadsPolicyState;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CameraUploadsPolicyState` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESCameraUploadsPolicyState : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESCameraUploadsPolicyStateTag` enum type represents the
/// possible tag states with which the `DBTEAMPOLICIESCameraUploadsPolicyState`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMPOLICIESCameraUploadsPolicyStateTag) {
  /// Background camera uploads are disabled.
  DBTEAMPOLICIESCameraUploadsPolicyStateDisabled,

  /// Background camera uploads are allowed.
  DBTEAMPOLICIESCameraUploadsPolicyStateEnabled,

  /// (no description).
  DBTEAMPOLICIESCameraUploadsPolicyStateOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESCameraUploadsPolicyStateTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Background camera uploads are
/// disabled.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// Description of the "enabled" tag state: Background camera uploads are
/// allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMPOLICIESCameraUploadsPolicyState`
/// union.
///
@interface DBTEAMPOLICIESCameraUploadsPolicyStateSerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESCameraUploadsPolicyState` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESCameraUploadsPolicyState`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESCameraUploadsPolicyState` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESCameraUploadsPolicyState *)instance;

///
/// Deserializes `DBTEAMPOLICIESCameraUploadsPolicyState` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESCameraUploadsPolicyState` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESCameraUploadsPolicyState`
/// object.
///
+ (DBTEAMPOLICIESCameraUploadsPolicyState *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
