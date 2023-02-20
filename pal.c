#include<stdio.h>  
palindrom()    
{    
int n,r,sum=0,temp;    
printf("\n\nenter the number to check palindrome or not=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number\n\n ");    
else    
printf("not palindrome\n\n");   
// return 0;  
}   
