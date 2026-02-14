// linK: https://cses.fi/problemset/task/1073/
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
    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        int block;
        cin >> block;

        multiset<int>::iterator fnd = mt.upper_bound(block);

        if (fnd != mt.end())
            mt.erase(fnd);
        mt.insert(block);
    }

    cout << mt.size() << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}