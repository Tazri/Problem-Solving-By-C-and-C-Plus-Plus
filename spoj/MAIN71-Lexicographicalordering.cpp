// link: https://www.spoj.com/problems/MAIN71/
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

#define endl '\n'

void program()
{
    string perm;
    cin >> perm;

    map<char, int> mp;

    for (int i = 0; i < perm.size(); i++)
        mp[perm[i]] = i;

    string a, b;
    cin >> a >> b;

    bool isAgreater = false;
    bool isBgreaer = false;
    for (int i = 0; i < a.size() && i < b.size(); i++)
    {
        if (mp[a[i]] > mp[b[i]])
        {
            isAgreater = true;
            break;
        }
        if (mp[b[i]] > mp[a[i]])
        {
            isBgreaer = true;
            break;
        }
    }

    if (isAgreater)
    {
        cout << ">" << endl;
    }
    else if (isBgreaer)
    {
        cout << "<" << endl;
    }
    else if (a.size() > b.size())
    {
        cout << ">" << endl;
    }
    else if (b.size() > a.size())
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
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