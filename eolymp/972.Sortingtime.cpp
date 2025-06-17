// link : https://basecamp.eolymp.com/en/problems/972
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

struct Time
{
    int a, b, c;
};

void program()
{
    int n;
    cin >> n;
    vector<Time> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
    }

    sort(arr.begin(), arr.end(), [](Time left, Time right)
         {
        if(left.a == right.a){
            if(left.b == right.b){
                return left.c < right.c;
            }

            return left.b < right.b;
        }

        return left.a < right.a; });

    for (Time t : arr)
    {
        cout << t.a << " " << t.b << " " << t.c << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}