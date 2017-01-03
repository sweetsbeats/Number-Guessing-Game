
CC = g++
#OBJS specifies files to compile
OBJS = main.cpp math.cpp
#OBJS_NAME is the name of the exe
OBJ_NAME = main.exe
#INCLUDE_PATHS specifies header path
INCLUDE_PATHS = #-I C:\Users\sweetsbeats\CPP_stuff\Includes
#LIBRARY_PATHS specifies the additional lib paths
LIBRARY_PATHS =
#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = #-w -Wl,-subsystem,windows
#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS =

#this is the target that will compile our exe
all: $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
