// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/my
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
    int n, m;
    cin >> n >> m;
    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        freq[vi]++;
    }

    for (int i = 1; i <= m; i++)
        cout << freq[i] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}