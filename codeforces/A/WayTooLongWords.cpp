//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    short n;
    cin >> n;
    string s;
    short l;
    while (n--) {
        cin >> s;
        l = s.length();
        if (l <= 10)
            cout << s << endl;
        else
            cout << s[0] << l - 2 << s[l - 1] << endl;
    }
}