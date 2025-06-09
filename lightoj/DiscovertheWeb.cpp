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
    vector<string> backward;
    vector<string> forward;
    string current_page = "http://www.lightoj.com/";

    while (true)
    {
        string command;
        cin >> command;

        if (command == "QUIT")
            return;

        if (command == "VISIT")
        {
            forward.clear();
            backward.push_back(current_page);
            cin >> current_page;
            cout << current_page << endl;
        }
        else if (command == "FORWARD")
        {
            if (forward.empty())
            {
                cout << "Ignored" << endl;
                continue;
            }

            backward.push_back(current_page);
            current_page = forward.back();
            forward.pop_back();

            cout << current_page << endl;
        }
        else if (command == "BACK")
        {
            if (backward.empty())
            {
                cout << "Ignored" << endl;
                continue;
            }

            forward.push_back(current_page);
            current_page = backward.back();
            backward.pop_back();

            cout << current_page << endl;
        }
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        program();
    }
    return 0;
}