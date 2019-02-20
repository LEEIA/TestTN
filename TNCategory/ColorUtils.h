//
//  ColorUtils.h
//  JYUPlane
//
//  Created by LiWeichao on 2016/12/21.
//  Copyright © 2016年 JYU. All rights reserved.
//

#ifndef ColorUtils_h
#define ColorUtils_h

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f \
    alpha:(a)]
//#define RANDOMCOLOR [UIColor clearColor]
#define RANDOMCOLOR UIColorHEX(0x000000 + arc4random() % 0xFFFF00)
/**
*  颜色HEX
*/
#define UIColorHEX(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
    green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 \
    alpha:1.0]
#define UIColor_A_HEX(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
    green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 \
    alpha:((float)(rgbValue >> 24 & 0xFF))/255.0]


#endif /* ColorUtils_h */
