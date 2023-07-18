#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr = fopen("text.cl","r");
    char myString[100];

// Read the content and store it inside myString
fgets(myString, 100, fptr);

// Print the file content
printf("%s", myString);
    fclose(fptr);
    
    
    // int num, index = 0;
    // printf("Enter a number\n");
    // scanf("%d", &num);
    // do
    // {
    //     printf("%d\n", index + 1);
    //     index = index + 1;
    // } while (index < num);

    return 0;
}