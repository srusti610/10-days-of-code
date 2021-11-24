#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,n,i,j;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        cout<<"\t"<<b;

        
    
    for(j=1;j<i;j++)
    {
        c=a+b;
        cout<<"\t"<<c;
        a=b;
        b=c;
    }
    cout<<"\n";
}
return 0;
}
