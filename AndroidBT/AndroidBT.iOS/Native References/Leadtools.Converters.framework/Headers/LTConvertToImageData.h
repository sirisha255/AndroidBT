// *************************************************************
// Copyright (c) 1991-2022 LEAD Technologies, Inc.
// All Rights Reserved.
// *************************************************************
//
//  LTConvertToImageData.h
//  Leadtools.Converters
//

#import <Leadtools/LTLeadtoolsDefines.h>
#import <Leadtools.Converters/LTConvertersDefines.h>

NS_CLASS_AVAILABLE(10_10, 8_0)
@interface LTConvertToImageData : NSObject

@property (nonatomic, assign) BOOL resample;

@property (nonatomic, assign) NSUInteger maximumWidth;
@property (nonatomic, assign) NSUInteger maximumHeight;

@property (nonatomic, assign) LTConvertToImageOptions options;
@property (nonatomic, assign) LTRasterPaintSizeMode sizeMode;

@end
