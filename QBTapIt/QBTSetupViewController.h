//
//  QBTSetupViewController.h
//  QBTapIt
//
//  Created by Ethan Kim on 11/2/12.
//  Copyright (c) 2012 CCRMA, Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QBTSetupViewController : UIViewController

@property IBOutlet UITextField* experimenterIdText;

- (IBAction)startPushed:(UIButton*)sender;
- (IBAction)reloadPushed:(UIButton*)sender;

@end
