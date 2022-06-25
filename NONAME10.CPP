#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int ar[]={5,4,2,3,6,8};
int grt=0;
int i;
for(i=0;i<6;i++)
{
if(grt<ar[i])
{
grt=ar[i];
}
}
printf("%d",grt);
getch();
}