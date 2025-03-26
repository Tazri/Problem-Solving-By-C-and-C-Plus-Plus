// link : https://atcoder.jp/contests/abc323/tasks/abc323_b?lang=en
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
    vector<int> players;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        for (char ch : s)
        {
            if (ch == 'o')
                mp[i]++;
        }

        players.push_back(i);
    }

    sort(players.begin(), players.end(), [&mp](int a, int b)
         {

        if(mp[a]  == mp[b]){
            return a < b;
        }

        return mp[a] > mp[b]; });

    // print players
    cout << players[0];
    for (int i = 1; i < players.size(); i++)
    {
        cout << " " << players[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}