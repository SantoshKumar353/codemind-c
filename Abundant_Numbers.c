#include<stdio.h>
int main()
{
    int n,s=0,c;
    scanf("%d",&n);
    for(c=1;c<n;c++)
    {
        if(n%c==0)
        {
            s=s+c;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}