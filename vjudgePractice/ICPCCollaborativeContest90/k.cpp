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
    vector<int> vs(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        vs[i] = v[i];
    }

    sort(vs.begin(), vs.end());

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (vs[i] != v[i])
            cnt++;
    }

    if (cnt == 0 || cnt == 2)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}