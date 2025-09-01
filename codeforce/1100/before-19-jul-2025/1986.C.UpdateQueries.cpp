// link : https://codeforces.com/problemset/problem/1986/C
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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<int> st;
    vector<int> indexes;
    indexes.reserve(m);

    for (int i = 0; i < m; i++)
    {
        int index;
        cin >> index;

        if (st.count(index))
            continue;

        st.insert(index);
        indexes.push_back(index);
    }

    string cop;
    cin >> cop;

    sort(cop.begin(), cop.end());

    sort(indexes.begin(), indexes.end());

    int i = 0;
    for (int index : indexes)
    {
        s[index - 1] = cop[i];
        i++;
    }

    cout << s << endl;
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