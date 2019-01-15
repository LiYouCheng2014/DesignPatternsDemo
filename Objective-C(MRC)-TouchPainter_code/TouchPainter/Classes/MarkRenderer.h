//
//  MarkRenderer.h
//  TouchPainter
//
//  Created by Carlo Chung on 9/14/10.
//  Copyright 2010 Carlo Chung. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MarkVisitor.h"
#import "Dot.h"
#import "Vertex.h"
#import "Stroke.h"

@interface MarkRenderer : NSObject <MarkVisitor>
{
  BOOL shouldMoveContextToDot_;
  
  CGContextRef context_;
}

- (id)initWithCGContext:(CGContextRef)context;

- (void)visitMark:(id <Mark>)mark;
- (void)visitDot:(Dot *)dot;
- (void)visitVertex:(Vertex *)vertex;
- (void)visitStroke:(Stroke *)stroke;

@end
