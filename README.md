![](http://files.slembcke.net/chipmunk/logo/logo1_med.png)

[![Build Status](https://travis-ci.org/codefoco-forks/Chipmunk2D.svg?branch=binding)](https://travis-ci.org/codefoco-forks/Chipmunk2D)

## WARNING:

This is a slight modified version branch of Chipmunk2D in order to create the bindings for .NET:
* Removed/Clenup some folders/files.
* Added a new CMake to build only the library (not the demos)
* Added new `ios_build` to build iOS Framework
* Added new `android_build` to build Android dynamic library.

## NEW IN CHIPMUNK 7

Chipmunk 7 is complete and now includes the ARM NEON optimizations, the
autogeometry code, and the mulithreaded solver.

The latest [programming
guide](http://chipmunk-physics.net/release/ChipmunkLatest-Docs/) is
available.

## ABOUT:

Chipmunk2D is a simple, lightweight, fast and portable 2D rigid body
physics library written in C. It’s licensed under the unrestrictive, OSI
approved MIT license. My aim is to give 2D developers access to the same
quality of physics you find in newer 3D games. I hope you enjoy using
Chipmunk2D\!

## FEATURES:

  - Designed specifically for 2D video games.
  - Circle, convex polygon, and beveled line segment collision
    primitives.
  - Multiple collision primitives can be attached to a single rigid
    body.
  - Fast broad phase collision detection by using a bounding box tree
    with great temporal coherence or a spatial hash.
  - Extremely fast impulse solving by utilizing Erin Catto’s contact
    persistence algorithm.
  - Supports sleeping objects that have come to rest to reduce the CPU
    load.
  - Support for collision event callbacks based on user definable object
    types types.
  - Flexible collision filtering system with layers, exclusion groups
    and callbacks.
      - Can be used to create all sorts of effects like one way
        platforms or buoyancy areas. (Examples included)
  - Supports nearest point, segment (raycasting), shape and bounding box
    queries to the collision detection system.
  - Collision impulses amounts can be retrieved for gameplay effects,
    sound effects, etc.
  - Large variety of joints - easily make vehicles, ragdolls, and more.
  - Joint callbacks.
      - Can be used to easily implement breakable or animated joints.
        (Examples included)
  - Maintains a contact graph of all colliding objects.
  - Lightweight C99 implementation with no external dependencies outside
    of the Std. C library.
  - [Many language bindings
    available](http://chipmunk2d.net/bindingsAndPorts.php).
  - Simple, read the
    [documentation](http://chipmunk2d.net/documentation.php) and see\!
  - Unrestrictive MIT license

## CONTRACTING:

Howling Moon Software (my company) is available for contracting if you
want to make the physics in your game really stand out. Given our unique
experience with the library, we can help you use Chipmunk to its fullest
potential. Feel free to contact us through our webpage:
http://howlingmoonsoftware.com/

## BUILDING:

Mac OS X: There is an included Xcode project file for building the
static library and demo application. Alternatively you could use the
CMake files or the macstatic.command script inside the xcode/ directory
to build a static lib and package up the headers for you.

iPhone: A native Objective-C API is included. The Xcode project can
build a static library with all the proper compiler settings.
Alternatively, you can just run iphonestatic.command in the xcode/
directory. It will build you a fat library compiled as release for the
device and debug for the simula
