// link : https://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n, s;
    cin >> s >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](auto a, auto b)
         {
    if(a.first == b.first){
      return a.second > b.second;
    }
    return a.first < b.first; });

    for (auto d : v)
    {
        if (s <= d.first)
        {
            cout << "NO" << endl;
            return;
        }
        s += d.second;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    program();

    return 0;
}