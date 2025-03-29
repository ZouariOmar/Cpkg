#!/usr/bin/bash

if [ "$#" -eq 0 ]; then
  echo "Error: No arguments provided!"
  echo "Usage: ./build_library.sh <LIB_NAME>"
  exit 1
fi

# Set variables for paths (Modify these as needed)
LIB_NAME=$1     # Name of the library (without prefix "lib" and extension ".so")
SRC_DIR="src"   # Source directory containing .cpp file
BUILD_DIR="src" # Build directory for object files
LIB_DIR="lib"   # Output directory for the .so file

# Compile the .cpp file into an object file with position-independent code (-fPIC)
g++ -c -fPIC "$SRC_DIR/$LIB_NAME.cpp" -o "$BUILD_DIR/$LIB_NAME.o"

# Create the shared library (.so)
g++ -shared -o "$LIB_DIR/lib$LIB_NAME.so" "$BUILD_DIR/$LIB_NAME.o"

# Rm the generated .o file
rm "$SRC_DIR/$LIB_NAME.o"

# Print success message
echo "Shared library created: $LIB_DIR/lib$LIB_NAME.so"
