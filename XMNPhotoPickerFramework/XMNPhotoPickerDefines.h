//
//  XMNPhotoPickerDefines.h
//  XMNPhotoPickerFrameworkExample
//
//  Created by XMFraker on 16/1/28.
//  Copyright © 2016年 XMFraker. All rights reserved.
//

#ifndef XMNPhotoPickerDefines_h
#define XMNPhotoPickerDefines_h

#import <UIKit/UIDevice.h>

#define kXMNBarBackgroundColor  ([UIColor colorWithRed:(34/255.0) green:(34/255.0) blue:(34/255.0) alpha:1.0])
#define kXMNButtonTitleColorNormal ([UIColor colorWithRed:(83/255.0) green:(179/255.0) blue:(17/255.0) alpha:1.0])
#define kXMNButtonTitleColorDisable  ([UIColor colorWithRed:(83/255.0) green:(179/255.0) blue:(17/255.0) alpha:0.5])

#define iOS7Later ([UIDevice currentDevice].systemVersion.floatValue >= 7.0f)
#define iOS8Later ([UIDevice currentDevice].systemVersion.floatValue >= 8.0f)
#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.0f)

/** collection中图片的间隔 */
#define kXMNMargin 4

#define kXMNThumbnailWidth ([UIScreen mainScreen].bounds.size.width - 2 * kXMNMargin - 4) / 4 - kXMNMargin

/** collectionView中缩略图大小 */
#define kXMNThumbnailSize CGSizeMake(kXMNThumbnailWidth, kXMNThumbnailWidth)

/** 预览图片时 图片的间距 */
#define kXMNPreviewPadding 16


/** 是否允许 XMNPhotoPicker 手势滑动 发送图片 */
#define kXMNGestureSendPictureEnabled  1
/** 手势滑动发送图片的动画时间 */
#define kXMNGestureSendPictureAnimationDuration .3f
/** 通过此tag 可以获取originView上的imageView */
#define kXMNGestureSendImageViewTag  999

#define kXMNCamera 1
#define kXMNPhotoLibrary 2
#define kXMNCancel  999
#define kXMNConfirm 998

#endif /* XMNPhotoPickerDefines_h */
