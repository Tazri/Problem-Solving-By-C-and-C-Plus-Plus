// TODO
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

int getCnt(int x)
{
    int cnt = 0;
    vector<int> p = {2, 3, 5, 7};

    for (int i = 0; i < p.size(); i++)
    {
        int c = x / p[i];

        for (int j = i + 1; j < p.size(); j++)
        {
            int ij = p[i] * p[j];
            c -= (x / ij);
        }

        cnt += c;
    }

    return cnt;
}

void program()
{
    int l, r;
    cin >> l >> r;

    int lm1 = l - 1;
    int rm = getCnt(r) - getCnt(lm1);
    int cnt = r - l + 1;

    cout << cnt - rm << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}