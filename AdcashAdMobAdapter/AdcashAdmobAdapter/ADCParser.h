//
//  ADCParser.h
//  adcash-ios-sdk
//
//  Created by Mert on 24/05/16.
//  Copyright © 2016 Adcash. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADCAPIClient.h"
#import "ADCError.h"
#import "ADCRequest.h"
#import "SKMRAIDServiceDelegate.h"
#import "SKBrowser.h"

@class ADCParser;

@protocol ADCParserDelegate <NSObject>

-(void)ADCParserDidFinishParsing:(ADCParser *)parser;
-(void)ADCParserDidFailToParse:(ADCParser *)parser withError:(NSError *)error;
@end

@interface ADCParser : NSObject<NSXMLParserDelegate>


/**
 These are the variables that we read and save from parsed file.
 
 @since 2.0.0
 */
@property (nonatomic, weak) id <ADCParserDelegate> delegate;


/**
 This is a convenience class method that calls loadWithRequest: internally.
 @param zoneID is a unique zone ID that is created in Adcash Publisher portal.
 @since 2.0.0
 */

@end