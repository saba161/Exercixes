//https://codeforces.com/contest/266/problem/A

#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n, t, c = 0;
	string s;
	cin >> n >> s;
	t = s[0];
	for(int i = 1; i < n; i++){
		if(s[i] == t){
			c++;
		}else{
			t = s[i];
		}
	}
	cout << c;
}