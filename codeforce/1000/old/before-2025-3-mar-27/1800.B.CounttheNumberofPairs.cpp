// link : https://codeforces.com/problemset/problem/1800/B
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

int atoi(char ch)
{
    if (tolower(ch) == ch)
        return (int)ch - 'a';
    return (int)ch - 'A';
}

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> ump(atoi('z') + 1, 0);
    vector<int> lmp(atoi('z') + 1, 0);

    string s;
    cin >> s;
    int ans = 0;
    for (char ch : s)
    {
        int chi = atoi(ch);

        if (tolower(ch) == ch)
        {
            if (ump[chi] > 0)
            {
                ump[chi]--;
                ans++;
            }
            else
                lmp[chi]++;
        }
        else
        {
            if (lmp[chi] > 0)
            {
                lmp[chi]--;
                ans++;
            }
            else
            {
                ump[chi]++;
            }
        }
    }

    for (int chi = 0; chi <= atoi('z'); chi++)
    {
        if (k <= 0)
            break;
        if (lmp[chi] <= 1 && ump[chi] <= 1)
            continue;

        int h = lmp[chi] > 1 ? lmp[chi] : ump[chi];

        if (h & 1)
            h--;

        int can = h / 2;
        int did = min(can, k);
        k -= did;
        ans += did;
    }

    cout << ans << endl;
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