// link : https://onlinejudge.u-aizu.ac.jp/problems/ITP2_1_A
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
    vector<int> arr;

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 0)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else if (t == 1)
        {
            int p;
            cin >> p;
            cout << arr[p] << endl;
        }
        else if (t == 2)
        {
            arr.pop_back();
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}