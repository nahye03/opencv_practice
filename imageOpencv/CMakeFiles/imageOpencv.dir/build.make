# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nahye/coding/opencv/imageOpencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nahye/coding/opencv/imageOpencv

# Include any dependencies generated for this target.
include CMakeFiles/imageOpencv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/imageOpencv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imageOpencv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imageOpencv.dir/flags.make

CMakeFiles/imageOpencv.dir/image_open.cpp.o: CMakeFiles/imageOpencv.dir/flags.make
CMakeFiles/imageOpencv.dir/image_open.cpp.o: image_open.cpp
CMakeFiles/imageOpencv.dir/image_open.cpp.o: CMakeFiles/imageOpencv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nahye/coding/opencv/imageOpencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imageOpencv.dir/image_open.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imageOpencv.dir/image_open.cpp.o -MF CMakeFiles/imageOpencv.dir/image_open.cpp.o.d -o CMakeFiles/imageOpencv.dir/image_open.cpp.o -c /home/nahye/coding/opencv/imageOpencv/image_open.cpp

CMakeFiles/imageOpencv.dir/image_open.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imageOpencv.dir/image_open.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nahye/coding/opencv/imageOpencv/image_open.cpp > CMakeFiles/imageOpencv.dir/image_open.cpp.i

CMakeFiles/imageOpencv.dir/image_open.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imageOpencv.dir/image_open.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nahye/coding/opencv/imageOpencv/image_open.cpp -o CMakeFiles/imageOpencv.dir/image_open.cpp.s

# Object files for target imageOpencv
imageOpencv_OBJECTS = \
"CMakeFiles/imageOpencv.dir/image_open.cpp.o"

# External object files for target imageOpencv
imageOpencv_EXTERNAL_OBJECTS =

imageOpencv: CMakeFiles/imageOpencv.dir/image_open.cpp.o
imageOpencv: CMakeFiles/imageOpencv.dir/build.make
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_face.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_text.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_video.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.3.2.0
imageOpencv: /usr/lib/x86_64-linux-gnu/libopencv_core.so.3.2.0
imageOpencv: CMakeFiles/imageOpencv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nahye/coding/opencv/imageOpencv/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imageOpencv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imageOpencv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imageOpencv.dir/build: imageOpencv
.PHONY : CMakeFiles/imageOpencv.dir/build

CMakeFiles/imageOpencv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imageOpencv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imageOpencv.dir/clean

CMakeFiles/imageOpencv.dir/depend:
	cd /home/nahye/coding/opencv/imageOpencv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nahye/coding/opencv/imageOpencv /home/nahye/coding/opencv/imageOpencv /home/nahye/coding/opencv/imageOpencv /home/nahye/coding/opencv/imageOpencv /home/nahye/coding/opencv/imageOpencv/CMakeFiles/imageOpencv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imageOpencv.dir/depend

