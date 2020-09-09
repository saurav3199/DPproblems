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

//insert
//remove
//replace
int dp[1000][1000];
int rec(int x,int y ,string& s1, string& s2)
{
	if(x<0 && y<0)
		return 0;
	else if(x<0)
		return 1 + rec(x,y-1,s1,s2);
	else if(y<0)
		return 1 + rec(x-1,y,s1,s2);
	int& ans =  dp[x][y];
	if(ans != -1)
		return ans;
	if(s1[x] == s2[y])
		return ans = rec(x-1,y-1,s1,s2);
	else
		return ans = 1 + min( rec(x-1,y-1,s1,s2) , min(rec(x,y-1,s1,s2) , rec(x-1,y,s1,s2)));
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
	string s1,s2;
	cin>>s1>>s2;
	int n = s1.size(),m = s2.size();
	memset(dp,-1,sizeof(dp));
	int ans = rec(n-1,m-1,s1,s2);
	cout<<ans<<"\n";
	return 0;
}

// Input:

// sunday
// saturday

// Output:

// 3