//
//  HackfoldrPage.h
//  hackfoldr-iOS
//
//  Created by Superbil on 2014/6/22.
//  Copyright (c) 2014年 org.superbil. All rights reserved.
//

#import "HackfoldrField.h"

@interface HackfoldrPage : NSObject <UITableViewDataSource>

- (instancetype)initWithFieldArray:(NSArray *)fieldArray;

@property (nonatomic, strong) NSString *pageTitle;

/// Objcect in NSArray is |HackfoldrField|
@property (nonatomic, strong, readonly) NSArray *cells;

@end
