#!/bin/bash

APPID=ti.androidpay
VERSION=1.0.0
#cp android/assets/* iphone/

#rm -rvf ~/Library/Application\ Support/Titanium/modules/android/$APPID/$VERSION/*



cd android && rm -rf build/classes && rm -f ~/Library/Application\ Support/Titanium/modules/android/$APPID/$VERSION/lib/* && \
ti --platform android build --build-only --sdk 6.1.1.GA && \
unzip -uo  dist/$APPID-android-$VERSION.zip  -d  ~/Library/Application\ Support/Titanium/ &&\
cd ..

