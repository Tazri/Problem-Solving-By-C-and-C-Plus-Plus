// link : https://atcoder.jp/contests/arc087/tasks/arc087_a?lang=en
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
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> unique;
    unique.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        mp[ai]++;

        if (mp[ai] == 1)
            unique.push_back(ai);
    }

    int cnt = 0;

    for (int ui : unique)
    {
        int has = mp[ui];
        if (has > ui)
        {
            cnt += (has - ui);
        }
        else if (has < ui)
        {
            cnt += has;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}