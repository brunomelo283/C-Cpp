#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<pair<int, int>> r;

    for (int i = 0; i < n; i++) {
        int ini, fim;
        cin >> ini >> fim;
        r.insert({ini, fim}); 
    }

    int c = 0;
    int h = 0;

    for (const auto& reunioes : r) {
        if (reunioes.first >= h) {
            c++;            
        }
        h = reunioes.second;
    }

    cout << c << endl;
    return 0;
}