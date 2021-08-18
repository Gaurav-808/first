//Arranging Sring in 2-D char array in Ascending Order
#include<stdio.h>
#define ROWS 5
#define COLUMN 20
 char* strcpy1(char* d, char* s)
{
    char* temp=d; //to store base address of destination string
    for(;*s!='\0';s++,d++)
    {
        *d=*s;
    }
    *d='\0';
    return temp;
}

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
    char temp[COLUMN];
    char String[ROWS][COLUMN];
    for(i=0;i<ROWS;i++) 
{
    printf("Enter Name Of Candidate %d between 1 to 19 characters : ",i+1);
     scanf(" %[^\n]s",&String[i]);
}
printf("\nEntered Names Are :\n");
for(i=0;i<ROWS;i++) 
{
 printf("%s\n",String[i]);
}
for(i=1;i<=ROWS-1;i++)
{
    for(j=0;j<ROWS-i;j++)
    {
if(strcmp(String[j],String[j+1])>0)
{
strcpy1(temp,String[j]);
strcpy1(String[j],String[j+1]);
strcpy1(String[j+1],temp);
}}
}
printf("\nEntered Names After Sorting is :\n");
for(i=0;i<ROWS;i++) 
{
 printf("%s\n",String[i]);
}
    return 0;
}
