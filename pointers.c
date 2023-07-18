#include <stdio.h>
int main(){
    printf("Learn about pointers\n");
    int a=76;
    int*ptra = &a;
    printf("The value of a is %p\n",ptra);  
    return 0;
}