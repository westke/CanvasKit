//
//  CKIEnrollment.m
//  CanvasKit
//
//  Created by rroberts on 1/10/14.
//  Copyright (c) 2014 Instructure. All rights reserved.
//

#import "CKIEnrollment.h"
#import "NSValueTransformer+CKIPredefinedTransformerAdditions.h"
#import "NSDictionary+DictionaryByAddingObjectsFromDictionary.h"

static NSString *const CKIEnrollmentTypeStudent = @"student";
static NSString *const CKIEnrollmentTypeTeacher = @"teacher";
static NSString *const CKIEnrollmentTypeTA = @"ta";
static NSString *const CKIEnrollmentTypeObserver = @"observer";

@implementation CKIEnrollment

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    NSDictionary *keyPaths = @{
                               @"type": @"type",
                               @"role": @"role",
                               @"computedFinalScore": @"computed_final_score",
                               @"computedCurrentScore": @"computed_current_score",
                               @"computedFinalGrade": @"computed_final_grade",
                               @"computedCurrentGrade": @"computed_current_grade"
                               };
    NSDictionary *superPaths = [super JSONKeyPathsByPropertyKey];
    return [superPaths dictionaryByAddingObjectsFromDictionary:keyPaths];
}


- (BOOL)isStudent
{
    return [self.type isEqualToString:CKIEnrollmentTypeStudent];
}

@end
