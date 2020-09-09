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
	int n,sum=0;
	cin>>n;
	vector<int > a(n);
 	for(int i=0;i<n;i++)
		cin>>a[i],sum+=a[i];
	vector<vector<bool> > dp(n,vector<bool >(sum+1,false));
	for(int i=0;i<n;i++)
		dp[0][a[i]]=true;
	for(int i=0;i<n;i++)
		dp[i][0]=true;
	for(int i=1;i<n;i++)
	{
		for(int j=a[i];j<=sum;j++)
			dp[i][j] = dp[i-1][j] | dp[i-1][j-a[i]];
	}
	if(dp[n-1][sum/2])
		cout<<"true";
	else
		cout<<"false";
	return 0;
}

// Input:

// 5
// 3 1 5 9 12

// Output:

// true