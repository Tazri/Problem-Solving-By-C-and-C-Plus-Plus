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

struct Team
{
    string name;
    string problem;
    string status;
    int time;
    Team()
    {
        cin >> name >> problem >> time >> status;
    }
};

void program()
{
    int n;
    cin >> n;
    vector<Team> subs(n);
    vector<string> names;
    set<string> st;
    map<string, int> accepted;
    map<string, int> unknown;

    for (Team &team : subs)
    {
        if (!st.count(team.name))
        {
            st.insert(team.name);
            names.push_back(team.name);
        }

        if (team.status == "Accepted")
        {
            accepted[team.name]++;
        }

        if (team.status == "Accepted")
        {
            accepted[team.name]++;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}