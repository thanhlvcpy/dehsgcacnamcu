#include <bits/stdc++.h>
using namespace std;
void xuly(int test)
{
	string s;
	for(int i=1;i<=test;i++)
	{
		int p;
		cin>>p;
		if(p==0)
		{
			string r;
			cin>>r;
			s=s+r;
		}
		if(p>0)
		{
			int r;
			cin>>r;
			int k = s.length()-p;
			s=s+s.substr(k,r);
		}
	}
	cout<<s;
}

int main()
{
    freopen("mahoadecode.inp","r",stdin);
    freopen("mahoadecode.out","w",stdout);
	int test;
	string s;
	cin >>test;
	xuly(test);
    return 0;
}
