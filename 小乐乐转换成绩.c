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

小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’。如果输入的成绩不在0-100之间，输出’F’。
