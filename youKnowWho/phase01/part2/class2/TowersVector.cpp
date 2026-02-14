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
    vector<int> v;
    v.reserve(n);

    for (int i = 0; i < n; i++)
    {
        int block;
        cin >> block;

        vector<int>::iterator it = upper_bound(v.begin(), v.end(), block);

        if (it != v.end())
        {
            int index = it - v.begin();
            v[index] = block;
        }
        else
            v.push_back(block);
    }

    cout << v.size() << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}