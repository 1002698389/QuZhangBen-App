//
//  EssayDetailController.h
//  趣账本
//
//  Created by wengYQ on 15/12/24.
//  Copyright © 2015年 cn.wengyq. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EssayModel.h"
typedef void (^scrollToTop)(void);
@interface EssayDetailController : UIViewController
@property (nonatomic,copy) EssayModel *essayModel;
@property (nonatomic,copy) scrollToTop scroll2TopBlock;
@end
