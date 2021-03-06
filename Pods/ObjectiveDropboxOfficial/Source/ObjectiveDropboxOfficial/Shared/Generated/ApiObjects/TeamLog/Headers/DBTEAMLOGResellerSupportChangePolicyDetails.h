///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGResellerSupportChangePolicyDetails;
@class DBTEAMLOGResellerSupportPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ResellerSupportChangePolicyDetails` struct.
///
/// Enabled/disabled reseller support.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGResellerSupportChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New Reseller support policy.
@property (nonatomic, readonly) DBTEAMLOGResellerSupportPolicy *dNewValue;

/// Previous Reseller support policy.
@property (nonatomic, readonly) DBTEAMLOGResellerSupportPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New Reseller support policy.
/// @param previousValue Previous Reseller support policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGResellerSupportPolicy *)dNewValue
                    previousValue:(DBTEAMLOGResellerSupportPolicy *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ResellerSupportChangePolicyDetails` struct.
///
@interface DBTEAMLOGResellerSupportChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGResellerSupportChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGResellerSupportChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGResellerSupportChangePolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGResellerSupportChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGResellerSupportChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGResellerSupportChangePolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGResellerSupportChangePolicyDetails` object.
///
+ (DBTEAMLOGResellerSupportChangePolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
