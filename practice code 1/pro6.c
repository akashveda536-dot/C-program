#include<stdio.h>
int main()
{
 int mark =50;
 printf("Enter the mark:");
 scanf("%d",&mark);
 if(mark >=90)
 {
  printf("you have been passed with distinction");
 }
 else if(mark >=50)
 {
  printf("you have been passed");
 }
 else
 {
  printf("you have been failed");
 }
return 0;
}
