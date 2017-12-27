//
//  STUIViewAddUI.h
//  IT恋
//
//  Created by 陈裕强 on 2017/12/23.
//  Copyright © 2017年 . All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "STTable.h"
@interface UIView (STUIViewAddUI)

#pragma mark UI属性
//!当前UI下最后一次被添加的UI
-(UIView*)lastAddView;
//!当前UI的最后一个子UI
-(UIView*)lastSubView;
//!当前UI的第一个子UI
-(UIView*)firstSubView;
//!当前UI的前一个UI
- (UIView*)preView;
//!设置当前UI的前一个UI
- (UIView*)preView:(UIView*)view;
//!当前UI的下一个UI
- (UIView*)nextView;
//!设置当前UI的下一个UI
- (UIView*)nextView:(UIView*)view;
//!当前UI是否表单UI【如果是，可以通过self.formData 取值】
- (BOOL)isFormUI;
//!设置当前UI是否表单UI
- (UIView*)isFormUI:(BOOL)yesNo;

#pragma mark 添置UI
-(UIView*)removeView:(UIView*)view;
-(UIView*)removeAllViews;
-(UIView*)addView:(UIView *)view name:(NSString*)name;
-(UIView*)addUIView:(NSString*)name;
-(UISwitch*)addSwitch:(NSString*)name;
-(UIStepper *)addStepper:(NSString *)name;
-(UISlider *)addSlider:(NSString *)name;
-(UIProgressView *)addProgress:(NSString *)name;

-(UILabel*)addLabel:(NSString*)name;
-(UILabel*)addLabel:(NSString*)name text:(NSString*)text;
-(UILabel*)addLabel:(NSString*)name text:(NSString*)text font:(NSInteger)px;
-(UILabel*)addLabel:(NSString*)name text:(NSString*)text font:(NSInteger)px color:(id)colorOrHex;
-(UIImageView*)addImageView:(NSString*)name;
-(UIImageView*)addImageView:(NSString*)name imgName:(NSString*)imgName;
-(UIImageView*)addImageView:(NSString*)name imgName:(NSString*)imgName xyFlag:(XYFlag)xyFlag;

-(UITextField*)addTextField:(NSString*)name;
-(UITextField*)addTextField:(NSString*)name placeholder:(NSString*)placeholder;
-(UITextView*)addTextView:(NSString*)name;

-(UIButton*)addButton:(NSString*)name;
-(UIButton*)addButton:(NSString*)name imgName:(NSString*)imgName;
-(UIButton*)addButton:(NSString*)name imgName:(NSString*)imgName buttonType:(UIButtonType)buttonType;
-(UIButton*)addButton:(NSString*)name title:(NSString*)title;
-(UIButton*)addButton:(NSString*)name title:(NSString*)title font:(NSInteger)px;
-(UIButton*)addButton:(NSString*)name title:(NSString*)title font:(NSInteger)px buttonType:(UIButtonType)buttonType;
-(UIButton*)addButton:(NSString*)name title:(NSString*)title font:(NSInteger)px imgName:(NSString*)imgName buttonType:(UIButtonType)buttonType;
-(UIView*)addLine:name color:(id)colorOrHex;
-(UIScrollView*)addScrollView:(NSString*)name;
-(UIScrollView *)addScrollView:(NSString*)name direction:(XYFlag)direction imgName:(NSString*)imgName,...NS_REQUIRES_NIL_TERMINATION;

-(UITableView*)addTableView:(NSString*)name;
-(UITableView*)addTableView:(NSString*)name style:(UITableViewStyle)style;
@end