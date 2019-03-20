#include <bits/stdc++.h>

using namespace std;
int d[1001],v[1001],id[1001];
bool cmp(int a, int b)
{
	if(v[a]<v[b])
		return true;
	else
		return false;
}
bool cmt(int a, int b)
{
	if(a>b)
		return true;
	else
		return false;
}
int main()
{
	freopen("CHONXE.inp","r",stdin);
	freopen("CHONXE.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>d[i];
	for(int i=1;i<=m;i++)
		cin>>v[i];
	for(int i=1;i<=n;i++)
		id[i]=i;
	sort(id+1,id+n+1,cmp);
	sort(v+1,v+m+1);
	sort(d+1,d+n+1,cmt);
	int t=0;
	for(int i=1;i<=n;i++)
		t=t+d[i]*v[i];
	cout<<t<<endl;
	for(int i=1;i<=n;i++)
		cout<<id[i]<<" ";
    return 0;
}
