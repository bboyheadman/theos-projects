/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMTableController.h"
#import "vkclient-Structs.h"
#import "MKMapViewDelegate.h"
#import "UITextFieldDelegate.h"

@class SimpleAnnotation, MKMapView, UIActivityIndicatorView, VKPlace, UIView, NSArray, TextFieldGroupedCell, CLGeocoder, NSString;

__attribute__((visibility("hidden")))
@interface AddPlaceController : VKMTableController <MKMapViewDelegate, UITextFieldDelegate> {
	float MAP_HEIGHT;
	float keyboardOffset;
	BOOL pendingGeo;
	BOOL trackLocation;
	VKPlace* _place;
	id _handler;
	UIView* _header;
	MKMapView* _mapView;
	SimpleAnnotation* _annotation;
	NSArray* _cells;
	TextFieldGroupedCell* _cellName;
	TextFieldGroupedCell* _cellStreet;
	CLGeocoder* _geocoder;
	UIActivityIndicatorView* _indicator;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id handler;
@property(retain, nonatomic) VKPlace* place;
@property(retain, nonatomic) UIActivityIndicatorView* indicator;
@property(retain, nonatomic) CLGeocoder* geocoder;
@property(retain, nonatomic) TextFieldGroupedCell* cellStreet;
@property(retain, nonatomic) TextFieldGroupedCell* cellName;
@property(retain, nonatomic) NSArray* cells;
@property(retain, nonatomic) SimpleAnnotation* annotation;
@property(retain, nonatomic) MKMapView* mapView;
@property(retain, nonatomic) UIView* header;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)selectCoordinate:(CLLocationCoordinate2D)coordinate;
-(void)updateDone;
-(void)actionAdd:(id)add;
-(void)actionTextChanged:(id)changed;
-(void)actionTap:(id)tap;
-(void)notificationKeyboard:(id)keyboard;
-(void)updateLayout:(id)layout;
-(void)mapView:(id)view regionDidChangeAnimated:(BOOL)region;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)layoutMap;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(BOOL)VKMScrollViewDisablePTR;
-(int)VKMTableStyle;
-(void)dealloc;
-(id)initWithMain:(id)main andModel:(id)model;
@end

