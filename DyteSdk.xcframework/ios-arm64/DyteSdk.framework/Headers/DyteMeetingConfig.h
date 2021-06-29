//
//  DyteMeeting.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 07/06/21.
//

#import <Foundation/Foundation.h>

@interface DyteMeetingConfig : NSObject
@property(nonatomic, assign, readonly) NSString *roomName;
@property(nonatomic, assign, readonly) NSString *authToken;
@property(nonatomic, assign, readonly) bool autoTune;
@property(nonatomic, assign, readonly) NSString *apiBase;
@property(nonatomic, assign, readonly) NSString *orgId;
@property(nonatomic, assign, readonly) bool showSetupScreen;
@property (nonatomic, assign, readonly) NSNumber *width;
@property (nonatomic, assign, readonly) NSNumber *height;

- (id)init;
- (DyteMeetingConfig *)setAuthToken:(NSString *)authToken;
- (DyteMeetingConfig *)setRoomName:(NSString *)roomName;
- (DyteMeetingConfig *)setApiBase:(NSString *)apiBase;
- (DyteMeetingConfig *)setOrgId:(NSString *)orgId;
- (DyteMeetingConfig *)setShowSetupScreen:(bool)showSetupScreen;
- (DyteMeetingConfig *)setAutoTuneEnabled:(bool)autoTune;
- (DyteMeetingConfig *)setHeight:(NSNumber *)height;
- (DyteMeetingConfig *)setWidth:(NSNumber *)width;
- (NSMutableDictionary *_Nonnull)configProperties;

@end
