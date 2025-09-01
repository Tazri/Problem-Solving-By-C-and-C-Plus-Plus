// link : https://cses.fi/problemset/task/1619
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

    while (n--)
    {
        int arrive, leave;
        cin >> arrive >> leave;

        mp[arrive]++;
        mp[leave + 1]--;
    }

    int mx = 0;
    int peoples = 0;
    for (pair<int, int> cos : mp)
    {
        peoples += cos.second;
        mx = max(peoples, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}