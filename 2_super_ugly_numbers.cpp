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
	ll n,k;
	cin>>n>>k;
	vector<ll> primes(k),pos(k,0),dp(n+1,0);
	for(int i=0;i<k;i++)
		cin>>primes[i];
	dp[0] = 1;
	for(int i=1;i<=n;i++)
	{
		ll mi = dp[pos[0]]*primes[0];
		for(int j=1;j<k;j++)
		{
			mi = min(mi , dp[pos[j]]*primes[j]);
		}
		dp[i] = mi;
		for(int j= 0 ;j<k;j++)
			if(dp[i] == dp[pos[j]]*primes[j])
				pos[j]++;
	}
	cout<<dp[n-1]<<"\n";
	return 0;
}

// Input: 

// 1000 3
// 2 3 5

// Output:

// 51200000
