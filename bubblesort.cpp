#include <iostream>
using namespace std;

void sort(int a[], int n)
{
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++) //no of passes ex: if 5 elements i=(0,1,2,3)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) //no of comparisions changes from 4 to 1
        {
            if (a[j] > a[j + 1]) //compare two adjacent elements
            {
                swapped = true;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (!swapped)
            return;
    }
}

int main()
{
    int n, a[20];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int j = 0; j < n; j++)
        cin >> a[j];
    sort(a, n);
    cout << "After sorting :";
    for (int j = 0; j < n; j++)
        cout << a[j] << " ";
}