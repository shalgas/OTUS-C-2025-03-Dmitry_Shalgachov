#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "decoding.h"

int main(int argc, char* argv[])
{
    if(argc != 4)
    {
        printf("Usage: %s [input_file], [source_incoding], [output_file]\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Проверить кодировку argv[2] на вхождение в список

    FILE* file = fopen(argv[1], "r");
    if(!file)
    {
        printf("Failed to open [input_file] <%s> for reading!\n", argv[1]);
        return EXIT_FAILURE;
    }

    FILE* file = fopen(argv[3], "w");
    if(!file)
    {
        printf("Failed to open [output_file] <%s> for writing!\n", argv[3]);
        return EXIT_FAILURE;
    }

    // TODO: ваш код

    return EXIT_SUCCESS;
}