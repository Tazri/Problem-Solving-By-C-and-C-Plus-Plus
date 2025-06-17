// link : https://codeforces.com/problemset/problem/704/A
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

struct Noti
{
    int id;
    int index;
};

void program()
{
    int n, q;
    cin >> n >> q;
    vector<vector<bool>> apps(n + 1);
    vector<int> last_read(n + 1, -1);
    vector<Noti> notifs;
    int last_t = -1;
    int cnt = 0;
    for (int qi = 0; qi < q; qi++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;

            apps[x].push_back(false);
            Noti appNoti;
            appNoti.id = x;
            appNoti.index = apps[x].size() - 1;
            notifs.push_back(appNoti);
            cnt++;

            cout << cnt << endl;
        }
        else if (type == 2)
        {
            int x;
            cin >> x;

            for (int i = last_read[x] + 1; i < apps[x].size(); i++)
            {
                if (apps[x][i])
                    continue;
                apps[x][i] = true;
                cnt--;
            }

            last_read[x] = apps[x].size() - 1;

            cout << cnt << endl;
        }
        else
        {
            int t;
            cin >> t;

            if (t <= last_t)
            {
                cout << cnt << endl;
                continue;
            }

            for (int i = last_t + 1; i < t && i < notifs.size(); i++)
            {
                Noti appNoti = notifs[i];

                if (apps[appNoti.id][appNoti.index])
                    continue;

                apps[appNoti.id][appNoti.index] = true;
                cnt--;
            }

            last_t = t - 1;
            cout << cnt << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}