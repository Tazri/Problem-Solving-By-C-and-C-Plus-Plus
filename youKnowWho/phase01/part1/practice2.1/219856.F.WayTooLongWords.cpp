// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
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
    string wrd;
    cin >> wrd;

    if (wrd.size() > 10)
    {
        cout << wrd[0] << wrd.size() - 2 << wrd.back() << endl;
    }
    else
        cout << wrd << endl;
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