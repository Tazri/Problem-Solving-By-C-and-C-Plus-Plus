// link : https://www.spoj.com/problems/NAKANJ/en/
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

vector<int> di = {1, -1, 1, -1, 2, 2, -2, -2};
vector<int> dj = {2, 2, -2, -2, -1, 1, 1, -1};

pair<int, int> parse(string s)
{
    // dummy comment
    int i = (int)s[0] - (int)'a' + 1;
    int j = (int)s[1] - (int)'1' + 1;

    return {i, j};
}

void program()
{
    string s1, s2;
    cin >> s1 >> s2;
    pair<int, int> start = parse(s1);
    pair<int, int> end = parse(s2);
    set<pair<int, int>> visited;

    queue<tuple<int, int, int>> q;
    visited.insert(start);
    q.push({start.first, start.second, 0});

    while (q.size())
    {
        tuple<int, int, int> t = q.front();
        q.pop();
        int i = get<0>(t);
        int j = get<1>(t);
        int turn = get<2>(t);

        if (i == end.first && j == end.second)
        {
            cout << turn << endl;
            return;
        }

        for (int d = 0; d < 8; d++)
        {
            int ti = i + di[d];
            int tj = j + dj[d];

            if (ti > 8 || ti < 1 || tj > 8 || tj < 1 || visited.count({ti, tj}))
                continue;
            visited.insert({ti, tj});
            q.push({ti, tj, turn + 1});
        }
    }
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