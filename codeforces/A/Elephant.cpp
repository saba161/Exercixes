//https://codeforces.com/contest/617/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n = 0, step = 0;
    cin >> n;
    
    while (n > 0) {
        if(n >= 5){
            step++;
            n = n - 5;
        }
        if(n == 4){
            step++;
            n = n - 4;
        }
        if(n == 3){
            step++;
            n = n - 3;
        }
        if(n == 2){
            step++;
            n = n - 2;
        }
        if(n == 1){
            step++;
            n--;
        }
    }
    
    cout << step;
}