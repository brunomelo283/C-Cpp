#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2,res, s1, s2;
    while(cin >> n1 >> n2)
    {
        if(n1 >= n2)
        {
            s1 = n1;
            s2 = n2;
        }else{
            s1 = n2;
            s2 = n1;
        }
        
        if(s1 == s2)
            res = 0;
        else
            res = (s1 - s2) - 1;

        cout << res << endl;
    }
    return 0;
}