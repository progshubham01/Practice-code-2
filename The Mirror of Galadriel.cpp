#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,j=0,temp=0;
        char ar[11];
        string s;
        cin>>s;
        x=s.length();
       for(int i=x-1;i>=0;i--)
       {
          ar[j]=s[i];
          j++;
       }
       for(int i=0;i<x;i++)
       {
           if(ar[i]!=s[i])
           temp=1;
       }
      if(temp==0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
}
