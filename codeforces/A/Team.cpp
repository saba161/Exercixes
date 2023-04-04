//https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main()
{
    int k = 0, n = 0, x = 0, y = 0, z = 0, summ = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        k = x + y + z;
        if(k >= 2){
            summ++;
        }
    }
    cout << summ;
}