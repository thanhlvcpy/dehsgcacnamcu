#include <bits/stdc++.h>

using namespace std;
int a[1000000],b[500000],soptmanga,dem=0;;
void print1(int d)
{
	for(int i=1;i<=d;i++)
		cout<<b[i]<<" ";
	cout<<endl;
}
int ucln(int a, int b)
{
	if(a==0 || b==0)
		return 1;
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void khoitaoa(int n)
{
		int d=0;
		for(int i=1;i<=n/2;i++)
			if(n%i==0)
			{
				d++;
				a[d]=i;
			}
		a[d+1]=n;
		soptmanga=d+1;
}
void backtrack(int t,int j,int k)
{
	for(int i=j;i<=soptmanga;i++)
	{
		if(ucln(a[i],b[t-1])==1&&(a[i]>b[t-1]))	//&&a[i]>b[t-1]
		{
			b[t]=a[i];
			if(t==k)
			{
			//	print1(k);
				dem++;
			}
			else
				backtrack(t+1,j+1,k);
		}
	}
}
int main()
{
	freopen("matma.inp","r",stdin);
	freopen("MATMA.out","w",stdout);
    int n,k;
    b[0]=0;
    cin>>n>>k;
    khoitaoa(n);
    backtrack(1,1,k);
    cout<<dem<<" ";
    //cout<<ucln(0,5);
    return 0;
}
