# C/C++ Package Project

A C/c++ package project containing custom headers for various functionalities.

## Table of Contents

- [C/C++ Package Project](#cc-package-project)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Folder Structure](#folder-structure)
  - [How to Use (**Installation**)](#how-to-use-installation)
  - [Contributing](#contributing)
  - [License](#license)
  - [Contact](#contact)

## Description

This C/C++ package project consists of custom headers that provide macros, prototypes, and definitions for different functionalities, including error messages, text colors, user input validation, and printing variable types.

## Folder Structure

Your project is organized into the following structure:

- **custom/inc**: Contains header files like `msg.h`, `color.h` and `SDL_Msg.h`.
- **custom/func**: Contains header files such as `inputV.h` and `print.h`.
- **custom/imp**: Contains the `imp_all.h` and `imp_SDL.h`header file.
- **frameworks**: Contains C-Cpp frameworks.

```plaintext
.C-Cpp_Package
├── Cpkg.code-workspace
├── custom
│   ├── C home
│   │   ├── func
│   │   │   ├── inputV.h
│   │   │   └── print.h
│   │   ├── im
│   │   │   ├── imp_all.h
│   │   │   └── imp_SDL.h
│   │   └── inc
│   │       ├── color.h
│   │       ├── msg.h
│   │       └── SDL_Msg.h
│   └── C++ home
│       ├── inc
│       │   ├── linkList.hpp
│       │   ├── math.hpp
│       │   ├── sort.hpp
│       │   └── Tree.hpp
│       ├── README.md
│       ├── src
│       │   ├── linkList.cpp
│       │   ├── math.cpp
│       │   ├── sort.cpp
│       │   └── Tree.cpp
│       ├── test
│       │   ├── tempCodeRunnerFile.cpp
│       │   ├── test
│       │   └── test.cpp
│       └── TODO.md
├── downloads
│   ├── SDL2-devel-2.28.5-mingw
│   │   ├── BUGS.txt
│   │   ├── cmake
│   │   │   ├── sdl2-config.cmake
│   │   │   └── sdl2-config-version.cmake
│   │   ├── COPYING.txt
│   │   ├── CREDITS.txt
│   │   ├── docs
│   │   │   ├── CONTRIBUTING.md
│   │   │   ├── doxyfile
│   │   │   ├── README-android.md
│   │   │   ├── README-cmake.md
│   │   │   ├── README-directfb.md
│   │   │   ├── README-dynapi.md
│   │   │   ├── README-emscripten.md
│   │   │   ├── README-gdk.md
│   │   │   ├── README-gesture.md
│   │   │   ├── README-git.md
│   │   │   ├── README-hg.md
│   │   │   ├── README-ios.md
│   │   │   ├── README-kmsbsd.md
│   │   │   ├── README-linux.md
│   │   │   ├── README-macos.md
│   │   │   ├── README.md
│   │   │   ├── README-n3ds.md
│   │   │   ├── README-nacl.md
│   │   │   ├── README-ngage.md
│   │   │   ├── README-os2.md
│   │   │   ├── README-pandora.md
│   │   │   ├── README-platforms.md
│   │   │   ├── README-porting.md
│   │   │   ├── README-ps2.md
│   │   │   ├── README-psp.md
│   │   │   ├── README-raspberrypi.md
│   │   │   ├── README-riscos.md
│   │   │   ├── README-touch.md
│   │   │   ├── README-versions.md
│   │   │   ├── README-visualc.md
│   │   │   ├── README-vita.md
│   │   │   ├── README-wince.md
│   │   │   ├── README-windows.md
│   │   │   ├── README-winrt.md
│   │   │   └── release_checklist.md
│   │   ├── i686-w64-mingw32
│   │   │   ├── bin
│   │   │   │   ├── sdl2-config
│   │   │   │   └── SDL2.dll
│   │   │   ├── include
│   │   │   │   ├── begin_code.h
│   │   │   │   ├── close_code.h
│   │   │   │   ├── SDL_assert.h
│   │   │   │   ├── SDL_atomic.h
│   │   │   │   ├── SDL_audio.h
│   │   │   │   ├── SDL_bits.h
│   │   │   │   ├── SDL_blendmode.h
│   │   │   │   ├── SDL_clipboard.h
│   │   │   │   ├── SDL_config.h
│   │   │   │   ├── SDL_cpuinfo.h
│   │   │   │   ├── SDL_egl.h
│   │   │   │   ├── SDL_endian.h
│   │   │   │   ├── SDL_error.h
│   │   │   │   ├── SDL_events.h
│   │   │   │   ├── SDL_filesystem.h
│   │   │   │   ├── SDL_gamecontroller.h
│   │   │   │   ├── SDL_gesture.h
│   │   │   │   ├── SDL_guid.h
│   │   │   │   ├── SDL.h
│   │   │   │   ├── SDL_haptic.h
│   │   │   │   ├── SDL_hidapi.h
│   │   │   │   ├── SDL_hints.h
│   │   │   │   ├── SDL_joystick.h
│   │   │   │   ├── SDL_keyboard.h
│   │   │   │   ├── SDL_keycode.h
│   │   │   │   ├── SDL_loadso.h
│   │   │   │   ├── SDL_locale.h
│   │   │   │   ├── SDL_log.h
│   │   │   │   ├── SDL_main.h
│   │   │   │   ├── SDL_messagebox.h
│   │   │   │   ├── SDL_metal.h
│   │   │   │   ├── SDL_misc.h
│   │   │   │   ├── SDL_mouse.h
│   │   │   │   ├── SDL_mutex.h
│   │   │   │   ├── SDL_name.h
│   │   │   │   ├── SDL_opengles2_gl2ext.h
│   │   │   │   ├── SDL_opengles2_gl2.h
│   │   │   │   ├── SDL_opengles2_gl2platform.h
│   │   │   │   ├── SDL_opengles2.h
│   │   │   │   ├── SDL_opengles2_khrplatform.h
│   │   │   │   ├── SDL_opengles.h
│   │   │   │   ├── SDL_opengl_glext.h
│   │   │   │   ├── SDL_opengl.h
│   │   │   │   ├── SDL_pixels.h
│   │   │   │   ├── SDL_platform.h
│   │   │   │   ├── SDL_power.h
│   │   │   │   ├── SDL_quit.h
│   │   │   │   ├── SDL_rect.h
│   │   │   │   ├── SDL_render.h
│   │   │   │   ├── SDL_revision.h
│   │   │   │   ├── SDL_rwops.h
│   │   │   │   ├── SDL_scancode.h
│   │   │   │   ├── SDL_sensor.h
│   │   │   │   ├── SDL_shape.h
│   │   │   │   ├── SDL_stdinc.h
│   │   │   │   ├── SDL_surface.h
│   │   │   │   ├── SDL_system.h
│   │   │   │   ├── SDL_syswm.h
│   │   │   │   ├── SDL_test_assert.h
│   │   │   │   ├── SDL_test_common.h
│   │   │   │   ├── SDL_test_compare.h
│   │   │   │   ├── SDL_test_crc32.h
│   │   │   │   ├── SDL_test_font.h
│   │   │   │   ├── SDL_test_fuzzer.h
│   │   │   │   ├── SDL_test.h
│   │   │   │   ├── SDL_test_harness.h
│   │   │   │   ├── SDL_test_images.h
│   │   │   │   ├── SDL_test_log.h
│   │   │   │   ├── SDL_test_md5.h
│   │   │   │   ├── SDL_test_memory.h
│   │   │   │   ├── SDL_test_random.h
│   │   │   │   ├── SDL_thread.h
│   │   │   │   ├── SDL_timer.h
│   │   │   │   ├── SDL_touch.h
│   │   │   │   ├── SDL_types.h
│   │   │   │   ├── SDL_version.h
│   │   │   │   ├── SDL_video.h
│   │   │   │   └── SDL_vulkan.h
│   │   │   ├── lib
│   │   │   │   ├── cmake
│   │   │   │   │   └── SDL2
│   │   │   │   │       ├── sdl2-config.cmake
│   │   │   │   │       └── sdl2-config-version.cmake
│   │   │   │   ├── libSDL2.a
│   │   │   │   ├── libSDL2.dll.a
│   │   │   │   ├── libSDL2.la
│   │   │   │   ├── libSDL2main.a
│   │   │   │   ├── libSDL2main.la
│   │   │   │   ├── libSDL2_test.a
│   │   │   │   ├── libSDL2_test.la
│   │   │   │   └── pkgconfig
│   │   │   │       └── sdl2.pc
│   │   │   └── share
│   │   │       └── aclocal
│   │   │           └── sdl2.m4
│   │   ├── INSTALL.txt
│   │   ├── Makefile
│   │   ├── README-SDL.txt
│   │   ├── README.txt
│   │   ├── test
│   │   │   ├── acinclude.m4
│   │   │   ├── autogen.sh
│   │   │   ├── axis.bmp
│   │   │   ├── button.bmp
│   │   │   ├── checkkeys.c
│   │   │   ├── checkkeysthreads.c
│   │   │   ├── CMakeLists.txt
│   │   │   ├── configure
│   │   │   ├── configure.ac
│   │   │   ├── controllermap_back.bmp
│   │   │   ├── controllermap.bmp
│   │   │   ├── controllermap.c
│   │   │   ├── COPYING
│   │   │   ├── emscripten
│   │   │   │   └── joystick-pre.js
│   │   │   ├── icon.bmp
│   │   │   ├── loopwave.c
│   │   │   ├── loopwavequeue.c
│   │   │   ├── Makefile.in
│   │   │   ├── Makefile.os2
│   │   │   ├── Makefile.w32
│   │   │   ├── moose.dat
│   │   │   ├── n3ds
│   │   │   │   └── logo48x48.png
│   │   │   ├── nacl
│   │   │   │   ├── background.js
│   │   │   │   ├── common.js
│   │   │   │   ├── index.html
│   │   │   │   ├── Makefile
│   │   │   │   └── manifest.json
│   │   │   ├── picture.xbm
│   │   │   ├── README
│   │   │   ├── relative_mode.markdown
│   │   │   ├── sample.bmp
│   │   │   ├── sample.wav
│   │   │   ├── shapes
│   │   │   │   ├── p01_shape24.bmp
│   │   │   │   ├── p01_shape32alpha.bmp
│   │   │   │   ├── p01_shape8.bmp
│   │   │   │   ├── p02_shape24.bmp
│   │   │   │   ├── p02_shape32alpha.bmp
│   │   │   │   ├── p02_shape8.bmp
│   │   │   │   ├── p03_shape24.bmp
│   │   │   │   ├── p03_shape8.bmp
│   │   │   │   ├── p04_shape1.bmp
│   │   │   │   ├── p04_shape24.bmp
│   │   │   │   ├── p04_shape32alpha.bmp
│   │   │   │   ├── p04_shape8.bmp
│   │   │   │   ├── p05_shape8.bmp
│   │   │   │   ├── p06_shape1alpha.bmp
│   │   │   │   ├── p06_shape24.bmp
│   │   │   │   ├── p06_shape32alpha.bmp
│   │   │   │   ├── p06_shape8.bmp
│   │   │   │   ├── p07_shape24.bmp
│   │   │   │   ├── p07_shape32alpha.bmp
│   │   │   │   ├── p07_shape8.bmp
│   │   │   │   ├── p08_shape24.bmp
│   │   │   │   ├── p08_shape32alpha.bmp
│   │   │   │   ├── p08_shape8.bmp
│   │   │   │   ├── p09_shape24.bmp
│   │   │   │   ├── p09_shape32alpha.bmp
│   │   │   │   ├── p09_shape8.bmp
│   │   │   │   ├── p10_shape1.bmp
│   │   │   │   ├── p10_shape24.bmp
│   │   │   │   ├── p10_shape32alpha.bmp
│   │   │   │   ├── p10_shape8.bmp
│   │   │   │   ├── p11_shape24.bmp
│   │   │   │   ├── p11_shape32alpha.bmp
│   │   │   │   ├── p11_shape8.bmp
│   │   │   │   ├── p12_shape24.bmp
│   │   │   │   ├── p12_shape8.bmp
│   │   │   │   ├── p13_shape24.bmp
│   │   │   │   ├── p13_shape32alpha.bmp
│   │   │   │   ├── p13_shape8.bmp
│   │   │   │   ├── p14_shape24.bmp
│   │   │   │   ├── p14_shape8.bmp
│   │   │   │   ├── p15_shape24.bmp
│   │   │   │   ├── p15_shape32alpha.bmp
│   │   │   │   ├── p15_shape8.bmp
│   │   │   │   ├── p16_shape1.bmp
│   │   │   │   ├── p16_shape24.bmp
│   │   │   │   ├── p16_shape8.bmp
│   │   │   │   ├── trollface_24.bmp
│   │   │   │   └── trollface_32alpha.bmp
│   │   │   ├── template.test.in
│   │   │   ├── testatomic.c
│   │   │   ├── testaudiocapture.c
│   │   │   ├── testaudiohotplug.c
│   │   │   ├── testaudioinfo.c
│   │   │   ├── testautomation_audio.c
│   │   │   ├── testautomation.c
│   │   │   ├── testautomation_clipboard.c
│   │   │   ├── testautomation_events.c
│   │   │   ├── testautomation_guid.c
│   │   │   ├── testautomation_hints.c
│   │   │   ├── testautomation_joystick.c
│   │   │   ├── testautomation_keyboard.c
│   │   │   ├── testautomation_main.c
│   │   │   ├── testautomation_math.c
│   │   │   ├── testautomation_mouse.c
│   │   │   ├── testautomation_pixels.c
│   │   │   ├── testautomation_platform.c
│   │   │   ├── testautomation_rect.c
│   │   │   ├── testautomation_render.c
│   │   │   ├── testautomation_rwops.c
│   │   │   ├── testautomation_sdltest.c
│   │   │   ├── testautomation_stdlib.c
│   │   │   ├── testautomation_suites.h
│   │   │   ├── testautomation_surface.c
│   │   │   ├── testautomation_syswm.c
│   │   │   ├── testautomation_timer.c
│   │   │   ├── testautomation_video.c
│   │   │   ├── testbounds.c
│   │   │   ├── testcustomcursor.c
│   │   │   ├── testdisplayinfo.c
│   │   │   ├── testdraw2.c
│   │   │   ├── testdrawchessboard.c
│   │   │   ├── testdropfile.c
│   │   │   ├── testerror.c
│   │   │   ├── testevdev.c
│   │   │   ├── testfile.c
│   │   │   ├── testfilesystem.c
│   │   │   ├── testfilesystem_pre.c
│   │   │   ├── testgamecontroller.c
│   │   │   ├── testgeometry.c
│   │   │   ├── testgesture.c
│   │   │   ├── testgl2.c
│   │   │   ├── testgles2.c
│   │   │   ├── testgles2_sdf.c
│   │   │   ├── testgles2_sdf_img_normal.bmp
│   │   │   ├── testgles2_sdf_img_sdf.bmp
│   │   │   ├── testgles.c
│   │   │   ├── testhaptic.c
│   │   │   ├── testhittesting.c
│   │   │   ├── testhotplug.c
│   │   │   ├── testiconv.c
│   │   │   ├── testime.c
│   │   │   ├── testintersections.c
│   │   │   ├── testjoystick.c
│   │   │   ├── testkeys.c
│   │   │   ├── testloadso.c
│   │   │   ├── testlocale.c
│   │   │   ├── testlock.c
│   │   │   ├── testmessage.c
│   │   │   ├── testmouse.c
│   │   │   ├── testmultiaudio.c
│   │   │   ├── testnative.c
│   │   │   ├── testnativecocoa.m
│   │   │   ├── testnative.h
│   │   │   ├── testnativeos2.c
│   │   │   ├── testnativew32.c
│   │   │   ├── testnativex11.c
│   │   │   ├── testoffscreen.c
│   │   │   ├── testoverlay2.c
│   │   │   ├── testplatform.c
│   │   │   ├── testpower.c
│   │   │   ├── testqsort.c
│   │   │   ├── testrelative.c
│   │   │   ├── testrendercopyex.c
│   │   │   ├── testrendertarget.c
│   │   │   ├── testresample.c
│   │   │   ├── testrumble.c
│   │   │   ├── testscale.c
│   │   │   ├── testsem.c
│   │   │   ├── testsensor.c
│   │   │   ├── testshader.c
│   │   │   ├── testshape.c
│   │   │   ├── testsprite2.c
│   │   │   ├── testspriteminimal.c
│   │   │   ├── teststreaming.c
│   │   │   ├── testsurround.c
│   │   │   ├── testthread.c
│   │   │   ├── testtimer.c
│   │   │   ├── testurl.c
│   │   │   ├── testutils.c
│   │   │   ├── testutils.h
│   │   │   ├── testver.c
│   │   │   ├── testviewport.c
│   │   │   ├── testvulkan.c
│   │   │   ├── testwm2.c
│   │   │   ├── testyuv.bmp
│   │   │   ├── testyuv.c
│   │   │   ├── testyuv_cvt.c
│   │   │   ├── testyuv_cvt.h
│   │   │   ├── torturethread.c
│   │   │   ├── unifont-13.0.06.hex
│   │   │   ├── unifont-13.0.06-license.txt
│   │   │   ├── utf8.txt
│   │   │   └── watcom.mif
│   │   ├── WhatsNew.txt
│   │   └── x86_64-w64-mingw32
│   │       ├── bin
│   │       │   ├── sdl2-config
│   │       │   └── SDL2.dll
│   │       ├── include
│   │       │   └── SDL2
│   │       │       ├── begin_code.h
│   │       │       ├── close_code.h
│   │       │       ├── SDL_assert.h
│   │       │       ├── SDL_atomic.h
│   │       │       ├── SDL_audio.h
│   │       │       ├── SDL_bits.h
│   │       │       ├── SDL_blendmode.h
│   │       │       ├── SDL_clipboard.h
│   │       │       ├── SDL_config.h
│   │       │       ├── SDL_cpuinfo.h
│   │       │       ├── SDL_egl.h
│   │       │       ├── SDL_endian.h
│   │       │       ├── SDL_error.h
│   │       │       ├── SDL_events.h
│   │       │       ├── SDL_filesystem.h
│   │       │       ├── SDL_gamecontroller.h
│   │       │       ├── SDL_gesture.h
│   │       │       ├── SDL_guid.h
│   │       │       ├── SDL.h
│   │       │       ├── SDL_haptic.h
│   │       │       ├── SDL_hidapi.h
│   │       │       ├── SDL_hints.h
│   │       │       ├── SDL_joystick.h
│   │       │       ├── SDL_keyboard.h
│   │       │       ├── SDL_keycode.h
│   │       │       ├── SDL_loadso.h
│   │       │       ├── SDL_locale.h
│   │       │       ├── SDL_log.h
│   │       │       ├── SDL_main.h
│   │       │       ├── SDL_messagebox.h
│   │       │       ├── SDL_metal.h
│   │       │       ├── SDL_misc.h
│   │       │       ├── SDL_mouse.h
│   │       │       ├── SDL_mutex.h
│   │       │       ├── SDL_name.h
│   │       │       ├── SDL_opengles2_gl2ext.h
│   │       │       ├── SDL_opengles2_gl2.h
│   │       │       ├── SDL_opengles2_gl2platform.h
│   │       │       ├── SDL_opengles2.h
│   │       │       ├── SDL_opengles2_khrplatform.h
│   │       │       ├── SDL_opengles.h
│   │       │       ├── SDL_opengl_glext.h
│   │       │       ├── SDL_opengl.h
│   │       │       ├── SDL_pixels.h
│   │       │       ├── SDL_platform.h
│   │       │       ├── SDL_power.h
│   │       │       ├── SDL_quit.h
│   │       │       ├── SDL_rect.h
│   │       │       ├── SDL_render.h
│   │       │       ├── SDL_revision.h
│   │       │       ├── SDL_rwops.h
│   │       │       ├── SDL_scancode.h
│   │       │       ├── SDL_sensor.h
│   │       │       ├── SDL_shape.h
│   │       │       ├── SDL_stdinc.h
│   │       │       ├── SDL_surface.h
│   │       │       ├── SDL_system.h
│   │       │       ├── SDL_syswm.h
│   │       │       ├── SDL_test_assert.h
│   │       │       ├── SDL_test_common.h
│   │       │       ├── SDL_test_compare.h
│   │       │       ├── SDL_test_crc32.h
│   │       │       ├── SDL_test_font.h
│   │       │       ├── SDL_test_fuzzer.h
│   │       │       ├── SDL_test.h
│   │       │       ├── SDL_test_harness.h
│   │       │       ├── SDL_test_images.h
│   │       │       ├── SDL_test_log.h
│   │       │       ├── SDL_test_md5.h
│   │       │       ├── SDL_test_memory.h
│   │       │       ├── SDL_test_random.h
│   │       │       ├── SDL_thread.h
│   │       │       ├── SDL_timer.h
│   │       │       ├── SDL_touch.h
│   │       │       ├── SDL_types.h
│   │       │       ├── SDL_version.h
│   │       │       ├── SDL_video.h
│   │       │       └── SDL_vulkan.h
│   │       ├── lib
│   │       │   ├── cmake
│   │       │   │   └── SDL2
│   │       │   │       ├── sdl2-config.cmake
│   │       │   │       └── sdl2-config-version.cmake
│   │       │   ├── libSDL2.a
│   │       │   ├── libSDL2.dll.a
│   │       │   ├── libSDL2.la
│   │       │   ├── libSDL2main.a
│   │       │   ├── libSDL2main.la
│   │       │   ├── libSDL2_test.a
│   │       │   ├── libSDL2_test.la
│   │       │   └── pkgconfig
│   │       │       └── sdl2.pc
│   │       └── share
│   │           └── aclocal
│   │               └── sdl2.m4
│   └── SDL-devel-1.2.15-mingw32
│       └── SDL-1.2.15
│           ├── bin
│           │   ├── sdl-config
│           │   └── SDL.dll
│           ├── BUGS
│           ├── build-scripts
│           │   ├── config.guess
│           │   ├── config.sub
│           │   ├── fatbuild.sh
│           │   ├── install-sh
│           │   ├── ltmain.sh
│           │   ├── makedep.sh
│           │   ├── mkinstalldirs
│           │   └── strip_fPIC.sh
│           ├── COPYING
│           ├── docs
│           │   ├── html
│           │   │   ├── audio.html
│           │   │   ├── cdrom.html
│           │   │   ├── eventfunctions.html
│           │   │   ├── event.html
│           │   │   ├── eventstructures.html
│           │   │   ├── general.html
│           │   │   ├── guideaboutsdldoc.html
│           │   │   ├── guideaudioexamples.html
│           │   │   ├── guidebasicsinit.html
│           │   │   ├── guidecdromexamples.html
│           │   │   ├── guidecredits.html
│           │   │   ├── guideeventexamples.html
│           │   │   ├── guideexamples.html
│           │   │   ├── guide.html
│           │   │   ├── guideinput.html
│           │   │   ├── guideinputkeyboard.html
│           │   │   ├── guidepreface.html
│           │   │   ├── guidethebasics.html
│           │   │   ├── guidetimeexamples.html
│           │   │   ├── guidevideo.html
│           │   │   ├── guidevideoopengl.html
│           │   │   ├── index.html
│           │   │   ├── joystick.html
│           │   │   ├── reference.html
│           │   │   ├── sdlactiveevent.html
│           │   │   ├── sdladdtimer.html
│           │   │   ├── sdlaudiocvt.html
│           │   │   ├── sdlaudiospec.html
│           │   │   ├── sdlblitsurface.html
│           │   │   ├── sdlbuildaudiocvt.html
│           │   │   ├── sdlcdclose.html
│           │   │   ├── sdlcdeject.html
│           │   │   ├── sdlcd.html
│           │   │   ├── sdlcdname.html
│           │   │   ├── sdlcdnumdrives.html
│           │   │   ├── sdlcdopen.html
│           │   │   ├── sdlcdpause.html
│           │   │   ├── sdlcdplay.html
│           │   │   ├── sdlcdplaytracks.html
│           │   │   ├── sdlcdresume.html
│           │   │   ├── sdlcdstatus.html
│           │   │   ├── sdlcdstop.html
│           │   │   ├── sdlcdtrack.html
│           │   │   ├── sdlcloseaudio.html
│           │   │   ├── sdlcolor.html
│           │   │   ├── sdlcondbroadcast.html
│           │   │   ├── sdlcondsignal.html
│           │   │   ├── sdlcondwait.html
│           │   │   ├── sdlcondwaittimeout.html
│           │   │   ├── sdlconvertaudio.html
│           │   │   ├── sdlconvertsurface.html
│           │   │   ├── sdlcreatecond.html
│           │   │   ├── sdlcreatecursor.html
│           │   │   ├── sdlcreatemutex.html
│           │   │   ├── sdlcreatergbsurfacefrom.html
│           │   │   ├── sdlcreatergbsurface.html
│           │   │   ├── sdlcreatesemaphore.html
│           │   │   ├── sdlcreatethread.html
│           │   │   ├── sdlcreateyuvoverlay.html
│           │   │   ├── sdldelay.html
│           │   │   ├── sdldestroycond.html
│           │   │   ├── sdldestroymutex.html
│           │   │   ├── sdldestroysemaphore.html
│           │   │   ├── sdldisplayformatalpha.html
│           │   │   ├── sdldisplayformat.html
│           │   │   ├── sdldisplayyuvoverlay.html
│           │   │   ├── sdlenablekeyrepeat.html
│           │   │   ├── sdlenableunicode.html
│           │   │   ├── sdlenvvars.html
│           │   │   ├── sdlevent.html
│           │   │   ├── sdleventstate.html
│           │   │   ├── sdlexposeevent.html
│           │   │   ├── sdlfillrect.html
│           │   │   ├── sdlflip.html
│           │   │   ├── sdlfreecursor.html
│           │   │   ├── sdlfreesurface.html
│           │   │   ├── sdlfreewav.html
│           │   │   ├── sdlfreeyuvoverlay.html
│           │   │   ├── sdlgetappstate.html
│           │   │   ├── sdlgetaudiostatus.html
│           │   │   ├── sdlgetcliprect.html
│           │   │   ├── sdlgetcursor.html
│           │   │   ├── sdlgeterror.html
│           │   │   ├── sdlgeteventfilter.html
│           │   │   ├── sdlgetgammaramp.html
│           │   │   ├── sdlgetkeyname.html
│           │   │   ├── sdlgetkeystate.html
│           │   │   ├── sdlgetmodstate.html
│           │   │   ├── sdlgetmousestate.html
│           │   │   ├── sdlgetrelativemousestate.html
│           │   │   ├── sdlgetrgba.html
│           │   │   ├── sdlgetrgb.html
│           │   │   ├── sdlgetthreadid.html
│           │   │   ├── sdlgetticks.html
│           │   │   ├── sdlgetvideoinfo.html
│           │   │   ├── sdlgetvideosurface.html
│           │   │   ├── sdlglattr.html
│           │   │   ├── sdlglgetattribute.html
│           │   │   ├── sdlglgetprocaddress.html
│           │   │   ├── sdlglloadlibrary.html
│           │   │   ├── sdlglsetattribute.html
│           │   │   ├── sdlglswapbuffers.html
│           │   │   ├── sdlinit.html
│           │   │   ├── sdlinitsubsystem.html
│           │   │   ├── sdljoyaxisevent.html
│           │   │   ├── sdljoyballevent.html
│           │   │   ├── sdljoybuttonevent.html
│           │   │   ├── sdljoyhatevent.html
│           │   │   ├── sdljoystickclose.html
│           │   │   ├── sdljoystickeventstate.html
│           │   │   ├── sdljoystickgetaxis.html
│           │   │   ├── sdljoystickgetball.html
│           │   │   ├── sdljoystickgetbutton.html
│           │   │   ├── sdljoystickgethat.html
│           │   │   ├── sdljoystickindex.html
│           │   │   ├── sdljoystickname.html
│           │   │   ├── sdljoysticknumaxes.html
│           │   │   ├── sdljoysticknumballs.html
│           │   │   ├── sdljoysticknumbuttons.html
│           │   │   ├── sdljoysticknumhats.html
│           │   │   ├── sdljoystickopened.html
│           │   │   ├── sdljoystickopen.html
│           │   │   ├── sdljoystickupdate.html
│           │   │   ├── sdlkeyboardevent.html
│           │   │   ├── sdlkey.html
│           │   │   ├── sdlkeysym.html
│           │   │   ├── sdlkillthread.html
│           │   │   ├── sdllistmodes.html
│           │   │   ├── sdlloadbmp.html
│           │   │   ├── sdlloadwav.html
│           │   │   ├── sdllockaudio.html
│           │   │   ├── sdllocksurface.html
│           │   │   ├── sdllockyuvoverlay.html
│           │   │   ├── sdlmaprgba.html
│           │   │   ├── sdlmaprgb.html
│           │   │   ├── sdlmixaudio.html
│           │   │   ├── sdlmousebuttonevent.html
│           │   │   ├── sdlmousemotionevent.html
│           │   │   ├── sdlmutexp.html
│           │   │   ├── sdlmutexv.html
│           │   │   ├── sdlnumjoysticks.html
│           │   │   ├── sdlopenaudio.html
│           │   │   ├── sdloverlay.html
│           │   │   ├── sdlpalette.html
│           │   │   ├── sdlpauseaudio.html
│           │   │   ├── sdlpeepevents.html
│           │   │   ├── sdlpixelformat.html
│           │   │   ├── sdlpollevent.html
│           │   │   ├── sdlpumpevents.html
│           │   │   ├── sdlpushevent.html
│           │   │   ├── sdlquitevent.html
│           │   │   ├── sdlquit.html
│           │   │   ├── sdlquitsubsystem.html
│           │   │   ├── sdlrect.html
│           │   │   ├── sdlremovetimer.html
│           │   │   ├── sdlresizeevent.html
│           │   │   ├── sdlsavebmp.html
│           │   │   ├── sdlsempost.html
│           │   │   ├── sdlsemtrywait.html
│           │   │   ├── sdlsemvalue.html
│           │   │   ├── sdlsemwait.html
│           │   │   ├── sdlsemwaittimeout.html
│           │   │   ├── sdlsetalpha.html
│           │   │   ├── sdlsetcliprect.html
│           │   │   ├── sdlsetcolorkey.html
│           │   │   ├── sdlsetcolors.html
│           │   │   ├── sdlsetcursor.html
│           │   │   ├── sdlseteventfilter.html
│           │   │   ├── sdlsetgamma.html
│           │   │   ├── sdlsetgammaramp.html
│           │   │   ├── sdlsetmodstate.html
│           │   │   ├── sdlsetpalette.html
│           │   │   ├── sdlsettimer.html
│           │   │   ├── sdlsetvideomode.html
│           │   │   ├── sdlshowcursor.html
│           │   │   ├── sdlsurface.html
│           │   │   ├── sdlsyswmevent.html
│           │   │   ├── sdlthreadid.html
│           │   │   ├── sdlunlockaudio.html
│           │   │   ├── sdlunlocksurface.html
│           │   │   ├── sdlunlockyuvoverlay.html
│           │   │   ├── sdlupdaterect.html
│           │   │   ├── sdlupdaterects.html
│           │   │   ├── sdluserevent.html
│           │   │   ├── sdlvideodrivername.html
│           │   │   ├── sdlvideoinfo.html
│           │   │   ├── sdlvideomodeok.html
│           │   │   ├── sdlwaitevent.html
│           │   │   ├── sdlwaitthread.html
│           │   │   ├── sdlwarpmouse.html
│           │   │   ├── sdlwasinit.html
│           │   │   ├── sdlwmgetcaption.html
│           │   │   ├── sdlwmgrabinput.html
│           │   │   ├── sdlwmiconifywindow.html
│           │   │   ├── sdlwmsetcaption.html
│           │   │   ├── sdlwmseticon.html
│           │   │   ├── sdlwmtogglefullscreen.html
│           │   │   ├── thread.html
│           │   │   ├── time.html
│           │   │   ├── video.html
│           │   │   └── wm.html
│           │   ├── images
│           │   │   └── rainbow.gif
│           │   └── index.html
│           ├── docs.html
│           ├── include
│           │   └── SDL
│           │       ├── begin_code.h
│           │       ├── close_code.h
│           │       ├── SDL_active.h
│           │       ├── SDL_audio.h
│           │       ├── SDL_byteorder.h
│           │       ├── SDL_cdrom.h
│           │       ├── SDL_config.h
│           │       ├── SDL_config_win32.h
│           │       ├── SDL_copying.h
│           │       ├── SDL_cpuinfo.h
│           │       ├── SDL_endian.h
│           │       ├── SDL_error.h
│           │       ├── SDL_events.h
│           │       ├── SDL_getenv.h
│           │       ├── SDL.h
│           │       ├── SDL_joystick.h
│           │       ├── SDL_keyboard.h
│           │       ├── SDL_keysym.h
│           │       ├── SDL_loadso.h
│           │       ├── SDL_main.h
│           │       ├── SDL_mouse.h
│           │       ├── SDL_mutex.h
│           │       ├── SDL_name.h
│           │       ├── SDL_opengl.h
│           │       ├── SDL_platform.h
│           │       ├── SDL_quit.h
│           │       ├── SDL_rwops.h
│           │       ├── SDL_stdinc.h
│           │       ├── SDL_syswm.h
│           │       ├── SDL_thread.h
│           │       ├── SDL_timer.h
│           │       ├── SDL_types.h
│           │       ├── SDL_version.h
│           │       └── SDL_video.h
│           ├── INSTALL
│           ├── lib
│           │   ├── libSDL.dll.a
│           │   ├── libSDL.la
│           │   └── libSDLmain.a
│           ├── Makefile
│           ├── man
│           │   └── man3
│           │       ├── SDL_ActiveEvent.3
│           │       ├── SDL_AddTimer.3
│           │       ├── SDL_AudioCVT.3
│           │       ├── SDL_AudioSpec.3
│           │       ├── SDL_BlitSurface.3
│           │       ├── SDL_BuildAudioCVT.3
│           │       ├── SDL_CD.3
│           │       ├── SDL_CDClose.3
│           │       ├── SDL_CDEject.3
│           │       ├── SDL_CDName.3
│           │       ├── SDL_CDNumDrives.3
│           │       ├── SDL_CDOpen.3
│           │       ├── SDL_CDPause.3
│           │       ├── SDL_CDPlay.3
│           │       ├── SDL_CDPlayTracks.3
│           │       ├── SDL_CDResume.3
│           │       ├── SDL_CDStatus.3
│           │       ├── SDL_CDStop.3
│           │       ├── SDL_CDtrack.3
│           │       ├── SDL_CloseAudio.3
│           │       ├── SDL_Color.3
│           │       ├── SDL_CondBroadcast.3
│           │       ├── SDL_CondSignal.3
│           │       ├── SDL_CondWait.3
│           │       ├── SDL_CondWaitTimeout.3
│           │       ├── SDL_ConvertAudio.3
│           │       ├── SDL_ConvertSurface.3
│           │       ├── SDL_CreateCond.3
│           │       ├── SDL_CreateCursor.3
│           │       ├── SDL_CreateMutex.3
│           │       ├── SDL_CreateRGBSurface.3
│           │       ├── SDL_CreateRGBSurfaceFrom.3
│           │       ├── SDL_CreateSemaphore.3
│           │       ├── SDL_CreateThread.3
│           │       ├── SDL_CreateYUVOverlay.3
│           │       ├── SDL_Delay.3
│           │       ├── SDL_DestroyCond.3
│           │       ├── SDL_DestroyMutex.3
│           │       ├── SDL_DestroySemaphore.3
│           │       ├── SDL_DisplayFormat.3
│           │       ├── SDL_DisplayFormatAlpha.3
│           │       ├── SDL_DisplayYUVOverlay.3
│           │       ├── SDL_EnableKeyRepeat.3
│           │       ├── SDL_EnableUNICODE.3
│           │       ├── SDL_Event.3
│           │       ├── SDL_EventState.3
│           │       ├── SDL_ExposeEvent.3
│           │       ├── SDL_FillRect.3
│           │       ├── SDL_Flip.3
│           │       ├── SDL_FreeCursor.3
│           │       ├── SDL_FreeSurface.3
│           │       ├── SDL_FreeWAV.3
│           │       ├── SDL_FreeYUVOverlay.3
│           │       ├── SDL_GetAppState.3
│           │       ├── SDL_GetAudioStatus.3
│           │       ├── SDL_GetClipRect.3
│           │       ├── SDL_GetCursor.3
│           │       ├── SDL_GetError.3
│           │       ├── SDL_GetEventFilter.3
│           │       ├── SDL_GetGamma.3
│           │       ├── SDL_GetGammaRamp.3
│           │       ├── SDL_GetKeyName.3
│           │       ├── SDL_GetKeyState.3
│           │       ├── SDL_GetModState.3
│           │       ├── SDL_GetMouseState.3
│           │       ├── SDL_GetRelativeMouseState.3
│           │       ├── SDL_GetRGB.3
│           │       ├── SDL_GetRGBA.3
│           │       ├── SDL_GetThreadID.3
│           │       ├── SDL_GetTicks.3
│           │       ├── SDL_GetVideoInfo.3
│           │       ├── SDL_GetVideoSurface.3
│           │       ├── SDL_GLattr.3
│           │       ├── SDL_GL_GetAttribute.3
│           │       ├── SDL_GL_GetProcAddress.3
│           │       ├── SDL_GL_LoadLibrary.3
│           │       ├── SDL_GL_SetAttribute.3
│           │       ├── SDL_GL_SwapBuffers.3
│           │       ├── SDL_Init.3
│           │       ├── SDL_InitSubSystem.3
│           │       ├── SDL_JoyAxisEvent.3
│           │       ├── SDL_JoyBallEvent.3
│           │       ├── SDL_JoyButtonEvent.3
│           │       ├── SDL_JoyHatEvent.3
│           │       ├── SDL_JoystickClose.3
│           │       ├── SDL_JoystickEventState.3
│           │       ├── SDL_JoystickGetAxis.3
│           │       ├── SDL_JoystickGetBall.3
│           │       ├── SDL_JoystickGetButton.3
│           │       ├── SDL_JoystickGetHat.3
│           │       ├── SDL_JoystickIndex.3
│           │       ├── SDL_JoystickName.3
│           │       ├── SDL_JoystickNumAxes.3
│           │       ├── SDL_JoystickNumBalls.3
│           │       ├── SDL_JoystickNumButtons.3
│           │       ├── SDL_JoystickNumHats.3
│           │       ├── SDL_JoystickOpen.3
│           │       ├── SDL_JoystickOpened.3
│           │       ├── SDL_JoystickUpdate.3
│           │       ├── SDLKey.3
│           │       ├── SDL_KeyboardEvent.3
│           │       ├── SDL_keysym.3
│           │       ├── SDL_KillThread.3
│           │       ├── SDL_ListModes.3
│           │       ├── SDL_LoadBMP.3
│           │       ├── SDL_LoadWAV.3
│           │       ├── SDL_LockAudio.3
│           │       ├── SDL_LockSurface.3
│           │       ├── SDL_LockYUVOverlay.3
│           │       ├── SDL_MapRGB.3
│           │       ├── SDL_MapRGBA.3
│           │       ├── SDL_MixAudio.3
│           │       ├── SDL_MouseButtonEvent.3
│           │       ├── SDL_MouseMotionEvent.3
│           │       ├── SDL_mutexP.3
│           │       ├── SDL_mutexV.3
│           │       ├── SDL_NumJoysticks.3
│           │       ├── SDL_OpenAudio.3
│           │       ├── SDL_Overlay.3
│           │       ├── SDL_Palette.3
│           │       ├── SDL_PauseAudio.3
│           │       ├── SDL_PeepEvents.3
│           │       ├── SDL_PixelFormat.3
│           │       ├── SDL_PollEvent.3
│           │       ├── SDL_PumpEvents.3
│           │       ├── SDL_PushEvent.3
│           │       ├── SDL_Quit.3
│           │       ├── SDL_QuitEvent.3
│           │       ├── SDL_QuitSubSystem.3
│           │       ├── SDL_Rect.3
│           │       ├── SDL_RemoveTimer.3
│           │       ├── SDL_ResizeEvent.3
│           │       ├── SDL_RWFromFile.3
│           │       ├── SDL_SaveBMP.3
│           │       ├── SDL_SemPost.3
│           │       ├── SDL_SemTryWait.3
│           │       ├── SDL_SemValue.3
│           │       ├── SDL_SemWait.3
│           │       ├── SDL_SemWaitTimeout.3
│           │       ├── SDL_SetAlpha.3
│           │       ├── SDL_SetClipRect.3
│           │       ├── SDL_SetColorKey.3
│           │       ├── SDL_SetColors.3
│           │       ├── SDL_SetCursor.3
│           │       ├── SDL_SetEventFilter.3
│           │       ├── SDL_SetGamma.3
│           │       ├── SDL_SetGammaRamp.3
│           │       ├── SDL_SetModState.3
│           │       ├── SDL_SetPalette.3
│           │       ├── SDL_SetTimer.3
│           │       ├── SDL_SetVideoMode.3
│           │       ├── SDL_ShowCursor.3
│           │       ├── SDL_Surface.3
│           │       ├── SDL_SysWMEvent.3
│           │       ├── SDL_ThreadID.3
│           │       ├── SDL_UnlockAudio.3
│           │       ├── SDL_UnlockSurface.3
│           │       ├── SDL_UnlockYUVOverlay.3
│           │       ├── SDL_UpdateRect.3
│           │       ├── SDL_UpdateRects.3
│           │       ├── SDL_UserEvent.3
│           │       ├── SDL_VideoDriverName.3
│           │       ├── SDL_VideoInfo.3
│           │       ├── SDL_VideoModeOK.3
│           │       ├── SDL_WaitEvent.3
│           │       ├── SDL_WaitThread.3
│           │       ├── SDL_WarpMouse.3
│           │       ├── SDL_WasInit.3
│           │       ├── SDL_WM_GetCaption.3
│           │       ├── SDL_WM_GrabInput.3
│           │       ├── SDL_WM_IconifyWindow.3
│           │       ├── SDL_WM_SetCaption.3
│           │       ├── SDL_WM_SetIcon.3
│           │       └── SDL_WM_ToggleFullScreen.3
│           ├── README
│           ├── README-SDL.txt
│           ├── share
│           │   └── aclocal
│           │       └── sdl.m4
│           ├── test
│           │   ├── acinclude.m4
│           │   ├── aclocal.m4
│           │   ├── autogen.sh
│           │   ├── checkkeys.c
│           │   ├── configure
│           │   ├── configure.in
│           │   ├── COPYING
│           │   ├── gcc-fat.sh
│           │   ├── graywin.c
│           │   ├── icon.bmp
│           │   ├── loopwave.c
│           │   ├── Makefile.in
│           │   ├── moose.dat
│           │   ├── picture.xbm
│           │   ├── README
│           │   ├── sail.bmp
│           │   ├── sample.bmp
│           │   ├── sample.wav
│           │   ├── testalpha.c
│           │   ├── testbitmap.c
│           │   ├── testblitspeed.c
│           │   ├── testcdrom.c
│           │   ├── testcursor.c
│           │   ├── testdyngl.c
│           │   ├── testerror.c
│           │   ├── testfile.c
│           │   ├── testgamma.c
│           │   ├── testgl.c
│           │   ├── testhread.c
│           │   ├── testiconv.c
│           │   ├── testjoystick.c
│           │   ├── testkeys.c
│           │   ├── testloadso.c
│           │   ├── testlock.c
│           │   ├── testoverlay2.c
│           │   ├── testoverlay.c
│           │   ├── testpalette.c
│           │   ├── testplatform.c
│           │   ├── testsem.c
│           │   ├── testsprite.c
│           │   ├── testtimer.c
│           │   ├── testver.c
│           │   ├── testvidinfo.c
│           │   ├── testwin.c
│           │   ├── testwm.c
│           │   ├── threadwin.c
│           │   ├── torturethread.c
│           │   └── utf8.txt
│           └── WhatsNew
├── fonts
│   ├── 04b_03.zip
│   ├── 04b_30.zip
│   ├── asman.zip
│   ├── beech.zip
│   ├── city_contrasts.zip
│   ├── comicate.zip
│   ├── lead_coat.zip
│   ├── outwrite.zip
│   └── stocky.zip
├── github
├── LICENSE
├── README.md
├── res
│   ├── html
│   └── img
│       └── img.ico
└── tree.txt

58 directories, 927 files
```

## How to Use (**Installation**)

To import the package on your Linux system, follow these steps:

1. **Clone the Repository**:

    ```sh
    git clone https://github.com/ZouariOmar/C_Package.git
    ```

2. **Navigate to the Directory**:

    ```sh
    cd Run_C_Project
    ```

## Contributing

We welcome contributions from the community. If you wish to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

Please make sure your code adheres to our coding standards and includes appropriate tests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, please feel free to reach out to us at [zouariomar20@gmail.com](mailto:zouariomar20@gmail.com)
