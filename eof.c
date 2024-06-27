#include <stdio.h>
int main()
{
    FILE *pri;
    char string[1000];
    pri = fopen("continue.c", "r");
    while (fscanf(pri, "%s", string) != EOF)
    {
        printf("%s ", string);
    }
    fclose(pri);
    return 0;
}