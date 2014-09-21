#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
using namespace std;
long long int n,m,k;
long long int x[2000],fx,t,ans=0;
int main(int argc, const char * argv[])
{
    int i,j;
    cin>>n>>m>>k;

    for(i=0;i<m;i++)
    {
        cin>>x[i];
    }

    cin>>fx;

    for(i=0;i<m;i++)
    {
        int y=0;
        t=x[i]^fx;
        for(j=0;j<21;j++)
        {
            if(t&(1<<j))
            {
                y++;
                if(y>k)
                    break;
            }
        }
        if(y<=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
