#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int n, num, exp;
    char x, op;

    while (cin >> n)
    {
        queue<int> f1;
        queue<char> fop;
        for (int i = 0; i < n; i++)
        {
            cin >> num >> x >> exp;
            f1.push(num * exp);
            f1.push(exp - 1);
            if (i < n - 1)
            {
                cin >> op;
                fop.push(op);
            }
        }

        while (!f1.empty())
        {
            num = f1.front();
            f1.pop();
            exp = f1.front();
            f1.pop();
            if (!fop.empty())
            {
                op = fop.front();
                fop.pop();
                if(exp == 1)
                    cout << num << "x" <<  " " << op + " ";
                else
                    cout << num << "x" << exp << " " << op << " ";
            }
            else
            {   
                if(exp == 1)
                    cout << num << "x" << endl;
                else
                    cout << num << "x" << exp << endl;
            }
        }
    }

    return 0;
}
