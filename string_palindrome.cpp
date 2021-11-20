#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    char word[20],temp[20];
    cout<<"Enter the string\n";
    cin.getline(word,20);
    strcpy(word,temp);
    strrev(word);
    if(strcmp(word,temp)==0)
    {
        cout<<"The string is palindrome\n";
    }
    else{
        cout<<"The string is not palindrome\n";
    }

    return 0;



}
