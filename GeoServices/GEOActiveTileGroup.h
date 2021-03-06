/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray, NSString;



@interface GEOActiveTileGroup : PBCodable <NSCopying>

{

    NSString *_addressCorrectionInitURL;

    NSString *_addressCorrectionUpdateURL;

    NSMutableArray *_attributions;

    NSString *_autocompleteURL;

    NSString *_batchReverseGeocoderURL;

    NSString *_directionsURL;

    NSString *_etaURL;

    NSString *_forwardGeocoderURL;

    unsigned int _identifier;

    NSString *_locationShiftURL;

    NSString *_mapMatchURL;

    NSString *_polyLocationShiftURL;

    NSString *_problemStatusURL;

    NSString *_problemSubmissionURL;

    NSMutableArray *_regionalResourceRegions;

    NSMutableArray *_regionalResourceTiles;

    NSString *_regionalResourcesURL;

    NSString *_releaseInfo;

    NSMutableArray *_resources;

    NSString *_resourcesURL;

    NSString *_reverseGeocoderURL;

    NSString *_searchAttributionManifestURL;

    NSString *_searchURL;

    NSString *_simpleETAURL;

    NSMutableArray *_tileSets;

    NSString *_uniqueIdentifier;

}



- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;

- (void)_resetBestLanguages;

- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;

- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;

- (void)addAttribution:(id)arg1;

- (void)addRegionalResourceRegion:(id)arg1;

- (void)addRegionalResourceTile:(id)arg1;

- (void)addResource:(id)arg1;

- (void)addTileSet:(id)arg1;

@property(retain, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;

@property(retain, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;

- (id)attributionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;

- (unsigned long long)attributionsCount;

@property(retain, nonatomic) NSString *autocompleteURL; // @synthesize autocompleteURL=_autocompleteURL;

- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;

@property(retain, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;

- (void)clearAttributions;

- (void)clearRegionalResourceRegions;

- (void)clearRegionalResourceTiles;

- (void)clearResources;

- (void)clearTileSets;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(retain, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;

@property(retain, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;

- (id)flatRegionalResourceTilesForMapRect:(CDStruct_90e2a262)arg1;

@property(retain, nonatomic) NSString *forwardGeocoderURL; // @synthesize forwardGeocoderURL=_forwardGeocoderURL;

@property(readonly, nonatomic) _Bool hasAddressCorrectionInitURL;

@property(readonly, nonatomic) _Bool hasAddressCorrectionUpdateURL;

@property(readonly, nonatomic) _Bool hasAutocompleteURL;

@property(readonly, nonatomic) _Bool hasBatchReverseGeocoderURL;

@property(readonly, nonatomic) _Bool hasDirectionsURL;

@property(readonly, nonatomic) _Bool hasEtaURL;

@property(readonly, nonatomic) _Bool hasForwardGeocoderURL;

@property(readonly, nonatomic) _Bool hasLocationShiftURL;

@property(readonly, nonatomic) _Bool hasMapMatchURL;

@property(readonly, nonatomic) _Bool hasPolyLocationShiftURL;

@property(readonly, nonatomic) _Bool hasProblemStatusURL;

@property(readonly, nonatomic) _Bool hasProblemSubmissionURL;

- (_Bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey *)arg1;

@property(readonly, nonatomic) _Bool hasRegionalResourcesURL;

@property(readonly, nonatomic) _Bool hasReleaseInfo;

@property(readonly, nonatomic) _Bool hasResourcesURL;

@property(readonly, nonatomic) _Bool hasReverseGeocoderURL;

@property(readonly, nonatomic) _Bool hasSearchAttributionManifestURL;

@property(readonly, nonatomic) _Bool hasSearchURL;

@property(readonly, nonatomic) _Bool hasSimpleETAURL;

@property(readonly, nonatomic) _Bool hasUniqueIdentifier;

- (unsigned long long)hash;

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;

- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;

- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;

- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;

@property(retain, nonatomic) NSString *locationShiftURL; // @synthesize locationShiftURL=_locationShiftURL;

@property(retain, nonatomic) NSString *mapMatchURL; // @synthesize mapMatchURL=_mapMatchURL;

- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey *)arg1 useStatusCodes:(_Bool *)arg2;

@property(retain, nonatomic) NSString *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;

@property(retain, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;

@property(retain, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;

- (_Bool)readFrom:(id)arg1;

- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey *)arg1;

- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *regionalResourceRegions; // @synthesize regionalResourceRegions=_regionalResourceRegions;

- (unsigned long long)regionalResourceRegionsCount;

- (id)regionalResourceRegionsForMapRect:(CDStruct_90e2a262)arg1;

- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *regionalResourceTiles; // @synthesize regionalResourceTiles=_regionalResourceTiles;

- (unsigned long long)regionalResourceTilesCount;

@property(retain, nonatomic) NSString *regionalResourcesURL; // @synthesize regionalResourcesURL=_regionalResourcesURL;

@property(retain, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;

- (id)resourceAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;

- (unsigned long long)resourcesCount;

@property(retain, nonatomic) NSString *resourcesURL; // @synthesize resourcesURL=_resourcesURL;

@property(retain, nonatomic) NSString *reverseGeocoderURL; // @synthesize reverseGeocoderURL=_reverseGeocoderURL;

@property(retain, nonatomic) NSString *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;

@property(retain, nonatomic) NSString *searchURL; // @synthesize searchURL=_searchURL;

@property(retain, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;

@property(retain, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;

@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;

- (id)tileSetAtIndex:(unsigned long long)arg1;

- (unsigned long long)tileSetsCount;

- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;

- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;

- (void)writeTo:(id)arg1;



@end


