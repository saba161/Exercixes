//https://codeforces.com/contest/122/problem/A

#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n, m , k;
	cin >> n;
	if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 477 == 0){
		cout << "YES";
	}else{
		cout << "NO";
	}
}