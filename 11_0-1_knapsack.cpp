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
int rec(int w , vector<int>& weight , vector<int>& values)
{
	int n = weight.size();
	vector<vector<int> > dp(n+1,vector<int> (w+1,0));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(weight[i-1] <= j)
				dp[i][j] = max( dp[i-1][j] , values[i-1] + dp[i-1][j-weight[i-1]]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][w];
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
	int n;
	cin>>n;
	vector<int> weight(n), values(n);
	for(int i=0;i<n;i++)
		cin>>weight[i];
	for(int i=0;i<n;i++)
		cin>>values[i];
	int w;
	cin>>w;
	int ans = rec(w ,weight , values);
	cout<<ans<<"\n";
	return 0;
}

// Input:

// 3
// 50 70 60
// 60 100 120
// 50

// Output:

// 60