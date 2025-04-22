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
    vector<string> arr = {"and", "not", "that", "the", "you"};
    int n;
    cin >> n;

    bool isOk = false;

    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;

        if (isOk)
            continue;

        for (string word : arr)
        {
            if (word == w)
            {
                isOk = true;
                break;
            }
        }
    }

    if (isOk)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}