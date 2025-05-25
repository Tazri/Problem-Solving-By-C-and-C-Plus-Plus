// link : https://codeforces.com/problemset/problem/1144/C
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

void pv(vector<int> v)
{
    cout << v.size() << endl;

    if (v.size() > 0)
    {
        cout << v[0];
        for (int i = 1; i < v.size(); i++)
            cout << " " << v[i];
    }
    cout << endl;
}

void program()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> inc;
    vector<int> dec;
    inc.reserve(n);
    dec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            dec.push_back(arr[i]);
        }
        else
        {
            inc.push_back(arr[i]);
        }
    }

    if (dec.size() > 1)
    {
        for (int i = 1; i < dec.size(); i++)
        {
            if (dec[i] == dec[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if (inc.size() > 1)
    {
        for (int i = 1; i < inc.size(); i++)
        {
            if (inc[i] == inc[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
    pv(inc);

    reverse(dec.begin(), dec.end());

    pv(dec);
}

int main()
{
    optimize();
    program();
    return 0;
}