// link : https://atcoder.jp/contests/abc371/tasks/abc371_b?lang=en
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

    vector<bool> taroGone(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int fi;
        char ti;
        cin >> fi >> ti;

        if (ti == 'F')
            cout << "No" << endl;
        else if (taroGone[fi])
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
            taroGone[fi] = true;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}