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
ll dp[10000];
int iter(int& n, vector<int>& coins)
{
	sort(all(coins));
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=0;i<coins.size();i++)
		for(int j = coins[i];j<=n;j++)
			dp[j] += dp[j - coins[i]];
	return dp[n];
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
	int n,k;
	cin>>n>>k;
	vector<int > coins(k);
	for(int i=0;i<k;i++)
		cin>>coins[i];
	int res = iter(n,coins);
	cout<<res<<"\n";
	return 0;
}

// Input:

// 5 4
// 1 2 3 5

// Output:

// 6