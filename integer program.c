#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,row,n;
printf("enter the row number of the pyramids:");
scanf("%d",&n);
k=n;
for(row=1;row<=n;row++)
{for(j=1;j<k;j++)
printf(" ");
k--;
for(i=1;i<=2*row-1;i++)
printf("*");
printf("\n");

}
return 0;
}
