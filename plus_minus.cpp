#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int a[20],n,i;
    int pos_count=0,neg_count=0,zero_count=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
     for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
        pos_count++;

    }
    else if(a[i]<0)
    {
        neg_count++;
    }
    else if(a[i]==0)
    {
        zero_count++;
    }
    
    }    
    cout<<"pos_count"<<pos_count<<endl;
    cout<<"neg_count"<<neg_count<<endl;
    cout<<"Zero_count"<<zero_count<<endl;
    
    /*cout<<setprecision(6)<<(float)pos_count/n<<endl;
    cout<<setprecision(6)<<(float)neg_count/n<<endl;
    cout<<setprecision(6)<<(float)zero_count/n<<endl;*/
    printf("%.6f\n",(float)pos_count/n);
    printf("%.6f\n",(float)pos_count/n);
    printf("%.6f\n",(float)zero_count/n);


return 0;


    

}
