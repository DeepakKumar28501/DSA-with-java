#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], ch;

    printf("Enter the filename to copy: ");
    scanf("%s", filename);

    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Unable to open file %s\n", filename);
        exit(1);
    }

    fptr2 = fopen("copy.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Unable to create file.\n");
        exit(1);
    }

    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch, fptr2);
    }

    printf("File copied successfully.\n");

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}

