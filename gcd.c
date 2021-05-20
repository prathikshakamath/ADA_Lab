#include<stdio.h>
#include<math.h>
int gcd(int m,int n)
{
    if(n==0) return m;
    if(m<n) return gcd(n,m);
    else
    return gcd(n,m%n);
}
int main()
{
    int m, n, res;
    printf("Enter value of m and n\n");
    scanf("%d%d",&m,&n);
    res=gcd(m,n);
    printf("gcd(%d,%d)=%d\n",m,n,res);
}
