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
int sum,n,m;
vector<vector<int > > dp; 
int rec(int ind,int cursum)
{
	if(ind==0 && cursum==0)
		return 1;
	else if(ind==0 || cursum<0)
		return 0;
	int sums =0 ;
	if(dp[ind][cursum]!=-1)
		return dp[ind][cursum];
	for(int i=1;i<=m;i++)
	{
		sums+=rec(ind-1,cursum-i);
	}
	return dp[ind][cursum] = sums;
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
	cin>>n>>m;
	cin>>sum;
	dp.resize(n+1,vector<int>(sum+1,-1));
	cout<<rec(n,sum);
	return 0;
}

// Input:

// 3 6 8

// Output:

// 21