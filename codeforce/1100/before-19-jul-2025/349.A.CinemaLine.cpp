// link : https://codeforces.com/problemset/problem/349/A
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

void program()
{
    int n;
    cin >> n;

    int t25 = 0;
    int t50 = 0;
    int t100 = 0;
    bool isPossible = true;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (!isPossible)
            continue;

        if (t == 25)
        {
            t25++;
            continue;
        }

        if (t == 50)
        {
            if (t25 <= 0)
                isPossible = false;
            t25--;
            t50++;
            continue;
        }

        // if 100
        if (t25 <= 0)
            isPossible = false;

        if (t50 >= 1)
        {
            t50--;
            t25--;
            t100++;
            continue;
        }

        if (t25 < 3)
            isPossible = false;
        t25 -= 3;
    }

    if (isPossible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}