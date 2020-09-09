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
	vector<ll> cat(n+1,0);
	cat[0] = 1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
			cat[i]+=cat[j]*cat[i-j-1];
	}
	cout<<cat[n-1]<<"\n";
	return 0;
}

// Input:

// 10

// Output:

// 4862