// link : https://codeforces.com/problemset/problem/1742/B
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

    set<int> st;
    bool isOk = true;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (st.count(ai))
            isOk = false;

        st.insert(ai);
    }

    if (isOk)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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