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
	ll a = 0,b = 1,c;
	if(n==0)
		return a;
	else if(n==1)
		return b;
	while(n-->=2)
	{
		c = a+b;
		a = b;
		b = c;
	}
	cout<<c<<"\n";
	return 0;
}

// Input:

// 9

// Output:

// 34