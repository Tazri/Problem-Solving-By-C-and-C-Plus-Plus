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
    int n, m;
    cin >> n >> m;
    vector<vector<string>> result(m + 1, vector<string>(3, ""));
    map<string, int> score;

    for (int i = 0; i < n; i++)
    {
        string name;
        int r, sc;
        cin >> name >> r >> sc;

        score[name] = sc;

        if (result[r][0] == "")
        {
            result[r][0] = name;
        }
        else if (result[r][1] == "")
        {
            if (score[name] >= score[result[r][0]])
            {
                string temp = result[r][0];
                result[r][0] = name;
                result[r][1] = temp;
            }
            else
                result[r][1] = name;
        }
        else if (result[r][2] == "")
        {
            if (score[name] >= score[result[r][0]])
            {
                result[r][2] = result[r][1];
                result[r][1] = result[r][0];
                result[r][0] = name;
            }
            else if (score[name] >= score[result[r][1]])
            {
                result[r][2] = result[r][1];
                result[r][1] = name;
            }
            else
            {
                result[r][2] = name;
            }
        }
        else
        {
            if (score[name] >= score[result[r][0]])
            {
                result[r][2] = result[r][1];
                result[r][1] = result[r][0];
                result[r][0] = name;
            }
            else if (score[name] >= score[result[r][1]])
            {
                result[r][2] = result[r][1];
                result[r][1] = name;
            }
            else if (score[name] >= score[result[r][2]])
            {
                result[r][2] = name;
            }
        }
    }

    for (int r = 1; r <= m; r++)
    {
        if (result[r][2] == "")
            cout << result[r][0] << " " << result[r][1] << endl;
        else if (score[result[r][2]] == score[result[r][1]])
            cout << "?" << endl;
        else
            cout << result[r][0] << " " << result[r][1] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}