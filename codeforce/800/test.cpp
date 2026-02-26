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
    vector<string> obj = {"apple", "benana", "apple", "cat", "cat"};
    map<string, int> mp;

    unordered_map<string, int> omp;

    for (int i = 0; i < obj.size(); i++)
    {
        mp[obj[i]]++;
    }

    int mx = 0;
    for (auto [key, value] : mp)
    {
        mx = max(mx, value);
    }

    cout << mx << endl;
    for (auto [key, value] : mp)
    {
        if (value == mx)
        {
            cout << key << endl;
            return;
        }
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}