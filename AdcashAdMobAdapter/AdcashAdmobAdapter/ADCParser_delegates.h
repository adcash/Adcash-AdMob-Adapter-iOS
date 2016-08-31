//
//  ADCParser_delegates.h
//  adcash-ios-sdk
//
//  Created by Mert on 30/08/16.
//  Copyright © 2016 Adcash. All rights reserved.
//
#import <Foundation/Foundation.h>
#ifndef ADCParser_delegates_h
#define ADCParser_delegates_h
@class ADCParser;
@protocol ADCParserDelegate <NSObject>

-(void)ADCParserDidFinishParsing:(ADCParser *)parser;
-(void)ADCParserDidFailToParse:(ADCParser *)parser withError:(NSError *)error;

@end

@interface ADCParser ()
@property (nonatomic, weak) id<ADCParserDelegate> delegate;
@end

#endif /* ADCParser_delegates_h */
