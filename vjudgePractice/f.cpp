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

bool isSorted(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
            return false;
    }

    return true;
}

bool isDiff(string &s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
            return true;
    }

    return false;
}

void program()
{
    int n;
    cin >> n;
    string p;
    vector<int> v(n);
    vector<int> sv(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }
    cin >> p;

    if (isSorted(v))
    {
        cout << 0 << endl;
        return;
    }

    if (!isDiff(p))
    {
        cout << -1 << endl;
        return;
    }

    int li = 0;
    int ri = n - 1;
    sort(sv.begin(), sv.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != sv[i])
        {
            li = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != sv[i])
        {
            ri = i;
            break;
        }
    }

    bool found = false;
    for (int i = li; i >= 0; i--)
    {
        if (p[i] != p[ri])
        {
            found = true;
            break;
        }
    }

    for (int i = ri; i < n; i++)
    {
        if (p[i] != p[li])
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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