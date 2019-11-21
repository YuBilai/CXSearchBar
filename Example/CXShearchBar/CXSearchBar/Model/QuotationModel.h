//
//  QuotationModel.h
//  CXShearchBar_Example
//
//  Created by Apple on 2019/11/21.
//  Copyright © 2019 caixiang305621856. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QuotationModel : NSObject
@property(nonatomic,copy) NSString *name;
@property(nonatomic,copy) NSString *stock;
@property(nonatomic,copy) NSString *money;
@property(nonatomic,copy) NSString *min_amount;
@property(nonatomic,copy) NSString *taker_fee;
@property(nonatomic,copy) NSString *maker_fee;
@property(nonatomic,copy) NSString *stock_icon;
@property(nonatomic,copy) NSString *exchange_rate_usd;
@property(nonatomic,copy) NSString *exchange_rate_cny;
@property(nonatomic,strong) NSDictionary * info;
@end

@interface DiscoverQuotationInfoModel : NSObject
@property(nonatomic,strong) NSDictionary * volume;
@property(nonatomic,strong) NSDictionary * open;
@property(nonatomic,strong) NSDictionary * last;
@property(nonatomic,strong) NSDictionary * high;
@property(nonatomic,strong) NSDictionary * low;
@property(nonatomic,strong) NSDictionary * deal;
@end


NS_ASSUME_NONNULL_END
