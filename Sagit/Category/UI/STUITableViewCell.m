//
//  开源：https://github.com/cyq1162/Sagit
//  作者：陈裕强 create on 2017/12/12.
//  博客：(昵称：路过秋天） http://www.cnblogs.com/cyq1162/
//  起源：IT恋、IT连 创业App http://www.itlinks.cn
//  Copyright © 2017-2027年. All rights reserved.
//

#import "STUITableViewCell.h"

@implementation UITableViewCell(ST)

+(instancetype)reuseCell:(UITableView *)tableView index:(NSIndexPath *)index
{
    UITableViewCell *cell=[tableView dequeueReusableCellWithIdentifier:@"TableViewCell"];
    if(cell==nil)
    {
        cell=[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"TableViewCell"];
    }
    return cell;
}
-(NSMutableDictionary<NSString *,id> *)source
{
    return [self key:@"source"];
}
-(void)setSource:(NSMutableDictionary<NSString *,id> *)source
{
    [self source:source];
}
-(UITableViewCell*)source:(NSMutableDictionary<NSString *,id> *)dataSource
{
    [self key:@"source" value:dataSource];
    return self;
}
//
//-(NSMutableDictionary<NSString *,id> *)cellSource
//{
//    if(_cellSource==nil){_cellSource=[NSMutableDictionary new];}
//    return _cellSource;
//}
@end