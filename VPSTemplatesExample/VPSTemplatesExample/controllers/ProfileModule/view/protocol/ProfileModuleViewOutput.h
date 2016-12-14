//
//  ProfileModuleViewOutput.h
//  VPSTemplatesExample
//
//  Created by Aleksey Lobanov on 14/12/2016.
//  Copyright © 2016 Homemade. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ProfileModuleViewOutput <NSObject>
@required;
/**
 @author Aleksey Lobanov

 Method informed presenter about view is ready for work
 */
- (void)didTriggerViewReadyEvent;

@end
