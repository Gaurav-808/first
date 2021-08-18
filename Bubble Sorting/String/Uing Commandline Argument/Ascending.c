//Arranging Strings in Assending Order Using Commandline Arguments
#include<stdio.h>

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
int main(int argc, char *argv[])
{ 
    int i,j;
    char* temp;
   printf("The String Before Were :\n");
    for(i=0;i<argc;i++) 
{
 printf("%s\n",argv[i]);
}
for(i=1;i<=argc-1;i++)
{
    for(j=1;j<argc-i;j++)
    {
if(strcmp(argv[j],argv[j+1])>0)
{
temp=argv[j];
argv[j]=argv[j+1];
argv[j+1]=temp;
}}
}
   printf("\nThe String after is :\n");

    for(i=0;i<argc;i++) 
{
 printf("%s\n",argv[i]);
}
    return 0;
}
