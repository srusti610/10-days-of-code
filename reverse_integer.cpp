#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elments in reverse order\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
