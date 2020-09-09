#include <bits/stdc++.h>
using namespace std;
 
// in-short-use macros
 
#define all(c) (c).begin(),(c).end()
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define PI 3.14159265
#define sizes 1000010
 
//main function here
vector<vector<int> > dp(1000,vector<int> (1000,-1));
int rec(int x,int y, string& s, string& t)
{
	int n = s.size(), m = t.size();
	if(x<0 || y<0)
		return 0;
	int& res = dp[x][y];
	if(res != -1)
		return res; 
	if (s[x] == t[y])
		res = 1 + rec(x - 1 ,y - 1 ,s,t);
	else 
		res = max(rec(x,y-1,s,t) ,rec(x-1,y,s,t) );
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/saura/Desktop/cp/input.txt", "r", stdin);
	freopen("C:/Users/saura/Desktop/cp/output.txt", "w", stdout);
	#endif
	string s,t;
	cin>>s>>t;
	int n = s.size(), m = t.size();
	int res = rec(n-1,m-1,s,t);
	cout<<res<<"\n";
	return 0;
}

// Input:

// AGGTAB
// GXTXAYB

// Output:

// 4