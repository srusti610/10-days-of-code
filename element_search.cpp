#include<iostream>
using namespace std;
int main()
{
    int arr[20],key,i,j,n,found=-1;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    cout<<"Enter the array element to be searched"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    
        if(arr[i]==key)
        {
            found=i;
            break;
        }
        if(found==-1)
        
            cout<<"The element not found";
        
        else
            cout<<"Element is present in the index"<<" "<<found;
        
    
    return 0;
}
