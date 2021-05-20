#include <stdio.h>
void search(int a[], int l, int h, int key)
{
    int mid;
    if (l > h)
    {
        printf("Key not found\n");
        return;
    }
    mid = l + (h - l) / 2;
    if (a[mid] == key)
    {
        printf("Key found at location %d", mid);
        return;
    }
    else if (key > a[mid])
        search(a, mid + 1, h, key);
    else
        search(a, l, mid - 1, key);
}
int main()
{
    int key, n, i, ar[100];
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Enter key to search\n");
    scanf("%d", &key);
    search(ar, 0, n - 1, key);
}
