#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int temp=0,final=0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  for (int i=0;s[i]!='\0';i++)
  {
    
    if(s[i] != ' ')
    {
      if(s[i]=='a'|| s[i]=='A'|| s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
      
       temp+=1;
       
    }
    else{
      if(temp%2==0 && temp>0)
      final+=2;
      else
      final+=temp%2;
      temp =0;
    }
   
  }
      if(temp%2==0 && temp>0) 
      final+=2;
      else
      final+=temp%2;

  cout<<final;
    return 0;

}
