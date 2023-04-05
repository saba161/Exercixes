//https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>

using namespace std;

long long i, j, k, ans;
map < string,int > m;
string s;
int main(){
    cin >> k;
    for(i = 0; i < k; i++){
        cin >> s;
        if(m[s]==0) cout<<"OK"<<endl;
        else cout<<s<<m[s]<<endl;
        m[s]++;
    }
}