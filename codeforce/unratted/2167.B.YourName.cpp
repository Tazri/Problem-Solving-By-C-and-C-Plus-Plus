// link : https://codeforces.com/contest/2167/problem/B
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
    string s, t;
    cin >> s >> t;
    vector<int> smp((int)'z' - (int)'a' + 1, 0);

    for (char ch : s)
        smp[(int)ch - (int)'a']++;
    for (char ch : t)
        smp[(int)ch - (int)'a']--;

    for (int mi : smp)
        if (mi != 0)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
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