//https://codeforces.com/contest/427/problem/A

#include <iostream>

using namespace std;

int main()
{	
	int n, damarcxeba(0), polices(0), vvod;
	
	cin >> n;
	
	for (int i(0); i < n; i++)
	{
		cin >> vvod;
		
		if (vvod == -1)
			if (polices > 0)
				polices--;
			else
				damarcxeba++;
		else
			polices += vvod;
	}
	
	cout << damarcxeba;
	
	return 0;
}
