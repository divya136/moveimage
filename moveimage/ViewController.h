//
//  ViewController.h
//  moveimage
//
//  Created by gunasundari on 16/02/15.
//  Copyright (c) 2015 XERAGO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UIImageView *ball;
    UILabel *xCoord;
    UILabel *yCoord;
    CGPoint startPoint;
    
    
}
@property(nonatomic,retain)IBOutlet UIImageView *ball;
@property(nonatomic,retain)IBOutlet UILabel *xCoord;
@property(nonatomic,retain)IBOutlet UILabel *yCoord;
@property CGPoint startPoint;


@end

