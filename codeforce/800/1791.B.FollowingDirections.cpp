// link : https://codeforces.com/problemset/problem/1791/B
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
    string s;
    cin >> s;
    pair<int, int> point;
    point.first = 0;
    point.second = 0;
    bool reach = false;
    for (char ch : s)
    {
        if (ch == 'U')
            point.second++;
        else if (ch == 'D')
            point.second--;
        else if (ch == 'R')
            point.first++;
        else
            point.first--;

        if (point == make_pair<int, int>(1, 1))
        {
            reach = true;
        }
    }

    if (reach)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}