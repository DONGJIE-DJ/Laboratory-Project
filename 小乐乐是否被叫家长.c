#include<stdio.h>
int main()
{
int Math,Chinese,English,average;
    scanf("%d %d %d",&Math,&Chinese,&English);
    average=(Math+Chinese+English)/3;
    if(average>=60)
    {printf("YES\n");}
    else
    {printf("NO\n");}
    return 0;
}
