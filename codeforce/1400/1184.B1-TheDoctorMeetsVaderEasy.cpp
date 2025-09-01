// link : https://codeforces.com/problemset/problem/1184/B1
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

struct Ship
{
    int i;
    int attack;
};

struct Base
{
    int def;
    int gold;
};

void program()
{
    int s, b;
    cin >> s >> b;
    vector<int> ans(s, 0);
    vector<Ship> ships(s);
    vector<Base> bases(b);

    for (int i = 0; i < s; i++)
    {
        cin >> ships[i].attack;
        ships[i].i = i;
    }

    // sort ships
    sort(ships.begin(), ships.end(), [](Ship left, Ship right)
         { return left.attack < right.attack; });

    for (int i = 0; i < b; i++)
        cin >> bases[i].def >> bases[i].gold;

    sort(bases.begin(), bases.end(), [](Base left, Base right)
         { return left.def < right.def; });

    int si = 0;
    int bi = 0;
    int sum = 0;

    while (si < s)
    {
        Ship ship = ships[si];
        Base base = bases[bi];

        if (bi >= b)
        {
            ans[ship.i] = sum;
            si++;
            continue;
        }

        if (base.def <= ship.attack)
        {
            sum += base.gold;
            bi++;
            continue;
        }

        ans[ship.i] = sum;
        si++;
    }

    for (int i = 0; i < s; i++)
        cout << ans[i] << " \n"[i == s - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}