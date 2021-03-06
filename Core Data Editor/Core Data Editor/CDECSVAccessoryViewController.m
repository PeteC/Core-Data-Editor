#import "CDECSVAccessoryViewController.h"
#import "CDECSVDelimiter.h"
#import "NSUserDefaults+CDEAdditions.h"

@interface CDECSVAccessoryViewController ()

#pragma mark - UI
@property (nonatomic, weak) IBOutlet NSPopUpButton *delimiterPopUpButton;
@property (nonatomic, weak) IBOutlet NSButton *firstLineContainsColumnNamesCheckbox;
@property (nonatomic, weak) IBOutlet NSTextField *dateFormatTextField;

@end

@implementation CDECSVAccessoryViewController

#pragma mark - NSViewController
- (instancetype)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    return [self init];
}

- (instancetype)init {
    self = [super initWithNibName:NSStringFromClass([self class]) bundle:nil];
    if(self) {
        
    }
    return self;
}

- (void)loadView {
    [super loadView];
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    NSDateFormatter *formatter = defaults.dateFormatter_cde;
    NSString *format = [formatter dateFormat];
    self.dateFormatTextField.stringValue = format;
}

#pragma mark - Properties
- (CDECSVDelimiter *)selectedDelimiter {
    return [CDECSVDelimiter delimiterForMenuItemTag:self.delimiterPopUpButton.selectedTag];
}

- (BOOL)firstLineContainsColumnNames {
    return (self.firstLineContainsColumnNamesCheckbox.state == NSOnState);
}

- (NSString *)dateFormat {
    return self.dateFormatTextField.stringValue;
}

@end
