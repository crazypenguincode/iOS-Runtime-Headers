/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOURLCamera, PBUnknownFields;

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    struct { 
        unsigned int mapType : 1; 
    GEOURLCamera *_camera;
    } _has;
    int _mapType;
    PBUnknownFields *_unknownFields;
}

@property(retain) GEOURLCamera * camera;
@property(readonly) bool hasCamera;
@property bool hasMapType;
@property int mapType;
@property(readonly) PBUnknownFields * unknownFields;

- (id)camera;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCamera;
- (bool)hasMapType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mapType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setMapType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end