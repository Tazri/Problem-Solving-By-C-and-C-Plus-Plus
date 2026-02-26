// link : https://codeforces.com/problemset/problem/1926/B
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
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int len = 0;

        for (char ch : s)
            if (ch == '1')
                len++;

        if (len)
            v.push_back(len);
    }

    int square = true;

    for (int i = 1; i < v.size(); i++)
        if (v[i - 1] != v[i])
        {
            square = false;
            break;
        }

    if (square)
        cout << "SQUARE" << endl;
    else
        cout << "TRIANGLE" << endl;
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