//Sorting Array In Decending Order
#include<stdio.h>
#define SIZE 10
int main()
{
int array[SIZE];
int i,j,swap,check;
printf("Enter 10 Integers of an Array :\n");
for(i=0;i<SIZE;i++)
scanf("%d",&array[i]);
printf("Initial Array Was :\n");
for(i=0;i<SIZE;i++)
printf("%d ",array[i]);
for(i=1;i<=(SIZE-1);i++)
{
for(j=0,check=0;j<(SIZE-i);j++)
{
    if(array[j]<array[j+1])
    {
        swap=array[j];
        array[j]=array[j+1];
        array[j+1]=swap;
        check++;
    }    
}
if(check==0)
break;
}
printf("\nAfter Sorting :\n");
for(i=0;i<SIZE;i++)
printf("%d ",array[i]);
}