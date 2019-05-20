#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "para.c"
#include "util.c"
#define true 1
#define ARGC_ERROR 1
#define TOOMANYFILES_ERROR 2
#define CONFLICTING_OUTPUT_OPTIONS 3

#define MAXSTRINGS 1024
#define MAXPARAS 4096

#define HASHLEN 200
char buf[BUFLEN];
char *strings1[MAXSTRINGS], *strings2[MAXSTRINGS];
int showversion = 0, showbrief = 0, ignorecase = 0, report_identical = 0, showsidebyside = 0;
int showleftcolumn = 0, showunified = 0, showcontext = 0, suppresscommon = 0, diffnormal = 0;
int count1 = 0, count2 = 0;

void version(void);
void todo_list(void);
void loadfiles(const char*, const char*);
void print_option(const char*, int);
void diff_output_conflict_error(void);
void setoption(const char*, const char*, const char*, int* value);
void showoptions(const char*, const char*);
void init_options_files(int, const char**);
