//https://codeforces.com/contest/546/problem/A

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, w, count=0;
    cin >> k >> n >> w;
    
    for(int i=0; i<w; i++)
        count += k*(i+1);
        
    if (count > n)
        cout << count-n;
    else
        cout << "0";
    return 0;
}