//https://codeforces.com/contest/1/problem/A

#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    int flagstones_per_row = ceil((double)n/a);
    int rows_of_flagstones = ceil((double)m/a);

    long long total_flagstones = (long long)flagstones_per_row * rows_of_flagstones;

    cout << total_flagstones << endl;
}