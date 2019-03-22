#include <bits/stdc++.h>
;
using namespace std;
char t[100000];
void print1(int n)
{
    for(int i=1;i<=n;i++)
        cout<<t[i]<<" ";
    cout<<endl;
}
void backtrack(int k,int n)
{

    for(int i='A';i<='B';i++)
    {
        t[k]=char(i);
        if(t[k]=='B'&&t[k-1]=='B')
            continue;
        if(k==n)
            print1(n);
        else
            backtrack(k+1,n);
    }

}
int main()
{
   // freopen("hoanvi.inp","r",stdin);
   // freopen("hoanvi.out","w",stdout);
    int n;
    cin>>n;
    backtrack(1,n);
    return 0;
}
