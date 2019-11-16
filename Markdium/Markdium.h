//
//  Markdium.h
//  Markdium
//
//  Created by v on 2019/11/15.
//  Copyright © 2019 lvv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarkdiumTypes.h"

@interface Markdium : NSObject

@property(nonatomic, assign) NSUInteger width;  // Specify wrap width (default 0 = nowrap)

+ (nullable instancetype)new NS_UNAVAILABLE;
- (nullable instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithString:(nonnull NSString *)string;
- (nullable instancetype)initWithString:(nonnull NSString *)string options:(MDOptions)options;
- (nullable instancetype)initWithString:(nonnull NSString *)string options:(MDOptions)options extensions:(MDExtensions)extensions;

- (nullable instancetype)initWithPath:(nonnull NSString *)path;
- (nullable instancetype)initWithPath:(nonnull NSString *)path options:(MDOptions)options;
- (nullable instancetype)initWithPath:(nonnull NSString *)path options:(MDOptions)options extensions:(MDExtensions)extensions;

@end

@interface Markdium (render)

- (nullable NSString *)renderAsHTML;

- (nullable NSString *)renderAsXML;

- (nullable NSString *)renderAsMAN;

- (nullable NSString *)renderAsLatex;

- (nullable NSString *)renderAsCommonMark;

- (nullable NSString *)renderAsPlaintext;

@end

@interface Markdium (version)

+ (nonnull NSString *)versionString;

+ (NSInteger)version;

@end
