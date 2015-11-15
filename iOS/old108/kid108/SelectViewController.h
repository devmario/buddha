//
//  SelectViewController.h
//  kid108
//
//  Created by jangwonhee on 2015. 10. 30..
//  Copyright © 2015년 3dpaper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SelectViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (atomic, retain) NSMutableArray  *data;
@property (nonatomic, retain) IBOutlet UIView *bg;
@property (nonatomic, retain) IBOutlet UIView *popup;
@property (nonatomic, retain) IBOutlet UIButton *categoryTitleBT;
@property (nonatomic, retain) IBOutlet UIButton *categoryPosBT;
@property (nonatomic, retain) IBOutlet UITableView* table;
@property (nonatomic, retain) IBOutlet UIImageView* img;

- (IBAction)clickTitle:(id)sender;
- (IBAction)clickPos:(id)sender;
- (IBAction)clickCancel:(id)sender;

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

@end
