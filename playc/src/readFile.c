#include    <stdio.h>

/*
 *
 * This is a program that plays around with C. It demonstrates functions, prototypes,
 * reading an input file, creating an ADT (struct), #define, command-line arguemtns,
 * and passing and using pointer arguments.
 *
 * Author: Cathy Bishop
 *
 */

int main(int argc, char *argv[])
{
    FILE *inf;
    char *filename = "test1";
    char line[100];


    if (argc > 1)
        filename = argv[1];

    fprintf(stdout, "In main, argc is %d\n", argc);
    fprintf(stdout, "File %s\n", filename);

    inf = fopen(filename, "r");

    if (inf == NULL)
        fprintf(stdout, "FAILED  to open file %s\n", filename);
    else
    {
        fprintf(stdout, "Opened file %s\n", filename);
        while(fgets(line, 100, inf) != NULL)
            fprintf(stdout, "Read line %s\n", line);
    }

    fclose(inf);


    return(0);
}
