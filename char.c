#include<stdio.h>

#define MAX 10

void main()

{ char a[MAX]= {'a','d','f'};
   
printf("size of char:  %lu \n",sizeof(char));
   
printf("size of array a:  %lu \n",sizeof(a));
   
printf("the characters are:\n");
   
for(int i=0;i<MAX;i++)
{
       
printf("%d.%c\n",i+1,a[i]);
   
}

}