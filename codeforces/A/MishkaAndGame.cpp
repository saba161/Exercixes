#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka;
    int chris;
    int mishkaCount = 0;
    int chrisCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> mishka >> chris;
        if (mishka > chris)
        {
            mishkaCount++;
        }
        else if (chris > mishka)
        {
            chrisCount++;
        }
    }
    
    if (mishkaCount > chrisCount)
    {
        cout << "Mishka";
    }
    else if (chrisCount > mishkaCount)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}
