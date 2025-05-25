// link : https://atcoder.jp/contests/abc132/tasks/abc132_a?lang=en
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
    map<char, int> mp;
    string s;
    cin >> s;

    int cnt = 0;
    for (char ch : s)
    {
        mp[ch]++;

        if (mp[ch] == 2)
            cnt++;
    }

    if (cnt >= 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}