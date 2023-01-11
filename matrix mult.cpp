#include<stdio.h>
int main()
{
int m,n,c,d,k,first[10][10],second[10][10],mul[10][10];

printf("Enter the row and coloum:");
scanf("%d %d",&m,&n);

printf("Enter the first matrix:");

for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
}
printf("Enter the second matrix:");

for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
scanf("%d",&second[c][d]);
}
printf("mul of the entered matrix\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
mul[c][d]=0;
for(k=0;k<n;k++)
{
mul[c][d]+= first[c][k] * second [k][c];
}
}
}
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",mul[c][d]);
}
printf("\n");
}
return 0;
}
