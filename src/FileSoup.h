#ifndef FILESOUP
#define FILESOUP

#include <cstdio>

enum FILESOUP_ERRORS{
	FILE_NOT_FOUND,
	READ_ACCESS_DENIED,
	OPEN_ACCESS_DENIED,
	WRITE_ACCESS_DENIED,
};

typedef struct {
	void* location;
}filesoup;

//Standard file handling.
filesoup* OpenFileSoup(char* filename);

filesoup* ReadFileSoup(char* filename);

//Reads the contents of a file and passes a character array of the contents.
//Closes and opens the file when the function returns.
char* CopyFileSoup(char* filename);

#endif

#ifdef FILESOUP_IMPLEMENTED
char* CopyFileSoup(char* filename){
	//Open file
	//Copy file contents
	//Return file contents.
}

#endif
