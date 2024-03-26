#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *fptr;
    char myString[100];

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        return EXIT_FAILURE;
    }

    fptr = fopen(argv[1], "r");

    if(fptr == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s", argv[1]);
        return EXIT_FAILURE;
    }

    while(fgets(myString, 100, fptr))
        printf("%s", myString);
  
    fclose(fptr);

    return EXIT_SUCCESS;
}