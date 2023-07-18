#include <stdio.h>

int main()
{
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\n Enter your age",i);
        scanf("%d", &age);
        if (age >19){
            break;
        }
    }
    int n , sum = 0 ;
    do{
        printf('Enter a numbber: ')
        scanf("%i",&n);
        sum +=n;
    }
    while (n ! = 0);
    printf("Sum is = %d",sum)

























    // printf("Hello World\n");
    // int i, j=0;
    // //for(i=0 ; i<5 ; )
    // for (i = 0; i<=12; i--);
    // {
    //    printf("%d %d\n", i, j);
    //    i++;j++;
    // }
    
    return 0;
}