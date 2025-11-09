// link : https://codeforces.com/problemset/problem/1325/B
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
    set<int> st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    cout << st.size() << endl;
    return;
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