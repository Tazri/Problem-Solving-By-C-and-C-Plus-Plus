// link : https://www.hackerrank.com/challenges/cpp-sets/problem
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
    int q;
    cin >> q;
    set<int> st;

    for (int i = 0; i < q; i++)
    {
        int t, x;
        cin >> t >> x;

        if (t == 1)
        {
            st.insert(x);
        }
        else if (t == 2)
        {
            st.erase(x);
        }
        else if (t == 3)
        {
            if (st.find(x) == st.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}