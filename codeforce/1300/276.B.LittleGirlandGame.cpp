// link : https://codeforces.com/problemset/problem/276/B
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
    string s;
    cin >> s;
    map<char, int> mp;
    vector<int> v;
    v.reserve(26);
    for (char ch : s)
        mp[ch]++;

    for (pair<char, int> p : mp)
        v.push_back(p.second);

    sort(v.rbegin(), v.rend());

    int odd = 0;
    for (int vi : v)
        if (vi & 1)
            odd++;

    if (odd == 0 || (odd & 1))
        cout << "First" << endl;
    else
        cout << "Second" << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}