#include <bits/stdc++.h>

using namespace std;
int c[101][101],a[10001],n,minn,tong=0;
bool kt[10001];
void printl()
{
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void backtrack(int t)
{
	if(t>n)
		{
			minn=tong;
			tong=0;
			printl();
		}
	for(int i=1;i<=n;i++)
		if(minn>tong)	// dat nhanh can
			if(kt[i]==true)
			{
				kt[i]=false;
				a[t]=i;
				tong = tong+c[t][a[t]];
				//cout<<tong<<endl;
				cout<<minn<<endl;
				backtrack(t+1);
				kt[i]=true;
			}
}
int main()
{
	freopen("THUETHO.inp","r",stdin);
	freopen("THUETHO.out","w",stdout);
	memset(kt,true,sizeof(kt));
    cin>>n;
    for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>c[i][j];
			minn+=c[i][j];
		}
	//cout<<minn<<endl;
	backtrack(1);
    return 0;
}
