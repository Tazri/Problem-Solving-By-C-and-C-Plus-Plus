// link : https://codeforces.com/problemset/problem/2044/D
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
    vector<int> arr;
    arr.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (st.count(ai))
            continue;
        arr.push_back(ai);
        st.insert(ai);
    }

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++)
        cout << " " << arr[i];

    if (st.size() == n)
    {
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (st.count(i))
            continue;
        cout << " " << i;
    }
    cout << endl;
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