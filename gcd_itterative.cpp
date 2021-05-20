#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    if (m < n)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    while (n != 0)
    {
        int temp = m;
        m = n;
        n = temp % n;
    }
    return m;
}

int main()
{
    int m, n, res;
    printf("Enter value of m and n\n");
    scanf("%d%d", &m, &n);
    res = gcd(m, n);
    printf("gcd(%d,%d)=%d\n", m, n, res);
}
