#include<stdio.h>  
int main()    
{    
	int a=10, b=20;     
 	printf("\n\tSWAPPING OF TWO NUMBERS");
 	printf("\n\t********************************");
	printf("\n\tBefore swapping a=%d b=%d",a,b);      
	a=a+b;    
	b=a-b;   
	a=a-b;    
	printf("\n\n\tAfter swapping a=%d b=%d",a,b); 
	printf("\n\t********************************");   
	return 0;  
}   
