/*THINGS TO REMEMBER: Take m = low + (high - low)/2;
low= 0,high = n-1 always take in ascending order*/
#include<iostream>
using namespace std;
int search(int arr[],int low,int high,int x){
    int m;
    while(low<=high){
     m = low + (high - low)/2;
     if(arr[m] == x) return m;

     if(x < arr[m]) high = m-1;
     else low = m + 1;

    }
    //if we reach here element was not found
    return -1;
}
int main()
{
    int n,arr[100],x;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i =0;i < n; i++)
      cin>>arr[i];
    cout<<"Enter number to the found: ";
    cin>>x;
    int index = search(arr,0,n - 1,x);
    if(index == -1)
      cout<<"Not found";
    else 
       cout<<"Found at index:"<<index;

 return 0;
}