//
//  CanvasKit.h
//  CanvasKit
//
//  Created by Jason Larsen on 8/22/13.
//  Copyright (c) 2013 Instructure. All rights reserved.
//

//! Project version number for CanvasKit.
FOUNDATION_EXPORT double CanvasKitVersionNumber;

//! Project version string for CanvasKit.
FOUNDATION_EXPORT const unsigned char CanvasKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CanvasKit/PublicHeader.h>


#import <Foundation/Foundation.h>
#import "CKIUser.h"
#import "Constants.h"

#pragma mark - Models

#import "CKIActivityStreamItem.h"
#import "CKIActivityStreamDiscussionTopicItem.h"
#import "CKIActivityStreamAnnouncementItem.h"
#import "CKIActivityStreamConversationItem.h"
#import "CKIActivityStreamMessageItem.h"
#import "CKIActivityStreamConferenceItem.h"
#import "CKIActivityStreamCollaborationItem.h"
#import "CKIActivityStreamSubmissionItem.h"
#import "CKIAssignment.h"
#import "CKIAssignmentGroup.h"
#import "CKICalendarEvent.h"
#import "CKIConversation.h"
#import "CKIContext.h"
#import "CKICourse.h"
#import "CKIDiscussionTopic.h"
#import "CKIExternalTool.h"
#import "CKIFavorite.h"
#import "CKIFile.h"
#import "CKIFolder.h"
#import "CKIGroup.h"
#import "CKILockableModel.h"
#import "CKILockInfo.h"
#import "CKIModel.h"
#import "CKIModule.h"
#import "CKIModuleItem.h"
#import "CKIOutcome.h"
#import "CKIOutcomeGroup.h"
#import "CKIOutcomeLink.h"
#import "CKIPage.h"
#import "CKIQuiz.h"
#import "CKIRubric.h"
#import "CKIRubricCriterion.h"
#import "CKIRubricCriterionRating.h"
#import "CKIService.h"
#import "CKISubmission.h"
#import "CKISubmissionComment.h"
#import "CKISubmissionSet.h"
#import "CKIMediaComment.h"
#import "CKITab.h"
#import "CKITerm.h"
#import "CKITodoItem.h"
#import "CKIUser.h"
#import "CKIEnrollment.h"
#import "CKILiveAssessment.h"
#import "CKILiveAssessmentResult.h"

#pragma mark - Networking

#import "CKIClient.h"
#import "CKIClient+CKIActivityStreamItem.h"
#import "CKIClient+CKIAssignment.h"
#import "CKIClient+CKIAssignmentGroup.h"
#import "CKIClient+CKICalendarEvent.h"
#import "CKIClient+CKIConversation.h"
#import "CKIClient+CKICourse.h"
#import "CKIClient+CKIExternalTool.h"
#import "CKIClient+CKIFavorite.h"
#import "CKIClient+CKIFile.h"
#import "CKIClient+CKIFolder.h"
#import "CKIClient+CKIGroup.h"
#import "CKIClient+CKIModule.h"
#import "CKIClient+CKIModel.h"
#import "CKIClient+CKIModule.h"
#import "CKIClient+CKIModuleItem.h"
#import "CKIClient+CKIOutcome.h"
#import "CKIClient+CKIOutcomeGroup.h"
#import "CKIClient+CKIOutcomeLink.h"
#import "CKIClient+CKIPage.h"
#import "CKIClient+CKIQuiz.h"
#import "CKIClient+CKIService.h"
#import "CKIClient+CKISubmissionSet.h"
#import "CKIClient+CKITab.h"
#import "CKIClient+CKITodoItem.h"
#import "CKIClient+CKIUser.h"
#import "CKIClient+CKIDiscussionTopic.h"
#import "CKIClient+CKILiveAssessment.h"
#import "CKIClient+CKILiveAssessmentResult.h"
