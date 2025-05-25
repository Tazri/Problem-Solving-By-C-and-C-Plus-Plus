// link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D
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

void print(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << endl;
        return;
    }

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++)
        cout << " " << arr[i];
    cout << endl;
}

void program()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> allArr(n, vector<int>());

    while (q--)
    {
        int type, t, x;
        cin >> type;

        if (type == 0)
            cin >> t >> x;
        else
            cin >> t;

        if (type == 0)
        {
            allArr[t].push_back(x);
        }
        else if (type == 1)
        {
            print(allArr[t]);
        }
        else if (type == 2)
        {
            allArr[t].clear();
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}