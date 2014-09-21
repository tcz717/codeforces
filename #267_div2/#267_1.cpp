#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
using namespace std;
int n;
int main(int argc, const char * argv[])
{
    int i,p,q,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if((q-p)>=2)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
