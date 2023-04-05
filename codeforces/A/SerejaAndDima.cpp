//https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
	deque < int > d;
	int n, m, k, sergo, dima, back, front;
	int arr[2] = { 0 };
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> k;
		d.push_back(k);
	}
	m = 0;
	while(!d.empty()){
		if(d.front() > d.back()){
			arr[m] = arr[m] + d.front();
			d.pop_front();
		}else{
			arr[m] = arr[m] + d.back();
			d.pop_back();
		}
		m = 1 - m;
	}
	cout << arr[0] << " " << arr[1];
}