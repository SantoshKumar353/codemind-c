#include<stdio.h>
int main()
{
    int a,b,c,capacity,v;
    scanf("%d%d%d",&a,&b,&c);
    capacity=2*a*b*c*512;
    v=capacity/1024;
    printf("%dKB",v);
}