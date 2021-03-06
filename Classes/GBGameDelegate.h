#import <Foundation/Foundation.h>

@protocol GBGameDelegate <NSObject>

- (void)gameDidLoad;

- (void)update:(double)dt;
- (void)drawAtSize:(NSSize)size;

- (void)keyDown:(unsigned)keyCode;
- (void)keyUp:(unsigned)keyCode;

@end
