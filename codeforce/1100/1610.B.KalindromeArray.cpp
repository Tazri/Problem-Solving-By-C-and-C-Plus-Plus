// link : https://codeforces.com/problemset/problem/1610/B
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

bool check(vector<int> &v)
{
    int n = v.size();
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (v[l] != v[r])
            return false;
        l++;
        r--;
    }

    return true;
}

void program()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    if (check(v))
    {
        cout << "YES" << endl;
        return;
    }

    int vl, vr;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        if (v[l] != v[r])
        {
            vl = v[l];
            vr = v[r];
            break;
        }
        l++;
        r--;
    }

    vector<int> v1;
    v1.reserve(n);
    vector<int> v2;
    v2.reserve(n);

    for (int &vi : v)
    {
        if (vi != vl)
        {
            v1.push_back(vi);
        }

        if (vi != vr)
        {
            v2.push_back(vi);
        }
    }

    if (check(v1) || check(v2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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