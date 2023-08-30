#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 2 == 0)
    {
        if (x < 10)
        {
            cout << "Even and less than 10";
        }
        else
        {
            cout << "Even and greater than equal 10";
        }
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}