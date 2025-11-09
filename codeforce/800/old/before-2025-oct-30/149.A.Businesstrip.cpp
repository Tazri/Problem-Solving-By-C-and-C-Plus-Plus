// link : https://codeforces.com/problemset/problem/149/A
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
    int k;
    cin >> k;
    vector<int> v(12);
    for (int &vi : v)
        cin >> vi;
    sort(v.rbegin(), v.rend());

    for (int i = 1; i < k; i++)
        v[i] += v[i - 1];

    int index = -1;

    for (int i = 0; i < 12; i++)
    {
        if (v[i] >= k)
        {
            index = i;
            break;
        }
    }

    if (k == 0)
        cout << 0 << endl;
    else if (index == -1)
    {
        cout << -1 << endl;
    }
    else
        cout << index + 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}