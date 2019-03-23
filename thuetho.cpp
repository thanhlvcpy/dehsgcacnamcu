#include <bits/stdc++.h>

using namespace std;
int c[101][101],a[10001],b[10001],n,minn,tong=0,tmin;
bool kt[10001];
void capnhat(int minn)
{
	for(int i=1;i<=n;i++)
		b[i]=a[i];	// cap nhat cau hinh toi uu moi
	tmin=minn;	// cap nhat chi phi cua phuong an
}
void printl()
{
	for(int i=1;i<=n;i++)
		cout<<b[i]<<" ";
}
void backtrack(int t)
{
	if(t>n&&minn>tong)
		{
			minn=tong;
			capnhat(minn);
		}
	for(int i=1;i<=n;i++)
	{
		if(minn>=tong&& kt[i]==true)// dat nhanh can
			{
				kt[i]=false;
				a[t]=i;
				tong = tong+c[t][a[t]];
				backtrack(t+1);
				tong=tong-c[t][a[t]];
				kt[i]=true;
			}
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
	cout<<tmin<<endl;
	printl();
    return 0;
}
