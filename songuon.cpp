#include <bits/stdc++.h>

using namespace std;
string phepgiam(string s1,string tongcs)
{
	string kq;
	while(tongcs.length()<s1.length())
		tongcs="0"+tongcs;
	int intermediate=0;
	for(int i=s1.length()-1;i>=0;i--)
	{
		int k1= int(s1[i])-48-intermediate,k2=int(tongcs[i])-48;
		if(k1<k2)
			k1=k1+10;
		int t=k1-k2;
		intermediate = k1/10;
		kq=to_string(t)+kq;
	}
	if(kq[0]=='0')
		kq.erase(0,1);
	return kq;
}
string pheptang(string s, string s1)
{
	string kq;
	while(s1.length()<s.length())
		s1="0"+s1;
	int intermediate=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		int k1=int(s[i])-48,k2=int(s1[i]-48);
		int t=k1+k2+intermediate;
		intermediate=t/10;
		kq=to_string(t%10)+kq;
	}
	if(intermediate>0)
		kq=to_string(intermediate)+kq;
	return kq;
}
bool songuon(string s,string s2)
{
	string kq=s;
	for(int i=0;i<=s.length()-1;i++)
	{
		string s1;
		s1.append(1,s[i]);
		kq=pheptang(kq,s1);
	}
	if(kq==s2)
		return true;
	else
		return false;
}
int main()
{
	int test;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		string s;
		cin>>s;
		int k=9*s.length();
		string t= to_string(k);
		string s1=phepgiam(s,t);
		while(s1!=s)
		{
			s1 = pheptang(s1,"1");
			if(songuon(s1,s)==true)
				break;
		}
		if(s1==s)
			cout<<"0"<<endl;
		else
			cout<<s1<<endl;
	}
    return 0;
}
