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

int solve(vector<vector<int> >&a)
{
	int n = a.size() - 1, m = a[0].size() - 1;
	vector<vector<int > > dp(n + 2,vector<int> (m + 2,0));
	for(int j=m;j>=1;j--)
		for(int i=1;i<=n;i++)
			dp[i][j] = a[i][j] + max(dp[i][j+1] , max(dp[i-1][j+1],dp[i+1][j+1]));
	int mx = 0;
	for(int i=0;i<=n;i++)
		mx= max(mx, dp[i][1]);
	return mx;
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
	int n,m;
	cin>>n>>m;
	vector<vector<int > > a(n+1,vector<int>(m+1));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	}
	int ans = solve(a);
	cout<<ans<<"\n";
	return 0;
}


// Input:

// 4 4
// 1 3 1 5 
// 2 2 4 1 
// 5 0 2 3 
// 0 6 1 2 

// Output:

// 16