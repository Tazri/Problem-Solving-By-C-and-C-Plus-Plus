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
    set<pair<string, string>> st;

    for (int i = 0; i < n; i++)
    {
        pair<string, string> f;
        cin >> f.first >> f.second;
        st.insert(f);
    }

    cout << st.size() << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}