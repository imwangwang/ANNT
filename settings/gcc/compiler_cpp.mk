# G++ compiler common settings

TARGET = gcc

# compiler
COMPILER = g++
# lib archiver
ARCHIVER = ar
# base C++ flags
CFLAGS = -std=c++0x -Wall

# buid type
BUILD_TYPE = release

# compiler options
ifneq "$(findstring debug, $(MAKECMDGOALS))" ""
# "Debug" build - no optimization, add debugging symbols 
CFLAGS += -O0 -g
BUILD_TYPE = debug
else 
# "Release" build - optimization, no debugging symbols 
CFLAGS += -O3 -s -DNDEBUG
endif
