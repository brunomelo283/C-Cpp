#include <bits/stdc++.h>

using namespace std;




int main(void)
{

    int n, x, y, r1, r2,r3;

    cin >> n;
    while(n--)
    {
        
        cin >> x >> y;

        r1 = pow((3*x), 2) + pow(y, 2);
        r2 = 2 * pow(x, 2) + pow((5*y), 2);
        r3 = -100*x + pow(y, 3);


        if(r1 > r2 && r1 > r3)
            cout << "Rafael ganhou" << endl;
        else if(r2 > r1 && r2 > r3)
            cout << "Beto ganhou" << endl;
        else if(r3 > r1 && r3 > r2)
            cout << "Carlos ganhou" << endl;
    }
    return 0;
}
