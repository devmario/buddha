//
//  TableViewDelegate.h
//  CustomTableView
//
//  Created by MacBook on 11. 9. 30..
//  Copyright 2011 POSTECH. All rights reserved.
//

// last updated.
// 2012.8.30



#import <Foundation/Foundation.h>

@interface RecordCell : UITableViewCell

@property (atomic, retain) UIButton  *bt;
@property (atomic, retain) NSMutableDictionary  *data;
@property (assign) id  record_page;

@end


@interface TableViewDelegate : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (atomic, retain) NSMutableArray  *data;
@property (assign) id  record_page;

- (id)initWithFrame:(CGRect)frame withRecordPage:(id)p;


@end