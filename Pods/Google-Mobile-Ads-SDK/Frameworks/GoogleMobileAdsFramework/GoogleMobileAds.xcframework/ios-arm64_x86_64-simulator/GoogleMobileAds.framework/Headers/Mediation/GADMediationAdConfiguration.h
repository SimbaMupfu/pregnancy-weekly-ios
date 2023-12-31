//
//  GADMediationAdConfiguration.h
//  Google Mobile Ads SDK
//
//  Copyright 2018 Google LLC. All rights reserved.
//

#import <GoogleMobileAds/GADAdNetworkExtras.h>
#import <GoogleMobileAds/GoogleMobileAdsDefines.h>
#import <GoogleMobileAds/Mediation/GADMediationServerConfiguration.h>
#import <UIKit/UIKit.h>

/// Provided by the Google Mobile Ads SDK for the adapter to render the ad. Contains 3PAS and other
/// ad configuration information.
@interface GADMediationAdConfiguration : NSObject

/// The ad string returned from the 3PAS.
@property(nonatomic, readonly, nullable) NSString *bidResponse;

/// View controller to present from. This value must be read at presentation time to obtain the most
/// recent value. Must be accessed on the main queue.
@property(nonatomic, readonly, nullable) UIViewController *topViewController;

/// Mediation configuration set by the publisher on the AdMob frontend.
@property(nonatomic, readonly, nonnull) GADMediationCredentials *credentials;

/// PNG data containing a watermark that identifies the ad's source.
@property(nonatomic, readonly, nullable) NSData *watermark;

/// Extras the publisher registered with -[GADRequest registerAdNetworkExtras:].
@property(nonatomic, readonly, nullable) id<GADAdNetworkExtras> extras;

/// Indicates whether the publisher is requesting test ads.
@property(nonatomic, readonly) BOOL isTestRequest;

#pragma mark - Deprecated

/// Deprecated and unsupported. Always returns NO.
@property(nonatomic, readonly) BOOL hasUserLocation GAD_DEPRECATED_MSG_ATTRIBUTE(
    "Deprecated and unsupported. Always returns NO.");

/// Deprecated and unsupported. Always returns 0.
@property(nonatomic, readonly) CGFloat userLatitude GAD_DEPRECATED_MSG_ATTRIBUTE(
    "Deprecated and unsupported. Always returns 0.");

/// Deprecated and unsupported. Always returns 0.
@property(nonatomic, readonly) CGFloat userLongitude GAD_DEPRECATED_MSG_ATTRIBUTE(
    "Deprecated and unsupported. Always returns 0.");

/// Deprecated and unsupported. Always returns 0.
@property(nonatomic, readonly) CGFloat userLocationAccuracyInMeters GAD_DEPRECATED_MSG_ATTRIBUTE(
    "Deprecated and unsupported. Always returns 0.");

/// The value of childDirectedTreatment supplied by the publisher. Is nil if the publisher hasn't
/// specified child directed treatment. Is @YES if child directed treatment is enabled.
@property(nonatomic, readonly, nullable)
    NSNumber *childDirectedTreatment GAD_DEPRECATED_MSG_ATTRIBUTE(
        "Deprecated. Use "
        "GADMobileAds.sharedInstance.requestConfiguration.tagForChildDirectedTreatment instead.");

@end
