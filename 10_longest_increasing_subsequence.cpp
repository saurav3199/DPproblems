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
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int > dp(n,0);
	for(int i=0;i<n;i++)
	{
		dp[i]+=1;
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
				dp[i] = max(dp[i] , dp[j] + 1);
		}
	}
	cout<<dp[n-1]<<"\n";
	return 0;
}


// Input:

// 9
// 10 22 9 33 21 50 41 60 80

// Output:

// 6