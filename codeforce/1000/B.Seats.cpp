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

    string s;

    cin >> s;

    vector<int> v;
    v.reserve(s.size());
    int cnt = 0;
    for (char &ch : s)
        if (ch == '0')
            cnt++;
        else
        {
            if (cnt)
                v.push_back(cnt);
            cnt = 0;
        }

    if (cnt)
        v.push_back(cnt);

    for (int &vi : v)
        cout << vi << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}