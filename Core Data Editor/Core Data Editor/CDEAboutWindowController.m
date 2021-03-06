#import "CDEAboutWindowController.h"

@interface CDEAboutWindowController ()
@property (unsafe_unretained) IBOutlet NSTextView *textView;

@end

@implementation CDEAboutWindowController

- (instancetype)initWithWindow:(NSWindow *)window
{
    self = [super initWithWindow:window];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (void)windowDidLoad
{
    [super windowDidLoad];
    NSURL *aboutURL = [[NSBundle mainBundle] URLForResource:@"Credits" withExtension:@"rtf"];
    NSAttributedString *aboutText = [[NSAttributedString alloc] initWithURL:aboutURL documentAttributes:NULL];
    [[self.textView textStorage] appendAttributedString:aboutText];
}

@end
