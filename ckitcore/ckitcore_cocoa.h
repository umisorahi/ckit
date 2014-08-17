//
//  ckitcore_cocoa.h
//  ckitcore
//
//  Created by Shimomura Tomonori on 2014/07/05.
//  Copyright (c) 2014年 craftware. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ckitcore_cocoa_export.h"

@interface CkitView : NSView <NSWindowDelegate>
{
    ckit_Window_Callbacks * callbacks;
    void * owner;
    
    NSTrackingRectTag mouse_tracking_tag;
    @public int keyevent_removal_tag;
}

- (id)initWithFrame:(NSRect)frame callbacks:(ckit_Window_Callbacks*)_callbacks owner:(void*)_owner parent_window:(CocoaObject*)_parent_window;

@property CocoaObject * parent_window;

@end
