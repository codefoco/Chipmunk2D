.PHONY: all

all: ios watchos tvos

ios: ./ios/libchipmunk.framework/libchipmunk
./ios/libchipmunk.framework/libchipmunk:
	xcodebuild  -project chipmunk.ios.xcodeproj -configuration Release -sdk iphonesimulator
	xcodebuild  -project chipmunk.ios.xcodeproj  -configuration Release -sdk iphoneos
	ditto ./Build/Release-iphoneos/ ./ios/
	rm ./ios/libchipmunk.framework/libchipmunk
	lipo -create ./build/Release-iphonesimulator/libchipmunk.framework/libchipmunk  ./build/Release-iphoneos/libchipmunk.framework/libchipmunk -output  ./ios/libchipmunk.framework/libchipmunk

watchos: ./watchos/libchipmunk.framework/libchipmunk
./watchos/libchipmunk.framework/libchipmunk:
	xcodebuild  -project chipmunk.watchos.xcodeproj -configuration Release -sdk watchsimulator
	xcodebuild  -project chipmunk.watchos.xcodeproj  -configuration Release -sdk watchos
	ditto ./Build/Release-watchos/ ./watchos/
	rm ./watchos/libchipmunk.framework/libchipmunk
	lipo -create ./build/Release-watchsimulator/libchipmunk.framework/libchipmunk  ./build/Release-watchos/libchipmunk.framework/libchipmunk -output  ./watchos/libchipmunk.framework/libchipmunk

tvos: ./tvos/libchipmunk.framework/libchipmunk
./tvos/libchipmunk.framework/libchipmunk:
	xcodebuild  -project chipmunk.tvos.xcodeproj -configuration Release -sdk appletvsimulator
	xcodebuild  -project chipmunk.tvos.xcodeproj  -configuration Release -sdk appletvos
	ditto ./Build/Release-appletvos/ ./tvos/
	rm ./tvos/libchipmunk.framework/libchipmunk
	lipo -create ./build/Release-appletvsimulator/libchipmunk.framework/libchipmunk  ./build/Release-appletvos/libchipmunk.framework/libchipmunk -output  ./tvos/libchipmunk.framework/libchipmunk

clean:
	rm -Rf build
	rm -Rf ./ios/
	rm -Rf ./watchos/
	rm -Rf ./tvos/