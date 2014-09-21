#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
using namespace std;
long long int n;
int main(int argc, const char * argv[])
{
    int i,j;
    cin>>n;

    if(n<4)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    if(n%2==0)
    {
        cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
        for(i=5;i<n;i+=2)
        {
            cout<<i+1<<" - "<<i<<" = 1"<<endl;
            cout<<"24 * 1 = 24"<<endl;
        }
    }
    else
    {
        cout<<"5 * 4 = 20"<<endl;
        cout<<"20 + 2 = 22"<<endl;
        cout<<"22 + 3 = 25"<<endl;
        cout<<"25 - 1 = 24"<<endl;
        for(i=6;i<n;i+=2)
        {
            cout<<i+1<<" - "<<i<<" = 1"<<endl;
            cout<<"24 * 1 = 24"<<endl;
        }
    }
    return 0;
}
