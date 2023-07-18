#include<stdio.h>
int main(){
 int smallest;
 int x , y;
 printf("enter a number");
 scanf("%d",&x);
 printf("enter a number");
 scanf("%d", &y); 
 printf("smallest number:%d", x>y ? x:y);//? this ques mrk called conditional operator
 return 0;
}
 //char ch;
   //printf("Enter chracter");
  //scanf("%c" ,&ch);
   //if (ch>='0' && ch<='9')
   //printf("It is digit");
   //else
   //printf("not a digit");
   //return 0;
 //int a , b ,c;
  // float avg;
  // printf("enter a number");
  // scanf("%d", &a);
  // printf("enter a number");
  // scanf("%d",&b);
//printf("enter a number");
//scanf("%d",&c);
//avg = a+b+c/3.0;
//p//rintf("Average of nmber:%f",avg);