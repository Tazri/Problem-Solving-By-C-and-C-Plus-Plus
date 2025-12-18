// link : https://codeforces.com/problemset/problem/27/A
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int index = 1;

    for (int vi : v)
    {
        if (vi == index)
            index++;
        else
            break;
    }

    cout << index << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}