#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long int n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n == 3 || n % 2 == 0)
        {
            cout << 2 << endl;
        }
        else if (n % 2 != 0)
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
