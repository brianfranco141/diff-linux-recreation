//  util.h

#ifndef util_h
#define util_h
#define BUFLEN 256

#include <stdio.h>

char* yesorno(int condition);
FILE* openfile(const char* filename, const char* openflags);
void printright(const char* right);
void printboth(const char* left_right);
void printleft(const char* left);
void printline(void);

#endif /* util_h */
