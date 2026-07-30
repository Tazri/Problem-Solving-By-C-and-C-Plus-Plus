// link : // link : https://codeforces.com/problemset/problem/1066/C

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

#define RIGHT 'R'
#define LEFT 'L'
struct details
{
    char query;
    int leftWas;
    int rightWas;
};

int main()
{
    optimize();
    unordered_map<int, details> m;
    int totalBooks = 0;
    int totalRight = 0;
    int totalLeft = 0;
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; i++)
    {
        char q;
        int book;

        cin >> q >> book;

        if (q == RIGHT || q == LEFT)
        {
            details newDetails;
            newDetails.query = q;
            newDetails.rightWas = totalRight;
            newDetails.leftWas = totalLeft;
            m[book] = newDetails;

            totalBooks++;
            if (q == RIGHT)
                totalRight++;
            else
                totalLeft++;
            continue;
        }

        // get the book details
        details bookDetails = m[book];

        // cout << "query : " << bookDetails.query << endl;
        // cout << "leftWas : " << bookDetails.leftWas << endl;
        // cout << "rightWas : " << bookDetails.rightWas << endl;
        // cout << "totalBook : " << totalBooks << endl;
        // cout << "totalLeft : " << totalLeft << endl;
        // cout << "totalRight : " << totalRight << endl;

        if (bookDetails.query == RIGHT)
        {
            int rightInside = (totalRight - 1) - bookDetails.rightWas;
            int leftInside = (totalBooks - 1) - rightInside;

            int minNeed = min(rightInside, leftInside);
            cout << minNeed << endl;
        }
        else
        {
            int leftInside = (totalLeft - 1) - bookDetails.leftWas;
            int rightInside = (totalBooks - 1) - leftInside;

            int minNeed = min(rightInside, leftInside);
            cout << minNeed << endl;
        }
    }
    return 0;
}