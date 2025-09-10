
#ifndef FILESOUP
#define FILESOUP

#include <cstdio>
typedef struct {
	void* location;
}soupfile;

//Standard file handling.
soupfile* OpenFileSoup(char* filename);

soupfile* ReadFileSoup(char* filename);

//Reads the contents of a file and passed a character buffer of the contents.
//Closes and opens the file when the function returns.
char* CopyFileSoup(char* filename);

#endif

#ifdef FILESOUP_IMPLEMENTATION

#endif
