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

void program(int caseno, int n)
{
    cout << "Scenario #" << caseno << endl;
    vector<queue<int>> teams(n + 123);
    map<int, int> teamId;
    queue<int> q;
    int id = 1;
    for (int i = 0; i < n; i++)
    {
        int total;
        cin >> total;
        for (int j = 0; j < total; j++)
        {
            int person;
            cin >> person;
            teamId[person] = id;
        }
        id++;
    }

    while (true)
    {
        string command;
        cin >> command;

        if (command == "STOP")
            break;
        if (command == "ENQUEUE")
        {
            int person;
            cin >> person;
            int tid = teamId[person];

            if (teams[tid].empty())
                q.push(tid);
            teams[tid].push(person);
            continue;
        }
        int fid = q.front();

        int output = teams[fid].front();
        cout << output << endl;
        teams[fid].pop();

        if (teams[fid].empty())
            q.pop();
    }

    cout << endl;
}

int32_t main()
{
    optimize();
    int t = 1;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        program(t, n);
        t++;
    }
    return 0;
}