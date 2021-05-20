#include <stdio.h>
#include <stdlib.h>

int a[20][20], q[20], reach[20], n, i, j, f = 0, r = -1, count = 0;

void dfs(int v)
{
    int k;
    reach[v] = 1;
    for (k = 1; k <= n; k++)
        if (a[v][k] && !reach[k])
        {
            printf("\n %d->%d", v, k);
            dfs(k);
        }
}

int main()
{
    int v, ch;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        reach[i] = 0;
        for (j = 1; j <= n; j++)
            a[i][j] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
    }
    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("The graph is-\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    dfs(1);
    printf("\n");
    for (int k = 1; k <= n; k++)
    {
        if (reach[k])
            count++;
    }
    if (count == n)
    {
        printf("Graph is connected\n");
        // printf("Order: %d", n);
    }
    else
        printf("Graph is not connected\n");
}