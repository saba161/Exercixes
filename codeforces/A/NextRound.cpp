//https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m, j, k = 0, d, f;
	cin >> n >> m;
	int arr[n];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	j = arr[m];
	for(int i = 1; i <= n; i++){
		if(arr[i] >= j && arr[i] != 0){
			k++;
		}
	}
	
	for(int i = 1; i <= m; i++){
		if(arr[i] == 0){
			d++;
		}
	}
	if(n == d){
		cout << 0;
	}else{
		cout << k;
	}
}