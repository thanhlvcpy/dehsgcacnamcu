#include <bits/stdc++.h>

using namespace std;
int n,b,a[10000],c[10000],backt[10000],vitri[10000],tong=0,tonggiatri=-1,dem;
int tinhtonggiatri()
{
	int ti=0;
	for(int i=1;i<=n;i++)
		if(backt[i]==1)
			ti=ti+c[i];
	return ti;
}
void capnhat()
{
	int d=0;
	for(int i=1;i<=n;i++)
		if(backt[i]==1)
		{
			d++;
			vitri[d]=i;
		}
	dem=d;
}
int tongtaii(int k)
{
	int tong1=0;
	for(int i=1;i<=k;i++)
		if(backt[i]==1)
		tong1=tong1+a[i];
	return tong1;
}
void backtrack(int t)
{
	for(int i=0;i<=1;i++)
		{
			backt[t]=i;
			if(t==n&&tonggiatri<=tinhtonggiatri()&&tongtaii(t)<=b)
				{

					tonggiatri=tinhtonggiatri();
					capnhat();
				}
			else if(t<n&&tongtaii(t)<=b)
					backtrack(t+1);
		}
}
int main()
{
	freopen("KNAPSACK.inp","r",stdin);
	freopen("KNAPSACK.out","w",stdout);
	memset(backt,0,sizeof(backt));
    cin>>n>>b;
    for(int i=1;i<=n;i++)
		cin>>a[i];
    for(int i=1;i<=n;i++)
		cin>>c[i];
	for(int i=1;i<=n;i++)
		cin>>c[i];
	backtrack(1);
	cout<<tonggiatri<<endl;
	for(int i=1;i<=dem;i++)
		cout<<vitri[i]<<" ";
	return 0;
}
