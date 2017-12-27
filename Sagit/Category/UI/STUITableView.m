//
//  开源：https://github.com/cyq1162/Sagit
//  作者：陈裕强 create on 2017/12/12.
//  博客：(昵称：路过秋天） http://www.cnblogs.com/cyq1162/
//  起源：IT恋、IT连 创业App http://www.itlinks.cn
//  Copyright © 2017-2027年. All rights reserved.
//

#import "STUITableView.h"

@implementation UITableView(ST)

#pragma mark 核心扩展
-(NSMutableArray<id> *)source
{
    return [self key:@"source"];
}
-(void)setSource:(NSMutableArray<id> *)source
{
    [self source:source];
}
-(UITableView *)source:(NSMutableArray<id> *)dataSource
{
    [self key:@"source" value:dataSource];
    return self;
}
-(AddCell)addCell
{
    return [self key:@"addCell"];
}
-(void)setAddCell:(AddCell)addCell
{
    [self key:@"addCell" value:addCell];
}

-(BOOL)autoHeight
{
    if(self.keyValue[@"autoHeight"]!=nil)
    {
        return [self.keyValue[@"autoHeight"] isEqualToString:@"1"];
    }
    return NO;
}
-(UITableView *)autoHeight:(BOOL)yesNo
{
    [self.keyValue set:@"autoHeight" value:yesNo?@"1":@"0"];
    if(yesNo){[self scrollEnabled:NO];}//自动计算高度时，滚动条默认没必要存在。
    return self;
}
#pragma mark 属性扩展
-(UITableView*)scrollEnabled:(BOOL)yesNo
{
    self.scrollEnabled=yesNo;
    return self;
}
@end
