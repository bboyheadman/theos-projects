/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import "MTRGAbstractDataProvider.h"

@class NSString, CLLocationManager;

@interface MTRGLocationDataProvider : MTRGAbstractDataProvider <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager;
	NSString* _locationString;
	BOOL _isUpdatingLocation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)handleLocation:(id)location;
-(void)collectData;
@end

