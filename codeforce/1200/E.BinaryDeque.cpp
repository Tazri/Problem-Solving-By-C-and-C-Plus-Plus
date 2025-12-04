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
    int n, s;
    cin >> n >> s;

    vector<int> v;
    v.reserve(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (vi)
            sum++;
        vi = vi == 1 ? -1 : 1;

        if (v.empty())
        {
            v.push_back(vi);
            continue;
        }

        if (vi == -1)
        {
            v.push_back(-1);
            continue;
        }

        if (v.back() > 0)
            v.back() += 1;
        else
            v.push_back(1);
    }

    for (int vi : v)
        cout << vi << " ";
    cout << endl;
    cout << "sum : " << sum << endl;
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