#include<stdio.h>
int main()
{
int n,rev=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
{
if(n==rev)
{
printf("the number is palindrome");
}
else
{
printf("number is not palindrome");
}
reyurn 0;
}
}
}
