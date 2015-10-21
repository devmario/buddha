//
//  CustomTableView.h
//  MovieTalk
//
//  Created by Haetaek Lee on 12. 7. 16..
//  Copyright (c) 2012년 2rr5r@paran.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableView : UITableView

- (void)reloadData;

- (void)setReloadDataObserver:(id)delegate withSelector:(SEL)selector;
@property (nonatomic, assign) id reloadObserver;
@property (nonatomic, assign) SEL reloadSelector;

@end

