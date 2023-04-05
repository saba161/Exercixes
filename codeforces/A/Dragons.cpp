//https://codeforces.com/contest/230/problem/A

#include<bits/stdc++.h>
using namespace std;

pair<int, int> d[1005];
int n,m,i;
int main(){
cin>>m>>n;
for(i=0; i<n; i++){
    cin>>d[i].first>>d[i].second;
}
sort(d,d+n);
for(i=0; i<n; i++){
    if(m>d[i].first) m=m+d[i].second;
    else {cout<<"NO"; return 0;}
}
cout<<"YES";
}