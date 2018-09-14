#include <bits/stdc++.h>

using namespace std;

int main() 
{
    unsigned long long int n,temp=0,i;
    cin>>n;
    i=n;
    if(n%2==0)
    {
        while(i>2)
        {
            i=i/2;
            if(i%2!=0)
            {
                cout<<"NIE"<<endl;
                temp=1;
                break;
            }
        }
    }
    else
    {
    	cout<<"NIE"<<endl;
    	temp=1;
    }
    if(temp==0)
    cout<<"TAK"<<endl;
    
}