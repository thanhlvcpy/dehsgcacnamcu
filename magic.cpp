#include <bits/stdc++.h>

using namespace std;
int n,n1;
int hangsomaphuong;
int t[400];
int t2[400][400];
bool kt[400];
bool kiemtra()
{
    int kt1=n1;
    j=1;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        a[j][k]
        if(i=kt1)
        {

        }
    }

}
void backtrack(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(k>n)
            if(kiemtra()==true)
            {

            }
        if(kt[i]==true)
        {
            t[k]=i;
            kt[i]=false;
            backtrack(k+1);
            kt[i]=true;
        }
    }

}
int main()
{
    freopem("magic.inp","r",stdin);
    freopem("magic.out","w",stdout);
    memset(kt,true,sizeof(kt));
    cin>>n;
    n1=n;
    n=n*n;
    hangsomaphuong=(n*(n*n+1))/2;
    backtrack(1,n);
    return 0;
}
