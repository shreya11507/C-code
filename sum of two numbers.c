#include<stdio.h>
int max(int n1,int n2,int n3)
{
int sum;
if(n1>n2 && n1>n3)
{
if(n2>n3)
    sum=n1+n2;
else
    sum=n1+n3;
}
else if(n2>n1 && n2>n3)
{
    if(n3>n1)
        sum=n2+n3;
    else
        sum=n2+n1;
}
else
{
    if(n2>n1)
        sum=n3+n2;
    else
        sum=n3+n1;
}
return sum;
}
int main()
{
int n1,n2,n3,sum;
printf("Enter three numbers:");
scanf("%d %d %d",&n1,&n2,&n3);
sum=max(n1,n2,n3);
printf("The sum of two maximum numbers is %d",sum );
return 0;
}
