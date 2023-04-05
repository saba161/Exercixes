//https://codeforces.com/contest/158/problem/B

#include <iostream>

using namespace std;

int main()
{
    int tax = 0, x = 0, one = 0, two = 0, three = 0, four = 0, n = 0, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1){
            one++;
        }
        if(x == 2){
            two++;
        }
        if(x == 3){
            three++;
        }
        if(x == 4){
            four++;
        }
    }
    for(int i = 0; i < n; i++){
        if(four > 0){
            tax++;
            four--;
        }
        if(three > 0 && one > 0){
            tax++;
            three--;
            one--;
        }
        if(three > 0 && one <= 0){
            tax++;
            three--;
        }
        if(two >= 2){
            tax++;
            two = two - 2;
        }
        if(two == 1 && one >= 2){
            tax++;
            one = one - 2;    
            two--;
        }
        if(two == 1 && one <= 0 ){
            tax++;
            two--;
        }
        if(two == 1 && one == 1){
            tax++;
            one--;
            two--;
        }
        if(two == 0 && three == 0 && four == 0 && one >= 1){
            if(one >= 4){
                tax++;
                one = one - 4;
            }
            if(one == 3){
                tax++;
                one = one - 3;
            }
            if(one == 2){
                tax++;
                one = one - 2;
            }
            if(one == 1){
                tax++;
                one--;
            }
        }
        
    }
    cout << tax;
}