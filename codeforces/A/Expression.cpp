//https://codeforces.com/contest/479/problem/A

#include <iostream>

using namespace std;

int main() {
	int a, b, c, ans;
	cin >> a >> b >> c;
	
	ans = a + b + c;	
	ans = max(ans, c * (a + b));
	ans = max(ans, a * (b + c));
	ans = max(ans, a * c * b);

	cout << ans;
	
}