### Slide: `3,4,15,16,17,18,...to the end`

## What is Android?

* Android = Software Stack

* Android include (operating system, middleware, and key application)

* Android is open source (AOSP)

* Android is base on Linux

* Android use linux to provide 
    - Security
    - Memory management
    - Process management
    - Power management
    - Hardware drivers

* OHA:` Open Handset Alliance` is a `consortium of 84 firms` to develop `open standards` for `mobile devices`

## Android Platform Architecture

```sh

* System Apps --> 

* Java API Framework --> 

* (Native C/C++ Libraries, Android Runtime) --> 

* Hardware Abstraction Layer (HAL) --> 

* Linux Kernal

```

1. System Apps:
   1. Core apps, Default apps
      1. Ex: (Calender, Email, Camera, ..)

2. Java API Framework
    1. `feature-set` of the Android OS is available to you through `APIs`
    2. These APIs you need to create Android apps by simplifying the `reuse of core`.
      1. Ex: (Content Providers , View System )
      2. Ex: (Activity, Location, Package, Notification), (Resource, Telephon, Window)

3. Native C/C++ Libraries
   1. Ex: (Webkit, OpenGL ES, Media Framework, Libc, OpenMAX AL, ..)
   2. Ex: (Android Runtime (ART), Core Libraries)

4. Hardware Abstraction Layer (HAL)
   1. Ex: (Audio, Bluetooth, Camera, Sensors, ...)

5. Linux Kernal
   1. Ex: Drivers (Audio, Keypad, USB, WIFI, Display, Shared Memory, Binder)

## Java API Framework: System components & Serivces

1. View System: you can use View System to create UI like (text boxes, buttons).

2. Resource Management: providing access to non-code resources like ( graphics, layout files).

3. Notification Management: enables apps to display custom alerts in the status bar.

4. Activity Managemet: manage lifecycle of apps and also provides a common navigation back stack

5. Content Providers: enable apps to access data from other apps.

## Native C/C++ Libraries

* ART and HAL, are built from native code that require native libraries written in C and C++. 

* you can access OpenGL ES through the Android framework’s Java OpenGL API to add support for drawing and manipulating 2D and 3D graphics in your app

## ART (Android Runtime)

* Runs Android Framework and Application
   * (Interpreter, Compiler)

* Manages application memory
   * (Memory allocator, Garbage Collection) 

## Kernal

* Foundation of the Android platform is the Linux kernel
  * Ex: ART relies on the linux kernal for underlying functionalities like 
    * ( threading, low-level memory management )

* Linux Kernal provide ( security, develop hardware driver for manufacturer )

## Android Feature

* Ex: ( sqlite, optimized android framework, camera, bluetooth, wifi, integrated software )