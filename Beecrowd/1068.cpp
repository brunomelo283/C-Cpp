#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    solve();
    return 0;
}


void solve()
{
    string s;
    while (cin >> s)
    {        
        stack<char> p;
        bool flag= true;
        if(s[0] == ')')
            flag = false;
        for (int i = 0; i < s.size() && flag; i++)
        {            
            if (s[i] == '(')
                p.push('(');
            if (s[i] == ')')
                if(p.empty())
                    flag = false;
                else
                    p.pop();                                            
        }

        if (!p.empty() || !flag)
            cout << "incorrect" << endl;
        else
            cout << "correct" << endl;
    }    
}