// link : https://codeforces.com/problemset/problem/903/C
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
    vector<int> boxes;
    boxes.reserve(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        mp[ai]++;

        if (mp[ai] == 1)
            boxes.push_back(ai);
    }

    sort(boxes.begin(), boxes.end());

    for (int i = 1; i < n; i++)
    {
        if (mp[boxes[i - 1]] <= mp[boxes[i]])
        {
            continue;
        }

        int extra = mp[boxes[i - 1]] - mp[boxes[i]];
        mp[boxes[i]] += extra;
    }

    cout << mp[boxes[boxes.size() - 1]] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}