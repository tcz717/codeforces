#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
#include <cstring>
using namespace std;
long long int n,m,k;
long long int p[5003];

long long int f[5003][5003];
long long int sum[5003];

long long int ans;

int main(int argc, const char * argv[])
{
    int i,j,t;
    memset(f,0,sizeof(f));
    cin>>n>>m>>k;

    sum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
        sum[i]=sum[i-1]+p[i];
        //cout<<sum[i]<<endl;
    }

    for(t=1;t<=k;t++)
    {
        for(i=1;i<=n;i++)
        {
            if(i>=m)
                f[i][t]=max(f[i-1][t],f[i-m][t-1]+sum[i]-sum[i-m]);
            else
                f[i][t]=f[i-1][t];
           // cout<<i<<" "<<t<<"="<<f[i][t]<<endl;
        }
    }

    ans=f[n][k];

    cout<<ans<<endl;
    return 0;
}
