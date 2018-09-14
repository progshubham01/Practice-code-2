#include<bits/stdc++.h>
int main()
{
    long long int n;
    scanf("%lli",&n);
    while(n--)
    {
        unsigned long long int x,w,o=0,y;
        scanf("%llu",&x);
        y=x%11;
        if(y==1)
        printf("3\n");
        else if(y==2)
        printf("6\n");
        else if(y==3)
        printf("9\n");
        else if(y==4)
        printf("1\n");
        else if(y==5)
        printf("4\n");
        else if(y==6)
        printf("7\n");
        else if(y==7)
        printf("10\n");
        else if(y==8)
        printf("2\n");
        else if(y==9)
        printf("5\n");
        else if(y==10)
        printf("8\n");
        else 
        printf("0\n");
    }
    return 0;
}