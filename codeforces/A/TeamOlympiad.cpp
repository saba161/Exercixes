//https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>

using namespace std;
int n,a,b,i,j,x,y,a1,a2,a3,a4;
stack <int> s1,s2,s3;
main(){
cin>>n;
for (i=1; i<=n; i++){
  cin>>x;
  if (x==1) s1.push(i);
  if (x==2) s2.push(i);
  if (x==3) s3.push(i);
}
y=min(s1.size(),min(s2.size(),s3.size()));
cout<<y<<endl;
for (i=0; i<y; i++){
cout<<s1.top()<<" "<<s2.top()<<" "<<s3.top()<<endl;
s1.pop(); s2.pop(); s3.pop();
}
}