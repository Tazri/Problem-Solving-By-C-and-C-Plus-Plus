// link : https://codeforces.com/contest/1974/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vn;
    vector<int> vs;
    vector<int> ve;
    vector<int> vw;
    int cntn = 0;
    int cnts = 0;
    int cntns = 0;
    int cnte = 0;
    int cntw = 0;
    int cntwe = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];

        if (ch == 'N')
            vn.push_back(i);
        else if (ch == 'S')
            vs.push_back(i);
        else if (ch == 'W')
            vw.push_back(i);
        else if (ch == 'E')
            ve.push_back(i);

        if (ch == 'N')
            cntn++;
        else if (ch == 'S')
            cnts++;
        else if (ch == 'W')
            cntw++;
        else if (ch == 'E')
            cnte++;

        if (cntn > 0 && cnts > 0)
        {
            cntns++;
            cntn--;
            cnts--;
        }

        if (cntw > 0 && cnte > 0)
        {
            cntwe++;
            cntw--;
            cnte--;
        }
    }

    // cout << "n : " << cntn << " s : " << cnts << " ns : " << cntns << endl;
    // cout << "w : " << cntw << " e : " << cnte << " we : " << cntwe << endl;

    if (cntn % 2 != 0 || cnts % 2 != 0 || cntw % 2 != 0 || cnte % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (cntn == 0 && cnts == 0 && cntw == 0 && cnte == 0 && cntns + cntwe <= 1)
    {
        cout << "NO" << endl;
        return;
    }

    string ans(n, 'H');
    if (cntwe % 2 == 1 && cntns % 2 == 1)
    {
        cntwe--;
        cntns--;
        vw.pop_back();
        ve.pop_back();
        ans[vn.back()] = 'R';
        ans[vs.back()] = 'R';
        vn.pop_back();
        vs.pop_back();
    }

    for (int i = 0; i < cntn / 2; i++)
    {
        ans[vn.back()] = 'R';
        vn.pop_back();
    }

    for (int i = 0; i < cnts / 2; i++)
    {
        ans[vs.back()] = 'R';
        vs.pop_back();
    }

    for (int i = 0; i < cntw / 2; i++)
    {
        ans[vw.back()] = 'R';
        vw.pop_back();
    }

    for (int i = 0; i < cnte / 2; i++)
    {
        ans[ve.back()] = 'R';
        ve.pop_back();
    }

    for (int i = 0; i < cntns / 2; i++)
    {
        ans[vn.back()] = 'R';
        ans[vs.back()] = 'R';
        vn.pop_back();
        vs.pop_back();
    }

    for (int i = 0; i < cntwe / 2; i++)
    {
        ans[vw.back()] = 'R';
        ans[ve.back()] = 'R';
        vw.pop_back();
        ve.pop_back();
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}