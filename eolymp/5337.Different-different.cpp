// link : https://basecamp.eolymp.com/en/problems/5337
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
    multiset<int> st;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (st.find(ai) == st.end())
        {
            cnt++;
            st.insert(ai);
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}