#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    string s1;
    int n, i = 0;
    double sum, m;

    while (getline(cin, s1))
    {
        cin >> n;
        sum += n;
        i++;
        cin.ignore();
    }

    m = sum / i;

    cout << fixed << showpoint;
    cout << setprecision(1);
    cout << m << endl;
    return 0;
}