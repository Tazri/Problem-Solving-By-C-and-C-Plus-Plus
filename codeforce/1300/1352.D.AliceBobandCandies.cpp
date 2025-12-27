// link : https://codeforces.com/problemset/problem/1352/D
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

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ai = 0;
    int bi = n - 1;
    int alice = 0;
    int bob = 0;
    int move = 0;
    bool isAlice = true;
    int prevAlice = 0;
    int prevBob = 0;

    while (ai <= bi)
    {
        if (isAlice)
        {
            int need = bob - alice;
            int add = 0;
            int next = -1;
            for (int i = ai; i <= bi; i++)
            {
                add += v[i];

                if (add > prevBob)
                {
                    next = i + 1;
                    break;
                }
            }

            alice += add;
            prevAlice = add;
            move++;
            if (next == -1)
                break;

            ai = next;
            isAlice = false;
            continue;
        }

        int next = -1;
        int need = alice - bob;
        int add = 0;

        for (int i = bi; i >= ai; i--)
        {
            add += v[i];
            if (add > prevAlice)
            {
                next = i - 1;
                break;
            }
        }

        bob += add;
        move++;
        if (next == -1)
            break;
        bi = next;
        prevBob = add;
        isAlice = true;
    }

    cout << move << " " << alice << " " << bob << endl;
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