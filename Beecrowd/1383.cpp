#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    int n;
    bool flag;
    int m[9][9];
    int x;
    cin >> n;
    int cont = 0;
    int ins = 1;
    while (n--)
    {
        flag = true;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                cin >> x;
                m[i][j] = x;
            }

        for (int i = 1; i <= 9 && flag; i++)
        {
            for (int j = 0; j < 9 && flag; j++)
            {
                cont = 0;
                for (int k = 0; k < 9; k++)
                {
                    if (i == m[j][k])
                        cont++;
                }

                if (cont > 1)
                    flag = false;
            }
        }

        for (int i = 1; i <= 9 && flag; i++)
        {
            for (int j = 0; j < 9 && flag; j++)
            {
                cont = 0;
                for (int k = 0; k < 9; k++)
                {
                    if (i == m[k][j])
                        cont++;
                }

                if (cont > 1)
                    flag = false;
            }
        }

        for (int br = 0; br < 9 && flag; br += 3)
        {
            for (int bc = 0; bc < 9 && flag; bc += 3)
            {
                for (int i = 1; i <= 9 && flag; i++)
                {
                    cont = 0;
                    for (int j = br; j < br + 3; j++)
                    {
                        for (int k = bc; k < bc + 3; k++)
                        {
                            if (i == m[j][k])
                                cont++;
                        }
                    }

                    if (cont > 1)
                        flag = false;
                }
            }
        }

        cout << "Instancia " << ins << endl;
        if (flag)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
        ins++;

        cout << endl;
    }

    return 0;
}