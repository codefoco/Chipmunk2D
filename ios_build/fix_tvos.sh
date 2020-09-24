#!/bin/sh

lipo ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk -verify_arch arm64
if [ $? -eq 0 ]; then
    mv ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk.old;
    lipo ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk.old -remove arm64 -output ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk;
fi