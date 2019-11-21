//
//  CXSearchViewController.h
//  CXShearchBar_Example
//
//  Created by caixiang on 2019/4/29.
//  Copyright © 2019年 caixiang305621856. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CXSearchModel.h"
#import "CXSearchCollectionViewCell.h"
#import "CXSearchCollectionReusableView.h"
#import "CXSearchLayout.h"
#import "CXDBTool.h"

extern const CGFloat kFirstitemleftSpace;

NS_ASSUME_NONNULL_BEGIN

@interface CXSearchViewController : UIViewController
@property (weak, nonatomic) IBOutlet UICollectionView *searchCollectionView;
@property (weak, nonatomic) IBOutlet UITextField *searchTextField;
@property (nonatomic, strong) NSMutableArray *dataSource;
@property (nonatomic, strong) NSMutableArray *searchDataSource;
@property (strong, nonatomic) CXSearchLayout *searchLayout;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *top;
@property (weak, nonatomic) IBOutlet UITableView *searchTableView;
@end

NS_ASSUME_NONNULL_END
