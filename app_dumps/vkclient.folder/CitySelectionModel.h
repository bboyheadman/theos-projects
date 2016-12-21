/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ListModel.h"

@class VKCountry, VKCity;

__attribute__((visibility("hidden")))
@interface CitySelectionModel : ListModel {
	VKCountry* _country;
	VKCity* _selectedCity;
}
@property(retain, nonatomic) VKCity* selectedCity;
@property(retain, nonatomic) VKCountry* country;
-(id)countKey;
-(id)process:(id)process;
-(id)requestForContext:(id)context;
-(void)dealloc;
@end

