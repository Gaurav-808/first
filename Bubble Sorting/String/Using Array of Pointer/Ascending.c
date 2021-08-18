//Arranging Sring in 2-D char array in Ascending Order
#include<stdio.h>
#define ROWS 10

int strcmp(char str1[],char str2[])
{
	for(;*str1!='\0' || *str2!='\0';str1++,str2++)
	{
	if(*str1>*str2)
		return *str1-*str2;
	else if(*str2>*str1)
		return *str1-*str2;
	}
	return 0;
}
int main()
{
    int i,j;
    char* temp;
    char* Names[ROWS]={"Gaurav Sharma","Archimedes","Nicola Tesla","Zedge","Kernel Masters"};
printf("Entered Names Are :\n");
for(i=0;i<ROWS;i++) 
{
	if(Names[i]!=NULL)
 printf("%s\n",Names[i]);
}
for(i=1;i<=ROWS-1;i++)
{
    for(j=0;j<ROWS-i;j++)
    {
			if(Names[j]!=NULL && Names[j+1]!=NULL)
			{
if(strcmp(Names[j],Names[j+1])>0)
{
temp=Names[j];
Names[j]=Names[j+1];
Names[j+1]=temp;
}}}}
printf("\nEntered Names After Sorting is :\n");
for(i=0;i<ROWS;i++) 
{
 printf("%s\n",Names[i]);
}
    return 0;
}
