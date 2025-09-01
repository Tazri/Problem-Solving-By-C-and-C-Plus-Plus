// link : https://codeforces.com/problemset/problem/1957/B
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

void printAns(vector<ll> &v)
{
    cout << v[0];
    for (ll i = 1; i < v.size(); i++)
        cout << " " << v[i];
}

void program()
{
    ll n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << k << endl;
        return;
    }

    vector<ll> ans;
    ans.reserve(n);
    ll p = 1;
    ll cpy = k;
    ll zero = 0;
    while (cpy)
    {
        int bit = cpy & 1;
        if (bit)
            ans.push_back(p);

        if (bit == 0)
            zero++;
        p *= 2;
        cpy >>= 1;
    }

    if (n <= ans.size())
    {
        int back = ans.back();
        int a = back - 1;
        int b = k - a;

        int left = n - 2;

        cout << a << " " << b;
        for (int i = 0; i < left; i++)
            cout << " " << 0;
        cout << endl;
        return;
    }

    if (zero)
    {
        ll back = ans.back();
        ans.pop_back();
        ans.push_back(back - 1);
        ans.push_back(1);
    }
    ll left = n - ans.size();
    printAns(ans);
    for (ll i = 0; i < left; i++)
        cout << " " << 0;
    cout << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}