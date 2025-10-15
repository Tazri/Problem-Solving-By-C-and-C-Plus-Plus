// link : https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int year;
    cin >> year;
    year++;

    while (true)
    {
        // check is distict
        int y = year;
        vector<bool> digits(10, false);
        bool isValid = true;

        while (y)
        {
            int d = y % 10;
            y /= 10;

            if (digits[d])
            {
                isValid = false;
                break;
            }
            else
            {
                digits[d] = true;
            }
        }

        if (isValid)
        {
            cout << year << endl;
            break;
        }
        year++;
    }
    return 0;
}