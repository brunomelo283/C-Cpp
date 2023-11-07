#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    char g;
    int i = 0;
    string s1, num;
    int n, t, f,m;
    stringstream ss;
    map<int, int> mp;
    map<char, int> mp2;
    while (cin >> n)
    {
        

        
        if(i > 0)
            cout << endl;

        cin.ignore();
        getline(cin, s1);

        ss.clear();

        ss  << s1;

        while(ss >> t >> g)
        {
            if(t == n)
            {
                mp[t]++;

                if(g == 'F')
                {
                    mp2[g]++;
                }else{
                    mp2[g]++;
                }
            }
        }
       

        cout << "Caso " << ++i << ":" << endl;
        cout << "Pares Iguais: " << mp[n] << endl;
        cout << "F: " << mp2['F'] << endl;
        cout << "M: " << mp2['M'] << endl;
        
        mp.clear();  
        mp2.clear();          
    }

    return 0;
}
