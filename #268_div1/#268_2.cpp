#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<stdio.h>
#include <ctime>
using namespace std;
long long int n,a,b;
long long int p[10005];
long long int f[10005]={0};
long long int v[10005]={0};
long long int st[10005]={0};
long long int ba[10005]={0};
long long int s[10005]={0};
int main(int argc, const char * argv[])
{
    int i,j,k=0,m,f2=0;
    cin>>n>>a>>b;
    j=max(a,b);

    for(i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]>=j)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    m=n;

    while(m-- >0)
    {
        for(i=0;i<n;i++)
        {
            int flag=0;
            if(!v[i])
            {
                for(j=0;j<n;j++)
                {
                    if((p[i]+p[j]==a||p[i]+p[j]==b)&&!v[j]&&(p[j]!=p[st[k]]||flag!=1)&&i!=j)
                    {
                        flag++;
                        s[k]=i;
                        if(flag==1)
                        {
                            f[j]=f[i]=p[i]+p[j]==a?1:2;
                            st[k]=j;
                            v[i]=v[j]=1;
                        }
                        else if(flag==2)
                        {
                            f[j]=p[i]+p[j]==a?1:2;
                            ba[k]=j;
                            //cout<<p[i]<<" "<<p[j]<<" " <<flag<<endl;
                        //for(int t=0;t<n;t++)cout<<v[t]<<endl;
                            break;
                        }
                       // cout<<p[i]<<" "<<p[j]<<" " <<flag<<endl;
                       // for(int t=0;t<n;t++)cout<<v[t]<<endl;
                    }
                }
                switch(flag)
                {
                case 0:
                    k--;
                    if(k<0)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    else
                    {
                        f[st[k]]=0;
                        v[st[k]]=0;
                        v[ba[k]]=1;
                        f[s[k]]=f[ba[k]];
                    }
                    break;
                case 2:
                        k++;
                        //cout<<"k++"<<endl;
                    break;
                }
                break;
            }
        }
    }

    if(m==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<f[i]-1<<" ";
    }
    cout<<endl;

    return 0;
}
