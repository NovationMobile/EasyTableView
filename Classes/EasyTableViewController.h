//
//  EasyTableViewController.h
//  EasyTableViewController
//
//  Created by Aleksey Novicov on 5/30/10.
//  Copyright Yodel Code LLC 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EasyTableView.h"
#import "FlipsideViewController.h"

@interface EasyTableViewController : UIViewController <EasyTableViewDelegate, FlipsideViewControllerDelegate> {
	IBOutlet UILabel *bigLabel;
	EasyTableView *verticalView;
	EasyTableView *horizontalView;
}

@property (nonatomic, retain) UILabel *bigLabel;
@property (nonatomic, retain) EasyTableView *verticalView;
@property (nonatomic, retain) EasyTableView *horizontalView;

@end

