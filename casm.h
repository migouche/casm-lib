// Created by Raúl Hernández and modified by migouche

#ifndef CASM_LIB_CASM_H
#define CASM_LIB_CASM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#define MINIZ_NO_STDIO
#define MINIZ_NO_DEFLATE_APIS
#define MINIZ_NO_ARCHIVE_WRITING_APIS
#define MINIZ_NO_ZLIB_APIS
#define MINIZ_NO_ZLIB_COMPATIBLE_NAMES

#include "thirdparty/miniz/miniz.h"

#include <keystone/keystone.h>


int compile(char* input_file, char* output_file);

#endif //CASM_LIB_CASM_H
