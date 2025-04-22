// link : https://codeforces.com/problemset/problem/1669/B
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
    vector<int> mp(n + 1, 0);
    int select = -1;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        mp[temp]++;

        if (mp[temp] >= 3)
        {
            select = temp;
        }
    }

    cout << select << endl;
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