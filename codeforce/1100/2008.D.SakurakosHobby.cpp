// link : https://codeforces.com/problemset/problem/2008/D
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
    vector<int> perm(n + 1);
    vector<int> ans(n + 1);
    vector<bool> isDead(n + 1, false);
    vector<bool> isBlack(n + 1, false);
    vector<int> deads;
    vector<bool> done(n + 1, false);
    string color;
    deads.reserve(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> perm[i];

        if (perm[i] == i)
        {
            isDead[i] = true;
            deads.push_back(i);
            done[i] = true;
        }
    }

    cin >> color;

    color = "0" + color;

    for (int i = 1; i <= n; i++)
    {
        if (color[i] == '0')
            isBlack[i] = true;
    }

    for (int i : deads)
    {
        if (isBlack[i])
            ans[i] = 1;
    }

    queue<int> q;
    set<int> visit;
    for (int i = 1; i <= n; i++)
    {
        if (done[i])
            continue;

        int type;
        int cnt = 0;

        int curr = i;

        while (1)
        {
            if (isBlack[curr])
                cnt++;
            q.push(curr);

            int next = perm[curr];

            if (isDead[next])
            {
                type = 1;
                if (isBlack[next])
                    cnt++;
                break;
            }

            if (visit.count(next))
            {
                type = 2;
                break;
            }

            visit.insert(curr);
            curr = next;
        }

        if (type == 2)
        { // its cycle
            while (q.size() > 0)
            {
                int qi = q.front();
                ans[qi] = cnt;
                done[qi] = true;
                q.pop();
            }
        }
        else if (type == 1)
        { // straigt to go in dead

            while (q.size() > 0)
            {
                int qi = q.front();
                ans[qi] = cnt;
                done[qi] = true;
                q.pop();

                if (isBlack[qi])
                    cnt--;
            }
        }

        visit.clear();
    }

    // printing answer
    cout << ans[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
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

/*
my custom example
1 2 3 4 5 -> index
2 4 3 5 3 -> permutation
0 0 1 0 1 -> color

ans
3 2 0 1 0

*/