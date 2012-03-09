//
//  ImageBrowser.h
//  HHuan
//
//  Created by jtone on 11-8-16.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomScrollView.h"

#define GIF_VIEW_TAG 9999

@interface ImageBrowser : UIView <UIScrollViewDelegate>
{
    IBOutlet UIImageView        *imageView;
    IBOutlet CustomScrollView   *aScrollView;
    UIImage *image;
    NSString * bigImageURL;//如果填了这个地址，登录后会载入此图片
    NSString *viewTitle;
    id delegate;
}
@property (nonatomic,retain) UIImage *image;
@property (nonatomic,retain) IBOutlet UIImageView        *imageView;
@property (nonatomic,retain) IBOutlet CustomScrollView   *aScrollView;
@property (nonatomic,retain) NSString * bigImageURL;
@property (nonatomic,copy) NSString *viewTitle;
@property (nonatomic,assign)id delegate;

-(void)setUp;
-(void)loadImage;
-(void)dismiss;

@end
