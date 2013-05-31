//
//  AVImageView.h
//  paas
//
//  Created by Summer on 13-3-26.
//  Copyright (c) 2013年 AVOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Paas/AVFile.h>

/*!
 An image view that downloads and displays remote image stored on Parse's server.
 */
@interface AVImageView : UIImageView

/// The remote file on Parse's server that stores the image.
/// Note that the download does not start until loadInBackground: is called.
@property (nonatomic, retain) AVFile *file;

/*!
 Initiate downloading of the remote image. Once the download completes, the remote image will be displayed.
 */
- (void)loadInBackground;

/*!
 Initiate downloading of the remote image. Once the download completes, the remote image will be displayed.
 @param completion the completion block.
 */
- (void)loadInBackground:(void (^)(UIImage *image, NSError *error))completion;

@end
