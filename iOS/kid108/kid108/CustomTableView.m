//
//  CustomTableView.m
//  MovieTalk
//
//  Created by Haetaek Lee on 12. 7. 16..
//  Copyright (c) 2012년 2rr5r@paran.com. All rights reserved.
//

#import "CustomTableView.h"

@implementation CustomTableView

@synthesize reloadObserver, reloadSelector;

- (void)setReloadDataObserver:(id)delegate withSelector:(SEL)selector
{
    self.reloadObserver = delegate;
    self.reloadSelector = selector;
}
- (void)reloadData
{
    [super reloadData];
    if ([self.reloadObserver respondsToSelector:self.reloadSelector]) {
        [self.reloadObserver performSelector:self.reloadSelector withObject:nil];
    }
}

@end
