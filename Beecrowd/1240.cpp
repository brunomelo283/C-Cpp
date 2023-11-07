#include<bits/stdc++.h>

using namespace std;


int qtdDigitos(int n) {
        if (n == 0) {
            return 1;
        }
        int cont = 0;
        while (n > 0) {
            cont++;
            n /= 10;
        }
        return cont;
}

int getDigito(int num, int digito)
{
    int d = pow(10, digito-1);
    return (num/d) % 10;
}

int main(void)
{
    int n;

    int n1, n2, q,d1,d2;


    cin >> n;

    while(n--)
    {
        cin >> n1 >> n2;
        bool f = false;
        q = qtdDigitos(n2);

        for(int i=1; i <= q; i++)
        {
            d1 = getDigito(n1, i);
            d2 = getDigito(n2, i);

            if(d1 == d2)
                f = true;
            else
            {
                f=false;
                break;
            }
        } 


        if(f)  
            cout << "encaixa\n";
        else
            cout << "nao encaixa\n";
    }


    return 0;
}