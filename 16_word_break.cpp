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
map<pair<string,int> ,bool> m;
bool rec(int ind,string curstr, string& s, set<string>& words)
{
    if(ind==s.size())
    {
        if(curstr == "")
            return true;
        else
            return false;
    }
    if(m.find({curstr,ind})!=m.end())
        return m[{curstr,ind}];
    if(words.find(curstr+s[ind])!=words.end())
        return m[{curstr,ind}] = rec(ind+1,curstr+s[ind],s,words) | rec(ind+1,"",s,words);
    else
        return m[{curstr,ind}] = rec(ind+1,curstr+s[ind],s,words);
}
bool wordBreak(string s, vector<string>& wordDict) {
    int n = s.size();
    set<string> words;
    for(auto str:wordDict)
        words.insert(str);
    return rec(0,"",s,words);
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
	string s;
	cin>>s;
	int m;
	cin>>m;
	vector<string> dic(m);
	for(int i=0;i<m;i++)
		cin>>dic[i];
    if(wordBreak(s,dic))
    	cout<<"true";
    else
    	cout<<"false";
	return 0;
}

// Input:

// applepenapple
// 2
// apple
// pen

// Output:

// true