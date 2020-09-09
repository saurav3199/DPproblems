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
vector<int > dp(10000,-1);
int rec(int left , vector<int > &price)
{
	if(left< 0)
		return INT_MIN;
	if(dp[left] != -1)
		return dp[left];
	int res = 0,n = price.size();
	for(int i=0;i<n;i++)
	{
		res = max( res , price[i] + rec(left-i-1,price));
	}
	return dp[left] = res;
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
	vector<int> price(n);
	for(int i=0;i<n;i++)
		cin>>price[i];
	int result = rec(n,price);
	cout<<result<<"\n";
	return 0;
}


// Input:

// 8 
// 1 5 8 9 10 17 17 20

// Output:

// 22