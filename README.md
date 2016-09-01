# Adcash AdMob Adapter iOS

This SDK is designed for integrating Adcash with AdMob Mediation on iOS to maximize fill rate and revenue.

It's a simple 2-step process.

# Integration Guide

**Note :** Assuming integration is already done with AdMob SDK, if not please follow [AdMob Integration guideline](https://firebase.google.com/docs/admob/ios/quick-start).

##1. Download SDK

+ Download the Adcash SDK [here](https://github.com/adcash/Adcash-AdMob-Adapter-iOS).
+ Drag and drop the file into your Xcode project.
+ Don't forget to check "Copy items if needed"

![](http://developer.adca.sh/wp-content/uploads/2016/08/ScreenShot1.png)

##2. Configure Adcash Custom Event on AdMob Mediation Portal

###2.1. Select App & Add New Network

On AdMob Mediation Portal, click on **Monetize tab** then select one of your app from left panel that you want to monetize.

On Application page, select one of your **ad unit**(Adcash Admob iOS Adaptor currently supports Banner and Interstitial ad formats) and click on **Mediation** for adding new ad network.

![](http://developer.adca.sh/wp-content/uploads/2016/08/ScreenShot2.png)

On Mediation page, click on **new ad network** and open new window for configuring it.

![](http://developer.adca.sh/wp-content/uploads/2016/08/ScreenShot3.png)

###2.2 Add Adcash Custom Ad Network

Click on **Custom Event** and it will open window for filling out information.

![](http://developer.adca.sh/wp-content/uploads/2016/08/ScreenShot4.png)

Custom Event Information from:
* **Class Name**
- For Banner: "AdcashAdmobBanner"
- For Interstitial: "AdcashAdmobInterstitial"
* **Label:** Adcash
* **Parameter:** Enter the zone ID from Adcash Publisher Panel

![](http://developer.adca.sh/wp-content/uploads/2016/08/ScreenShot5.png)

##3. Release App

Now Adcash is successfully has integrated with AdMob Mediation platform and you can release out the app in iTunes. Please note that changes made in AdMob Portal might take couple hours to reflect.