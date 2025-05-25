// link : https://codeforces.com/problemset/problem/855/A

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
    multiset<string> st;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (st.find(name) != st.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            st.insert(name);
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}