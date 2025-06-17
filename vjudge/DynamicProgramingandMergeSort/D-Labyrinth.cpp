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

int n, m;
vector<string> mp;
pair<int, int> s, e;

void program()
{
    cin >> n >> m;
    mp = vector<string>(n);

    for (int i = 0; i < n; i++)
        cin >> mp[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mp[i][j] == 'A')
                s = {i, j};
            else if (mp[i][j] == 'B')
                e = {i, j};

    cout << "start i : " << s.first << " j : " << s.second << endl;
    cout << "end i : " << e.first << " j : " << e.second << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}