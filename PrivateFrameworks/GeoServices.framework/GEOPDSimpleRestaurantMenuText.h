/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSimpleRestaurantMenuText : PBCodable <NSCopying> {
    NSMutableArray * _menuGroups;
}

@property (nonatomic, retain) NSMutableArray *menuGroups;

+ (Class)menuGroupType;

- (void)addMenuGroup:(id)arg1;
- (void)clearMenuGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)menuGroupAtIndex:(unsigned int)arg1;
- (id)menuGroups;
- (unsigned int)menuGroupsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMenuGroups:(id)arg1;
- (void)writeTo:(id)arg1;

@end
