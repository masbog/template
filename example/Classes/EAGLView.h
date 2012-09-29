/*
 * Copyright (c) 2011 Yeecco Limited
 */

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface EAGLView : UIView
{
        GLint               backingWidth;
        GLint               backingHeight;

        EAGLContext       * context;

        GLuint              viewRenderbuffer, viewFramebuffer;
        GLuint              depthRenderbuffer;

        GLuint              spriteTexture;

        BOOL                animating;
        NSInteger           animationFrameInterval;

        id                  displayLink;
}

@property(readonly, nonatomic, getter=isAnimating) BOOL     animating;
@property(nonatomic) NSInteger                              animationFrameInterval;

- (BOOL) createFramebuffer;
- (void) destroyFramebuffer;

- (NSInteger) animationFrameInterval;
- (void) setAnimationFrameInterval: (NSInteger) frameInterval;

- (void) startAnimation;
- (void) stopAnimation;
- (void) setupView;
- (void) drawView;

@end
