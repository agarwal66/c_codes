// //again again
// #include <stdio.h>
// int main(){
//     int n=10;
//     A:
//     printf("%d\t",n);
//     n = n - 1;
//     //if (n>0)//{
//         if (n)
//     goto A;
//     //}
//     return 0;
// }
#include <stdio.h>
int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if(x%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("%d is a even",x);// jump h to even ke baad ek he bacha odd to islie odd me bs odd aara or even me dono aare h
    return 0;
    odd:
    printf("%d is a odd",x);
}