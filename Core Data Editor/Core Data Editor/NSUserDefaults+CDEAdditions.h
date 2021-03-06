#import <Foundation/Foundation.h>

extern const struct CDEUserDefaultsKeys {
	__unsafe_unretained NSString *showsNameOfEntityInObjectIDColumn;
    __unsafe_unretained NSString *numberOfDecimals;
    __unsafe_unretained NSString *dateFormatterTimeStyle;
    __unsafe_unretained NSString *dateFormatterDateStyle;
    __unsafe_unretained NSString *showsNiceEntityAndPropertyNames;
    __unsafe_unretained NSString *automaticallyResolvesValidationErrors;
    __unsafe_unretained NSString *buildProductsDirectoryBookmarkData;
    __unsafe_unretained NSString *simulatorDirectoryBookmarkData;
    __unsafe_unretained NSString *applicationNeedsSetup;
    __unsafe_unretained NSString *firstLaunchDate;
    
} CDEUserDefaultsKeys;

extern const struct CDEUserDefaultsNotifications {
	__unsafe_unretained NSString *didChangeSimulatorDirectory;
    __unsafe_unretained NSString *didChangeBuildProductsDirectory;
} CDEUserDefaultsNotifications;

@interface NSUserDefaults (CDEAdditions)

#pragma mark - Register Defaults
+ (void)registerCoreDataEditorDefaults_cde;

#pragma mark - Properties
@property (nonatomic, assign, getter = showsNameOfEntityInObjectIDColumn_cde,
                              setter = setShowsNameOfEntityInObjectIDColumn_cde:) BOOL showsNameOfEntityInObjectIDColumn;

@property (nonatomic, assign, getter = numberOfDecimals_cde,
                              setter = setNumberOfDecimals_cde:) NSInteger numberOfDecimals;

@property (nonatomic, assign, getter = dateFormatterTimeStyle_cde,
                              setter = setDateFormatterTimeStyle_cde:) NSDateFormatterStyle dateFormatterTimeStyle;

@property (nonatomic, assign, getter = dateFormatterDateStyle_cde,
                              setter = setDateFormatterDateStyle_cde:) NSDateFormatterStyle dateFormatterDateStyle;

@property (nonatomic, readonly) NSDateFormatter *dateFormatter_cde;
@property (nonatomic, readonly) NSNumberFormatter *floatingPointNumberFormatter_cde;

@property (nonatomic, assign, getter = showsNiceEntityAndPropertyNames_cde,
                              setter = setShowsNiceEntityAndPropertyNames_cde:) BOOL showsNiceEntityAndPropertyNames;

@property (nonatomic, assign, getter = automaticallyResolvesValidationErrors_cde,
                              setter = setAutomaticallyResolvesValidationErrors_cde:) BOOL automaticallyResolvesValidationErrors_cde;

@property (nonatomic, copy, getter = buildProductsDirectoryBookmarkData_cde,
                            setter = setBuildProductsDirectoryBookmarkData_cde:) NSData *buildProductsDirectoryBookmarkData_cde;

@property (nonatomic, getter = buildProductsDirectory_cde, setter = setBuildProductsDirectory_cde:) NSURL *buildProductsDirectory_cde;

@property (nonatomic, copy, getter = simulatorDirectoryBookmarkData_cde,
                            setter = setSimulatorDirectoryBookmarkData_cde:) NSData *simulatorDirectoryBookmarkData_cde;

@property (nonatomic, getter = simulatorDirectory_cde, setter = setSimulatorDirectory_cde:) NSURL *simulatorDirectory_cde;

@property (nonatomic, assign, getter = applicationNeedsSetup_cde,
                              setter = setApplicationNeedsSetup_cde:) BOOL applicationNeedsSetup;

@property (nonatomic, assign, readonly, getter = numberOfDaysLeft_cde) NSInteger numberOfDaysLeft_cde;

@end
