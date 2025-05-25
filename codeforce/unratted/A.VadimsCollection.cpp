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
    vector<int> mp(10, 0);
    vector<int> ans(10);

    for (char ch : s)
    {
        int d = (int)ch - (int)'0';
        mp[d]++;
    }

    int mn = 9;

    for (int i = 0; i < 10; i++, mn--)
    {
        if (mp[mn] > 0)
        {
            ans[i] = mn;
            mp[mn]--;
            continue;
        }

        for (int j = mn; j <= 9; j++)
        {
            if (mp[j] > 0)
            {
                ans[i] = j;
                mp[j]--;
                break;
            }
        }
    }

    for (int ai : ans)
        cout << ai;
    cout << endl;
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