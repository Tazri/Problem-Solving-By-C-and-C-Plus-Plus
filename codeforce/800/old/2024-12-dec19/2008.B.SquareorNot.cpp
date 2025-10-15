// link : https://codeforces.com/problemset/problem/2008/B
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

void test()
{
    int size;
    cin >> size;
    string matrix;
    cin >> matrix;

    // sqaure root.
    int rtSize = sqrt(size);
    if (rtSize * rtSize != size)
    {
        cout << "NO" << endl;
        return;
    }

    int last = rtSize - 1;

    for (int i = 0; i < matrix.size(); i++)
    {
        int col = i % rtSize;
        int row = i / rtSize;
        char ch = matrix[i];

        bool isEdge = col == 0 || row == 0 || col == last || row == last ? true : false;

        if (isEdge && ch != '1')
        {
            cout << "NO" << endl;
            return;
        }

        if (!isEdge && ch != '0')
        {

            cout
                << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}