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
    multiset<int> mt;
    for (int &vi : v)
    {
        cin >> vi;
        mt.insert(vi);
    }

    int mi = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mt.erase(mt.find(v[i]));
            continue;
        }
        else if (i == n - 1)
        {
            continue;
        }

        mt.erase(mt.find(v[i]));

        // if(v[mi] > v[i])
    }
}

int main()
{
    optimize();
    program();
    return 0;
}