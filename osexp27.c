#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main()
{
    char fn[10], pat[10], temp[200];
    FILE *fp;

    printf("\nEnter file name: ");
    scanf("%s", fn);

    printf("Enter the pattern: ");
    scanf("%s", pat);

    fp = fopen(fn, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(temp, sizeof(temp), fp) != NULL) {
        if (strcmp(temp, pat) != 0) {
            printf("%s", temp);
        }
    }

    fclose(fp);
    return 0;
}
