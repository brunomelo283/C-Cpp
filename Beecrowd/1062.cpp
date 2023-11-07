#include <bits/stdc++.h>

using namespace std;

void clearStack(stack<int> &s)
{
    while (!s.empty())
    {
        s.pop();
    }
}

int main(void)
{

    
    int n, elem, c;
    stack<int> t, e;
    vector<int> v;

    while (cin >> n && n)
    {
    
        while (true)
        {
            for (int i = n; i > 0; i--)
            {
                t.push(i);
            }

            for (int i = 0; i < n; i++)
            {
                cin >> elem;
                v.push_back(elem);
                if (v[0] == 0)
                {
                    clearStack(t);
                    clearStack(e);
                    cout << endl;                  
                    break;
                }
            }

            if(v[0] == 0)
                break;
            for (int i = 0; i < n; i++)
            {
                while (!t.empty() && t.top() < v[i])
                {
                    e.push(t.top());
                    t.pop();
                }

                if (!t.empty() && t.top() == v[i])
                {
                    t.pop();
                }

                if (!e.empty() && e.top() == v[i])
                {
                    e.pop();
                }
            }
            if (t.empty() && e.empty())
                cout << "Yes\n";
            else
                cout << "No\n";

            clearStack(t);
            clearStack(e);
            v.clear();
        }
        v.clear();
    }

    return 0;
}