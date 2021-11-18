#include<iostream>
using namespace std;
int main()
{
    int n,i,c;
    int count=0;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"Enter the digit\n";
    cin>>i;
    while(n>0)
    {
        c=n%10;
        if(c==i)
        count++;
        n=n/10;
    }
    if(count>0)
    {
        cout<<"The frequency of the digit is\n"<<count;
        
    }
    else{
        cout<<"Number doesnt exists";
    }
}
