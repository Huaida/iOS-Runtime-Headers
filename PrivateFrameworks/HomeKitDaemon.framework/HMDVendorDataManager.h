/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVendorDataManager : NSObject <HMFTimerDelegate> {
    int  _dataVersion;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    HMFTimer * _fetchTimer;
    NSURLSession * _urlSession;
    NSDictionary * _vendorModelEntries;
}

@property (nonatomic) int dataVersion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFTimer *fetchTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, retain) NSDictionary *vendorModelEntries;

+ (id)dbURL;
+ (id)sharedVendorDataManager;

- (void).cxx_destruct;
- (void)_fetchDataFromServer;
- (void)_handleData:(id)arg1 fromServerWithError:(id)arg2;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_initWithLocalFile;
- (BOOL)_isSameVendorList:(id)arg1;
- (id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (BOOL)_parseDatabaseFromDictionary:(id)arg1;
- (id)_parseManufacturersList:(id)arg1;
- (void)_saveToLocalFile:(id)arg1;
- (int)dataVersion;
- (id)databaseQueue;
- (id)fetchTimer;
- (id)init;
- (void)setDataVersion:(int)arg1;
- (void)setVendorModelEntries:(id)arg1;
- (void)start;
- (void)timerDidFire:(id)arg1;
- (id)urlSession;
- (id)vendorModelEntries;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;

@end