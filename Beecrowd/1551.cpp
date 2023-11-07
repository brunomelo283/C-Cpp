#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, cont;
    string s;
    
    cin >> n;
    cin.ignore();
    while(n--) {
        vector<int> v(26,0);
        getline(cin,s);
        cont = 0;
        
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z' && !v[s[i] - 'a'] ) {
                v[s[i] - 'a'] = 1;
                cont++;
            }
        }
        
        if(cont == 26) 
            cout << "frase completa" << endl;
        else if(cont >= 13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;

    }
    
    

    return 0;
}