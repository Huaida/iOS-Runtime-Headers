/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction> {
}

@property(retain) SAAlarmObject * alarmToCreate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setAlarmToCreate:(id)arg1;

@end