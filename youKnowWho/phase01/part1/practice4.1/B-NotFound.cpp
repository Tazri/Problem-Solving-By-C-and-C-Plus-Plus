// linK : https://atcoder.jp/contests/abc071/tasks/abc071_b
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
    string s;
    cin >> s;

    set<char> st;

    for (char &ch : s)
        st.insert(ch);

    for (char ch = 'a'; ch <= 'z'; ch++)
        if (!st.count(ch))
        {
            cout << ch << endl;
            return;
        }

    cout << "None" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}