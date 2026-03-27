// link : https://codeforces.com/contest/2209/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
// #define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct DS
{
    vector<pair<int, char>> v;

    void sortV()
    {
        sort(v.rbegin(), v.rend());
    }

    void init()
    {
        int r, g, b;
        cin >> r >> g >> b;
        v.push_back({r, 'R'});
        v.push_back({g, 'G'});
        v.push_back({b, 'B'});
        sortV();
    }

    char takeFirst()
    {
        char ch = v[0].second;
        v[0].first--;
        sortV();
        return ch;
    }

    char except(char xch)
    {
        char ch = 'x';
        for (int i = 0; i < 3; i++)
        {
            if (v[i].second != xch && v[i].first > 0)
            {
                v[i].first--;
                ch = v[i].second;
                break;
            }
        }

        sortV();

        return ch;
    }

    char exceptOne(char xch, char cp)
    {
        vector<int> found;

        for (int i = 0; i < 3; i++)
        {
            if (v[i].second != xch && v[i].first > 0)
                found.push_back(i);
        }

        if (found.size() == 0)
            return 'x';

        if (found.size() == 1)
        {
            int it = found.front();
            char ch = v[it].second;
            v[it].first--;
            sortV();

            return ch;
        }

        int it1 = found[0];
        int it2 = found[1];

        if (v[it1].first > v[it2].first)
        {
            char ch = v[it1].second;
            v[it1].first--;
            sortV();
            return ch;
        }
        if (v[it2].first > v[it1].first)
        {
            char ch = v[it2].second;
            v[it2].first--;
            sortV();
            return ch;
        }

        if (v[it1].second == cp)
        {
            char ch = v[it1].second;
            v[it1].first--;
            sortV();
            return ch;
        }

        if (v[it2].second == cp)
        {
            char ch = v[it2].second;
            v[it2].first--;
            sortV();
            return ch;
        }

        return 'x';
    }

    char exceptTwo(char x1, char x2, char cp)
    {
        vector<int> found;

        for (int i = 0; i < 3; i++)
        {
            if (v[i].second != x1 && v[i].second != x2 && v[i].first > 0)
                found.push_back(i);
        }

        if (found.size() <= 0)
            return 'x';

        if (found.size() == 1)
        {
            int it = found.front();
            char ch = v[it].second;
            v[it].first--;
            sortV();
            return ch;
        }

        int it1 = found[0];
        int it2 = found[1];

        if (v[it1].first > v[it2].first)
        {
            char ch = v[it1].second;
            v[it1].first--;
            sortV();
            return ch;
        }

        if (v[it2].first > v[it1].first)
        {
            char ch = v[it2].second;
            v[it2].first--;
            sortV();
            return ch;
        }

        if (v[it1].second == cp)
        {
            char ch = v[it1].second;
            v[it1].first--;
            sortV();
            return ch;
        }

        if (v[it2].second == cp)
        {
            char ch = v[it2].second;
            v[it2].first--;
            sortV();

            return ch;
        }

        return 'x';
    }
};

void _DIBBA(int _DIBBA_NO)
{
    DS ds;
    ds.init();

    string s;

    for (int i = 0; i < 3; i++)
    {
        if (s.empty())
        {
            s.push_back(ds.takeFirst());
        }
        else if (s.size() == 1)
        {
            char ch = ds.except(s.back());

            if (ch == 'x')
                break;

            s.push_back(ch);
        }
        else if (s.size() == 2)
        {
            char xcp = s[1];
            char cp = s[0];

            char ch = ds.exceptOne(xcp, cp);

            if (ch == 'x')
                break;
            s.push_back(ch);
        }
    }

    if (s.size() < 3)
    {
        cout << s << endl;
        return;
    }

    while (true)
    {
        int curr = s.size();
        int x1 = s[curr - 1];
        int x2 = s[curr - 3];
        int cp = s[curr - 2];

        char ch = ds.exceptTwo(x1, x2, cp);
        if (ch == 'x')
            break;

        s.push_back(ch);
    }

    cout << s << endl;
}

// void temp(int caseno)
// {
//     int r, g, b;
//     cin >> r >> g >> b;
//     if (caseno == 652)
//         cout << r << " " << g << " " << b << endl;
// }

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;

    // if (t == 10000)
    // {
    //     for (int i = 1; i <= t; i++)
    //         temp(i);
    // }
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}