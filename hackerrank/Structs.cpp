// link : https://www.hackerrank.com/challenges/c-tutorial-struct/problem
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

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

void program()
{
    Student s1;
    cin >> s1.age >> s1.first_name >> s1.last_name >> s1.standard;

    cout << s1.age << " " << s1.first_name << " " << s1.last_name << " " << s1.standard << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}