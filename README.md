# C Package Project

A C package project containing custom headers for various functionalities.

## Table of Contents
  - [C Package Project](#c-package-project)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Folder Structure](#folder-structure)
  - [How to Use](#how-to-Use)

## Description

This C package project consists of custom headers that provide macros, prototypes, and definitions for different functionalities, including error messages, text colors, user input validation, and printing variable types.

## Folder Structure

Your project is organized into the following structure:

- **pkg/custom**: Contains header files like `msg.h` and `color.h`.
- **pkg/func**: Contains header files such as `inputV.h` and `print.h`.
- **pkg/import**: Contains the `importAll.h` header file.

```plaintext
C_Package
│   C_Package.code-workspace
│   LICENSE
│   README.md
│
├───build
│   ├───other
│   │       NONE
│   │
│   └───SDL2 - 2.28.5
│       │   BUGS.txt
│       │   COPYING.txt
│       │   CREDITS.txt
│       │   INSTALL.txt
│       │   Makefile
│       │   README-SDL.txt
│       │   README.txt
│       │   WhatsNew.txt
│       │
│       ├───cmake
│       │       sdl2-config-version.cmake
│       │       sdl2-config.cmake
│       │
│       ├───docs
│       │       CONTRIBUTING.md
│       │       doxyfile
│       │       README-android.md
│       │       README-cmake.md
│       │       README-directfb.md
│       │       README-dynapi.md
│       │       README-emscripten.md
│       │       README-gdk.md
│       │       README-gesture.md
│       │       README-git.md
│       │       README-hg.md
│       │       README-ios.md
│       │       README-kmsbsd.md
│       │       README-linux.md
│       │       README-macos.md
│       │       README-n3ds.md
│       │       README-nacl.md
│       │       README-ngage.md
│       │       README-os2.md
│       │       README-pandora.md
│       │       README-platforms.md
│       │       README-porting.md
│       │       README-ps2.md
│       │       README-psp.md
│       │       README-raspberrypi.md
│       │       README-riscos.md
│       │       README-touch.md
│       │       README-versions.md
│       │       README-visualc.md
│       │       README-vita.md
│       │       README-wince.md
│       │       README-windows.md
│       │       README-winrt.md
│       │       README.md
│       │       release_checklist.md
│       │
│       ├───i686-w64-mingw32
│       │   ├───bin
│       │   │       sdl2-config
│       │   │       SDL2.dll
│       │   │
│       │   ├───include
│       │   │       begin_code.h
│       │   │       close_code.h
│       │   │       SDL.h
│       │   │       SDL_assert.h
│       │   │       SDL_atomic.h
│       │   │       SDL_audio.h
│       │   │       SDL_bits.h
│       │   │       SDL_blendmode.h
│       │   │       SDL_clipboard.h
│       │   │       SDL_config.h
│       │   │       SDL_cpuinfo.h
│       │   │       SDL_egl.h
│       │   │       SDL_endian.h
│       │   │       SDL_error.h
│       │   │       SDL_events.h
│       │   │       SDL_filesystem.h
│       │   │       SDL_gamecontroller.h
│       │   │       SDL_gesture.h
│       │   │       SDL_guid.h
│       │   │       SDL_haptic.h
│       │   │       SDL_hidapi.h
│       │   │       SDL_hints.h
│       │   │       SDL_joystick.h
│       │   │       SDL_keyboard.h
│       │   │       SDL_keycode.h
│       │   │       SDL_loadso.h
│       │   │       SDL_locale.h
│       │   │       SDL_log.h
│       │   │       SDL_main.h
│       │   │       SDL_messagebox.h
│       │   │       SDL_metal.h
│       │   │       SDL_misc.h
│       │   │       SDL_mouse.h
│       │   │       SDL_mutex.h
│       │   │       SDL_name.h
│       │   │       SDL_opengl.h
│       │   │       SDL_opengles.h
│       │   │       SDL_opengles2.h
│       │   │       SDL_opengles2_gl2.h
│       │   │       SDL_opengles2_gl2ext.h
│       │   │       SDL_opengles2_gl2platform.h
│       │   │       SDL_opengles2_khrplatform.h
│       │   │       SDL_opengl_glext.h
│       │   │       SDL_pixels.h
│       │   │       SDL_platform.h
│       │   │       SDL_power.h
│       │   │       SDL_quit.h
│       │   │       SDL_rect.h
│       │   │       SDL_render.h
│       │   │       SDL_revision.h
│       │   │       SDL_rwops.h
│       │   │       SDL_scancode.h
│       │   │       SDL_sensor.h
│       │   │       SDL_shape.h
│       │   │       SDL_stdinc.h
│       │   │       SDL_surface.h
│       │   │       SDL_system.h
│       │   │       SDL_syswm.h
│       │   │       SDL_test.h
│       │   │       SDL_test_assert.h
│       │   │       SDL_test_common.h
│       │   │       SDL_test_compare.h
│       │   │       SDL_test_crc32.h
│       │   │       SDL_test_font.h
│       │   │       SDL_test_fuzzer.h
│       │   │       SDL_test_harness.h
│       │   │       SDL_test_images.h
│       │   │       SDL_test_log.h
│       │   │       SDL_test_md5.h
│       │   │       SDL_test_memory.h
│       │   │       SDL_test_random.h
│       │   │       SDL_thread.h
│       │   │       SDL_timer.h
│       │   │       SDL_touch.h
│       │   │       SDL_types.h
│       │   │       SDL_version.h
│       │   │       SDL_video.h
│       │   │       SDL_vulkan.h
│       │   │
│       │   ├───lib
│       │   │   │   libSDL2.a
│       │   │   │   libSDL2.dll.a
│       │   │   │   libSDL2.la
│       │   │   │   libSDL2main.a
│       │   │   │   libSDL2main.la
│       │   │   │   libSDL2_test.a
│       │   │   │   libSDL2_test.la
│       │   │   │
│       │   │   ├───cmake
│       │   │   │   └───SDL2
│       │   │   │           sdl2-config-version.cmake
│       │   │   │           sdl2-config.cmake
│       │   │   │
│       │   │   └───pkgconfig
│       │   │           sdl2.pc
│       │   │
│       │   └───share
│       │       └───aclocal
│       │               sdl2.m4
│       │
│       ├───test
│       │   │   acinclude.m4
│       │   │   autogen.sh
│       │   │   axis.bmp
│       │   │   button.bmp
│       │   │   checkkeys.c
│       │   │   checkkeysthreads.c
│       │   │   CMakeLists.txt
│       │   │   configure
│       │   │   configure.ac
│       │   │   controllermap.bmp
│       │   │   controllermap.c
│       │   │   controllermap_back.bmp
│       │   │   COPYING
│       │   │   icon.bmp
│       │   │   loopwave.c
│       │   │   loopwavequeue.c
│       │   │   Makefile.in
│       │   │   Makefile.os2
│       │   │   Makefile.w32
│       │   │   moose.dat
│       │   │   picture.xbm
│       │   │   README
│       │   │   relative_mode.markdown
│       │   │   sample.bmp
│       │   │   sample.wav
│       │   │   template.test.in
│       │   │   testatomic.c
│       │   │   testaudiocapture.c
│       │   │   testaudiohotplug.c
│       │   │   testaudioinfo.c
│       │   │   testautomation.c
│       │   │   testautomation_audio.c
│       │   │   testautomation_clipboard.c
│       │   │   testautomation_events.c
│       │   │   testautomation_guid.c
│       │   │   testautomation_hints.c
│       │   │   testautomation_joystick.c
│       │   │   testautomation_keyboard.c
│       │   │   testautomation_main.c
│       │   │   testautomation_math.c
│       │   │   testautomation_mouse.c
│       │   │   testautomation_pixels.c
│       │   │   testautomation_platform.c
│       │   │   testautomation_rect.c
│       │   │   testautomation_render.c
│       │   │   testautomation_rwops.c
│       │   │   testautomation_sdltest.c
│       │   │   testautomation_stdlib.c
│       │   │   testautomation_suites.h
│       │   │   testautomation_surface.c
│       │   │   testautomation_syswm.c
│       │   │   testautomation_timer.c
│       │   │   testautomation_video.c
│       │   │   testbounds.c
│       │   │   testcustomcursor.c
│       │   │   testdisplayinfo.c
│       │   │   testdraw2.c
│       │   │   testdrawchessboard.c
│       │   │   testdropfile.c
│       │   │   testerror.c
│       │   │   testevdev.c
│       │   │   testfile.c
│       │   │   testfilesystem.c
│       │   │   testfilesystem_pre.c
│       │   │   testgamecontroller.c
│       │   │   testgeometry.c
│       │   │   testgesture.c
│       │   │   testgl2.c
│       │   │   testgles.c
│       │   │   testgles2.c
│       │   │   testgles2_sdf.c
│       │   │   testgles2_sdf_img_normal.bmp
│       │   │   testgles2_sdf_img_sdf.bmp
│       │   │   testhaptic.c
│       │   │   testhittesting.c
│       │   │   testhotplug.c
│       │   │   testiconv.c
│       │   │   testime.c
│       │   │   testintersections.c
│       │   │   testjoystick.c
│       │   │   testkeys.c
│       │   │   testloadso.c
│       │   │   testlocale.c
│       │   │   testlock.c
│       │   │   testmessage.c
│       │   │   testmouse.c
│       │   │   testmultiaudio.c
│       │   │   testnative.c
│       │   │   testnative.h
│       │   │   testnativecocoa.m
│       │   │   testnativeos2.c
│       │   │   testnativew32.c
│       │   │   testnativex11.c
│       │   │   testoffscreen.c
│       │   │   testoverlay2.c
│       │   │   testplatform.c
│       │   │   testpower.c
│       │   │   testqsort.c
│       │   │   testrelative.c
│       │   │   testrendercopyex.c
│       │   │   testrendertarget.c
│       │   │   testresample.c
│       │   │   testrumble.c
│       │   │   testscale.c
│       │   │   testsem.c
│       │   │   testsensor.c
│       │   │   testshader.c
│       │   │   testshape.c
│       │   │   testsprite2.c
│       │   │   testspriteminimal.c
│       │   │   teststreaming.c
│       │   │   testsurround.c
│       │   │   testthread.c
│       │   │   testtimer.c
│       │   │   testurl.c
│       │   │   testutils.c
│       │   │   testutils.h
│       │   │   testver.c
│       │   │   testviewport.c
│       │   │   testvulkan.c
│       │   │   testwm2.c
│       │   │   testyuv.bmp
│       │   │   testyuv.c
│       │   │   testyuv_cvt.c
│       │   │   testyuv_cvt.h
│       │   │   torturethread.c
│       │   │   unifont-13.0.06-license.txt
│       │   │   unifont-13.0.06.hex
│       │   │   utf8.txt
│       │   │   watcom.mif
│       │   │
│       │   ├───emscripten
│       │   │       joystick-pre.js
│       │   │
│       │   ├───n3ds
│       │   │       logo48x48.png
│       │   │
│       │   ├───nacl
│       │   │       background.js
│       │   │       common.js
│       │   │       index.html
│       │   │       Makefile
│       │   │       manifest.json
│       │   │
│       │   └───shapes
│       │           p01_shape24.bmp
│       │           p01_shape32alpha.bmp
│       │           p01_shape8.bmp
│       │           p02_shape24.bmp
│       │           p02_shape32alpha.bmp
│       │           p02_shape8.bmp
│       │           p03_shape24.bmp
│       │           p03_shape8.bmp
│       │           p04_shape1.bmp
│       │           p04_shape24.bmp
│       │           p04_shape32alpha.bmp
│       │           p04_shape8.bmp
│       │           p05_shape8.bmp
│       │           p06_shape1alpha.bmp
│       │           p06_shape24.bmp
│       │           p06_shape32alpha.bmp
│       │           p06_shape8.bmp
│       │           p07_shape24.bmp
│       │           p07_shape32alpha.bmp
│       │           p07_shape8.bmp
│       │           p08_shape24.bmp
│       │           p08_shape32alpha.bmp
│       │           p08_shape8.bmp
│       │           p09_shape24.bmp
│       │           p09_shape32alpha.bmp
│       │           p09_shape8.bmp
│       │           p10_shape1.bmp
│       │           p10_shape24.bmp
│       │           p10_shape32alpha.bmp
│       │           p10_shape8.bmp
│       │           p11_shape24.bmp
│       │           p11_shape32alpha.bmp
│       │           p11_shape8.bmp
│       │           p12_shape24.bmp
│       │           p12_shape8.bmp
│       │           p13_shape24.bmp
│       │           p13_shape32alpha.bmp
│       │           p13_shape8.bmp
│       │           p14_shape24.bmp
│       │           p14_shape8.bmp
│       │           p15_shape24.bmp
│       │           p15_shape32alpha.bmp
│       │           p15_shape8.bmp
│       │           p16_shape1.bmp
│       │           p16_shape24.bmp
│       │           p16_shape8.bmp
│       │           trollface_24.bmp
│       │           trollface_32alpha.bmp
│       │
│       └───x86_64-w64-mingw32
│           ├───bin
│           │       sdl2-config
│           │       SDL2.dll
│           │
│           ├───include
│           │   └───SDL2
│           │           begin_code.h
│           │           close_code.h
│           │           SDL.h
│           │           SDL_assert.h
│           │           SDL_atomic.h
│           │           SDL_audio.h
│           │           SDL_bits.h
│           │           SDL_blendmode.h
│           │           SDL_clipboard.h
│           │           SDL_config.h
│           │           SDL_cpuinfo.h
│           │           SDL_egl.h
│           │           SDL_endian.h
│           │           SDL_error.h
│           │           SDL_events.h
│           │           SDL_filesystem.h
│           │           SDL_gamecontroller.h
│           │           SDL_gesture.h
│           │           SDL_guid.h
│           │           SDL_haptic.h
│           │           SDL_hidapi.h
│           │           SDL_hints.h
│           │           SDL_joystick.h
│           │           SDL_keyboard.h
│           │           SDL_keycode.h
│           │           SDL_loadso.h
│           │           SDL_locale.h
│           │           SDL_log.h
│           │           SDL_main.h
│           │           SDL_messagebox.h
│           │           SDL_metal.h
│           │           SDL_misc.h
│           │           SDL_mouse.h
│           │           SDL_mutex.h
│           │           SDL_name.h
│           │           SDL_opengl.h
│           │           SDL_opengles.h
│           │           SDL_opengles2.h
│           │           SDL_opengles2_gl2.h
│           │           SDL_opengles2_gl2ext.h
│           │           SDL_opengles2_gl2platform.h
│           │           SDL_opengles2_khrplatform.h
│           │           SDL_opengl_glext.h
│           │           SDL_pixels.h
│           │           SDL_platform.h
│           │           SDL_power.h
│           │           SDL_quit.h
│           │           SDL_rect.h
│           │           SDL_render.h
│           │           SDL_revision.h
│           │           SDL_rwops.h
│           │           SDL_scancode.h
│           │           SDL_sensor.h
│           │           SDL_shape.h
│           │           SDL_stdinc.h
│           │           SDL_surface.h
│           │           SDL_system.h
│           │           SDL_syswm.h
│           │           SDL_test.h
│           │           SDL_test_assert.h
│           │           SDL_test_common.h
│           │           SDL_test_compare.h
│           │           SDL_test_crc32.h
│           │           SDL_test_font.h
│           │           SDL_test_fuzzer.h
│           │           SDL_test_harness.h
│           │           SDL_test_images.h
│           │           SDL_test_log.h
│           │           SDL_test_md5.h
│           │           SDL_test_memory.h
│           │           SDL_test_random.h
│           │           SDL_thread.h
│           │           SDL_timer.h
│           │           SDL_touch.h
│           │           SDL_types.h
│           │           SDL_version.h
│           │           SDL_video.h
│           │           SDL_vulkan.h
│           │
│           ├───lib
│           │   │   libSDL2.a
│           │   │   libSDL2.dll.a
│           │   │   libSDL2.la
│           │   │   libSDL2main.a
│           │   │   libSDL2main.la
│           │   │   libSDL2_test.a
│           │   │   libSDL2_test.la
│           │   │
│           │   ├───cmake
│           │   │   └───SDL2
│           │   │           sdl2-config-version.cmake
│           │   │           sdl2-config.cmake
│           │   │
│           │   └───pkgconfig
│           │           sdl2.pc
│           │
│           └───share
│               └───aclocal
│                       sdl2.m4
│
├───custom
│       color.h
│       msg.h
│
├───func
│       inputV.h
│       print.h
│
├───github
│       .gitignore
│
├───import
│       importAll.h
│
└───res
    ├───html
    └───img
            img.ico
```

## How to Use

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/ZouariOmar/C_Package.git
