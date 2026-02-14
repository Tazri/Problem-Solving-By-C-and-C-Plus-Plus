// link : https://cdoj.site/d/lutece/p/Lutece0201
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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> xv;
    xv.reserve(n);
    vector<int> sv;
    sv.reserve(n);

    multiset<int> mt;

    for (int i = 0; i < k; i++)
        mt.insert(v[i]);

    xv.push_back(*mt.rbegin());
    sv.push_back(*mt.begin());

    for (int r = 0, i = k; i < n; i++, r++)
    {
        mt.erase(mt.find(v[r]));
        mt.insert(v[i]);
        xv.push_back(*mt.rbegin());
        sv.push_back(*mt.begin());
    }

    for (int i = 0; i < sv.size(); i++)
        cout << sv[i] << " \n"[i == sv.size() - 1];

    for (int i = 0; i < xv.size(); i++)
        cout << xv[i] << " \n"[i == xv.size() - 1];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}