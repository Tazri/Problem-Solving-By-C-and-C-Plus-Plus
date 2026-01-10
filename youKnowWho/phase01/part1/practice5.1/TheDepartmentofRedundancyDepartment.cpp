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
    vector<int> v;
    map<int, int> mp;
    int vi;
    while (cin >> vi)
    {
        if (mp.count(vi))
            mp[vi]++;
        else
        {
            mp[vi]++;
            v.push_back(vi);
        }
    }

    for (int &velue : v)
    {
        cout << velue << " " << mp[velue] << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}