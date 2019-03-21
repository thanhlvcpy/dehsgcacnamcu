#include <bits/stdc++.h>

using namespace std;
int findnum(char m)
{
	if(m=='I')
		return 1;
	if(m=='V')
		return 5;
	if(m=='X')
		return 10;
	if(m=='L')
		return 50;
	if(m=='C')
		return 100;
	if(m=='D')
		return 500;
	if(m=='M')
		return 1000;

}
int main()
{
    string romannumber;
    cin>>romannumber;
    int t=findnum(romannumber[0]);
    for(int i=1;i<=romannumber.length()-1;i++)
		if(findnum(romannumber[i])>=findnum(romannumber[i+1]))
			t=t+findnum(romannumber[i]);
		else
			t=t-findnum(romannumber[i]);
	cout<<t;
    return 0;
}
