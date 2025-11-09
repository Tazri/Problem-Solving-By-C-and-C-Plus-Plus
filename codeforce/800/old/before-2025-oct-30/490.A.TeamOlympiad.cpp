// link : https://codeforces.com/problemset/problem/490/A
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
    vector<int> p1;
    vector<int> p2;
    vector<int> p3;
    p1.reserve(n);
    p2.reserve(n);
    p3.reserve(n);

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
            p1.push_back(i);
        else if (t == 2)
            p2.push_back(i);
        else
            p3.push_back(i);
    }

    int mn = min(p1.size(), min(p2.size(), p3.size()));

    cout << mn << endl;

    while (p1.size() && p2.size() && p3.size())
    {
        cout << p1.back() << " " << p2.back() << " " << p3.back() << endl;
        p1.pop_back();
        p2.pop_back();
        p3.pop_back();
    }
}

int main()
{
    optimize();
    program();
    return 0;
}