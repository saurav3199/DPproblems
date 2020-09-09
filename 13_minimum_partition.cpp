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
int totalsum = 0;
int rec(int ind,vector<int >& a, int sumsofar)        // For direct recursive approach
{
	if(ind<0)
		return abs(totalsum - 2*sumsofar);
	return min(rec( ind- 1,a,sumsofar) , rec(ind-1,a,sumsofar+a[ind]));
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
	vector<int > arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		totalsum+=arr[i];
	}
	// int ans = rec(n-1,arr,0);
	vector<vector<bool> > dp(n+1,vector<bool> (totalsum,false));
	for(int i=0;i<totalsum;i++)
		dp[0][i] = true;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=totalsum;j++)
		{
			dp[i][j] = dp[i-1][j];
			if(arr[i-1]<j)
				dp[i][j] = dp[i][j] | dp[i][j-arr[i-1]];
		}
	}
	int ans = INT_MAX;
	for(int j=totalsum/2;j<=totalsum;j++)
	{
		if(dp[n][j])
		{
			ans = totalsum-2*j;
			break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}

// Input:

// 6
// 3 1 4 2 2 1

// Output:

// 1