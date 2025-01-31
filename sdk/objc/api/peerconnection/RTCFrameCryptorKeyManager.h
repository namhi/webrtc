/*
 * Copyright 2022 LiveKit
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "RTCMacros.h"

NS_ASSUME_NONNULL_BEGIN

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCFrameCryptorKeyManager) : NSObject

- (void)setKey:(NSData *)key withIndex:(int)index forParticipant:(NSString *)participantId;

- (void)setKeys:(NSArray<NSData *> *)keys forParticipant:(NSString *)participantId;

- (NSArray<NSData*> *) getKeys:(NSString *)participantId;

- (instancetype)init;

@end

NS_ASSUME_NONNULL_END
