// link : https://vjudge.net/problem/AtCoder-abc287_b/origin
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
    vector<string> strings(n);
    multiset<string> st;

    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
    }

    for (int i = 0; i < m; i++)
    {
        string code;
        cin >> code;

        st.insert(code);
    }

    int cnt = 0;

    for (string s : strings)
    {
        string code(3, '0');
        code[0] = s[3];
        code[1] = s[4];
        code[2] = s[5];

        if (st.find(code) != st.end())
            cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}