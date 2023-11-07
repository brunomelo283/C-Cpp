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
    int n1,n2;
    int c, cont, qd, dig;
    map<int, int> mp;
    while(cin >> n1 >> n2)
    {      
          
          c=0;
          for(int i=n1; i <= n2; i++)
          {
            cont = 0;
            mp.clear();
            qd = qtdDigitos(i);
            for(int j=1; j <= qd; j++)
            {
                dig = getDigito(i, j);
                mp[dig]++;
            }
            for(int j=1; j <= qd; j++)
            {
                dig = getDigito(i, j);
                if(mp[dig] == 1)
                    cont++;
            }
            if(cont == qd)
                c++;
          }


          cout << c << endl;
    }

  
    return 0;
}