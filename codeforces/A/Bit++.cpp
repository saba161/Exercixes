//https://codeforces.com/problemset/problem/282/A

#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int n;
    string operation;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> operation;
        
        if (operation == "X++" || operation == "++X") {
            x++;
        }
        
        if (operation == "X--" || operation == "--X") {
            x--;
        }
    }

    cout << x;
}