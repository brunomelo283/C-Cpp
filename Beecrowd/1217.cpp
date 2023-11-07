#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    string s1;
    int n, i = 0,cp;
    double sumD, sumP, mD, mP, p;
    cin >> n;
    while (i < n)
    {
        cp=0;
        cin >> p;
        cin.ignore();
        getline(cin, s1);

        stringstream ss(s1);
        string word;
        while (ss >> word)
        { 
            cp++;
        }
        sumD += cp;
        sumP += p;     

        cout << "day "   << i + 1 << ": " << cp << " kg" << endl;
       
        i++;
    }

    mD = sumD / n;
    mP = sumP / n;

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << mD  << " kg by day" << endl;
    cout << "R$ " << mP  << " by day" << endl;
    return 0;
}