/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */
//
//#import <XXUnknownSuperclass.h> // Unknown library
//#import "AccessContactsViewControllerDelegate.h"

@class UIToolbar, SMKAvatarUploader;

__attribute__((visibility("hidden")))
@interface SMKBaseAuthViewController : NSObject { //XXUnknownSuperclass <AccessContactsViewControllerDelegate> {
	UIToolbar* _backgroundToolbar;
	SMKAvatarUploader* _avatarUploader;
}
@property(retain, nonatomic) SMKAvatarUploader* avatarUploader;
@property(retain, nonatomic) UIToolbar* backgroundToolbar;
//-(void).cxx_destruct;
-(void)showFacebookJoinAlert;
-(void)showFacebookLoginAlertWithCompletionBlock:(id)completionBlock;
-(void)showJoinAlert;
-(void)showLoginAlert;
-(void)accessContactsViewController:(id)controller didGrantAccess:(BOOL)access;
-(void)advance;
-(void)joinWithFacebookAndCompletionBlock:(id)facebookAndCompletionBlock;
-(void)loginWithFacebookAndCompletionBlock:(id)facebookAndCompletionBlock;
-(void)uploadAvatar:(id)avatar;
-(void)joinWithName:(id)name email:(id)email password:(id)password avatarPath:(id)path completionBlock:(id)block;
-(void)loginWithEmail:(id)email password:(id)password completionBlock:(id)block;
-(BOOL)shouldMakeRequest;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setupBlurredBackground;
-(id)blurredBackground;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
@end

