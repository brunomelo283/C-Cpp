#include <bits/stdc++.h>

using namespace std;



int main(void)
{

    int r, n, dif, total, c;
    int i=1;
    while(cin >> r >> n && r && n)
    {
        c=1;
        if(n >= r)
        {
            cout << "Case " << i << ": 0" << endl; 
        }
        else{
            dif = r - n;
            total = n * 26;
            if(dif <= total)
            {
                int sum =0;
                for(int a=1; a <= 26; a++)
                {
                    if(n*(a+1) >= r)
                        break;
                    c++;
                }
                cout << "Case " << i << ": " << c << endl;
            }else{
                cout << "Case " << i << ": impossible" << endl; 
            }
        }
        i++;
    }
    return 0;
}
