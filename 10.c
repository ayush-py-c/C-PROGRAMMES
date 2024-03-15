#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[20];
    char Title[20];
    printf("Enter the Name\n");
    scanf("%[^\n]s",name);
    printf("Enter the Title\n");
    scanf("%[^\n]s",Title);
    
    printf("%c.%c",name[0],Title[20]);
    return 0;
}