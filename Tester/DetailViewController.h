//
//  DetailViewController.h
//  Tester
//
//  Created by MarkD'angelo on 9/16/15.
//  Copyright (c) 2015 MarkD'angelo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

