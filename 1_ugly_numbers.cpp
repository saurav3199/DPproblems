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
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/saura/Desktop/cp/input.txt", "r", stdin);
	freopen("C:/Users/saura/Desktop/cp/output.txt", "w", stdout);
	#endif
	ll n;
	cin>>n;
	vector<ll > pos = {0,0,0};
	vector<ll > dp(n+1,0);
	dp[0] = 1;
	for(int i=1;i<=n;i++)
	{
		dp[i] = min(dp[pos[0]]*2 , min(dp[pos[1]]*3 , dp[pos[2]]*5));
		if(dp[i] == dp[pos[0]]*2)
			pos[0]++;
		if(dp[i] == dp[pos[1]]*3)
			pos[1]++;
		if(dp[i] == dp[pos[2]]*5)
			pos[2]++;
	}
	cout<<dp[n-1]<<"\n";
	return 0;
}

// Input: 

// 1000

// Output:

// 51200000