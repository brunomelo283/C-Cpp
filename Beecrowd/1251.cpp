#include <bits/stdc++.h>

using namespace std;

struct comp
{
    template <typename T>

    // Comparator function
    bool operator()(const T &l, const T &r) const
    {
        if (l.second != r.second)
        {
            return l.second < r.second;
        }
        return l.first > r.first;
    }
};

void sort(map<int, int> &m)
{
    
    set<pair<int, int>, comp> S(m.begin(), m.end());

    for (auto &it : S)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}

int main(void)
{
    string str;
    unsigned short int c =0;
    map<int, int> m;

    while (getline(cin, str))
    {
        if (c) {            
            cout << endl;
        }
        c=0;
        for (int i = 0; i < str.size(); i++)
        {
            m[str.at(i)] = m[str.at(i)] + 1;
            c++;
        }
        c++;
        sort(m);
        m.clear();
        
        
    }

    return 0;
}