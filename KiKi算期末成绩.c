#include<stdio.h>
int main()
{    int ach;
 scanf("%d",&ach);
 if(ach>=90&&ach<=100)
     printf("A");
 else if(ach>=80&&ach<=89)
     printf("B");
 else if(ach>=70&&ach<=79)
     printf("C");
 else if(ach>=60&&ach<=69)

     printf("D");
 else if(ach<=59&&ach>=0)
     printf("E");
 else
     printf("F");
 return 0;}
