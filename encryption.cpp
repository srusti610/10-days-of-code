#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
              char s[90];
              int r,c,i,j;
              cin.getline(s,90);
              int l=strlen(s);   
              r=(int)sqrt(l);
              if((r*r)==l)
               c=r;
              else if(l<=(r*(r+1)))
               c=r+1;
              else
              {
                  r=r+1;
                  c=r;
              }
              for(i=0;i<c;i++)
              {
                                for(j=i;j<l;j=j+c)
                                    cout<<s[j];
                                cout<<" ";
              }
              cout<<"\n";    
              return 0;
}
