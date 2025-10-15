// link : https://codeforces.com/problemset/problem/1462/C
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
    int mx = (9 * (9 + 1)) / 2;

    int x;
    cin >> x;

    if (x > mx)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> d = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    vector<int> num;
    num.reserve(10);

    for (int di : d)
    {
        if (x <= 0)
            break;

        if (x >= di)
        {
            num.push_back(di);
            x -= di;
        }
        else
        {
            num.push_back(x);
            x -= x;
        }
    }

    reverse(num.begin(), num.end());
    for (int ni : num)
        cout << ni;
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}