// *************************************************************
// Copyright (c) 1991-2022 LEAD Technologies, Inc.
// All Rights Reserved.
// *************************************************************
//
//  LTRasterImageRenderOptions.h
//  Leadtools.Converters
//

typedef NS_OPTIONS(NSUInteger, LTRasterRenderDisplayModeFlags) {
    LTRasterRenderDisplayModeFlagNone            = 0x0000,
    LTRasterRenderDisplayModeFlagOrderedDither   = 0x0001,
    LTRasterRenderDisplayModeFlagFastRender      = 0x0002,
    LTRasterRenderDisplayModeFlagIndexedRender   = 0x0004,
    LTRasterRenderDisplayModeFlagDitheredRender  = 0x0008,
    LTRasterRenderDisplayModeFlagScaleToGray     = 0x0010,
    LTRasterRenderDisplayModeFlagHalftonePrint   = 0x0020,
    LTRasterRenderDisplayModeFlagFavorBlack      = 0x0040,
    LTRasterRenderDisplayModeFlagFixedPalette    = 0x0080,
    LTRasterRenderDisplayModeFlagNetscapePalette = 0x0100,
    LTRasterRenderDisplayModeFlagResample        = 0x0200,
    LTRasterRenderDisplayModeFlagBicubic         = 0x0400
};

typedef NS_ENUM(NSInteger, LTRasterRenderingEngine) {
    LTRasterRenderingEngineCoreGraphics
};

NS_ASSUME_NONNULL_BEGIN

LT_CLASS_AVAILABLE(10_10, 8_0, 20_0)
@interface LTRasterImageRenderOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, nonatomic, strong, readonly) LTRasterImageRenderOptions *defaultOptions NS_SWIFT_NAME(default);

@property (nonatomic, assign)                  BOOL useTransform;
@property (nonatomic, assign)                  BOOL ignoreCTM;

@property (nonatomic, assign)                  CGFloat opacity; // [0.0 1.0]

@property (nonatomic, assign)                  LTRasterRenderingEngine renderingEngine;
@property (nonatomic, assign)                  LTRasterRenderDisplayModeFlags renderDisplayMode;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
