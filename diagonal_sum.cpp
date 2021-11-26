#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[20][20],i,j,d1=0,d2=0,diff,n;
    cout<<"Enter the size of the  matrix"<<endl;
    cin>>n;
    cout<<"Enter the elements of the matrix"<<endl;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
    if(i==j)
    
        d1=d1+arr[i][j];

    if(i==n-j-1)
        d2=d2+arr[i][j];    


    }
    diff=abs(d1-d2);
    cout<<diff;
    return 0;

}
