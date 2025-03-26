// link : https://codeforces.com/problemset/problem/1904/A
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
    int a, b;
    int qx, qy;
    int kx, ky;
    cin >> a >> b;
    cin >> kx >> ky;
    cin >> qx >> qy;

    vector<pair<int, int>> kingTarget(8);
    vector<pair<int, int>> queenTarget(8);

    // for king
    int cx = kx;
    int cy = ky;

    kingTarget[0] = make_pair<int, int>(cx + a, cy + b);
    kingTarget[1] = make_pair<int, int>(cx + a, cy - b);
    kingTarget[2] = make_pair<int, int>(cx - a, cy + b);
    kingTarget[3] = make_pair<int, int>(cx - a, cy - b);
    kingTarget[4] = make_pair<int, int>(cx + b, cy + a);
    kingTarget[5] = make_pair<int, int>(cx + b, cy - a);
    kingTarget[6] = make_pair<int, int>(cx - b, cy + a);
    kingTarget[7] = make_pair<int, int>(cx - b, cy - a);

    // for queen
    cx = qx;
    cy = qy;
    queenTarget[0] = make_pair<int, int>(cx + a, cy + b);
    queenTarget[1] = make_pair<int, int>(cx + a, cy - b);
    queenTarget[2] = make_pair<int, int>(cx - a, cy + b);
    queenTarget[3] = make_pair<int, int>(cx - a, cy - b);
    queenTarget[4] = make_pair<int, int>(cx + b, cy + a);
    queenTarget[5] = make_pair<int, int>(cx + b, cy - a);
    queenTarget[6] = make_pair<int, int>(cx - b, cy + a);
    queenTarget[7] = make_pair<int, int>(cx - b, cy - a);

    vector<pair<int, int>> ansPos;
    int ans = 0;
    for (pair<int, int> posK : kingTarget)
    {

        for (pair<int, int> posQ : queenTarget)
        {
            if (posK.first == posQ.first && posK.second == posQ.second)
            {
                bool isListed = false;
                for (pair<int, int> posA : ansPos)
                {
                    if (posA.first == posK.first && posA.second == posK.second)
                    {
                        isListed = true;
                        break;
                    }
                }

                if (!isListed)
                {
                    ansPos.push_back(posK);
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
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