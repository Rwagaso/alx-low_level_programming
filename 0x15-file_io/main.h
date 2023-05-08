#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t reads_textfiles(const char *filenames, size_t letters);
int creates_files(const char *filenames, char *text_contents);
int appends_text_to_files(const char *filenames, char *text_contents);

#endif

