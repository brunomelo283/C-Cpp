#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    
    long long int time, wait;
    int n, w, c;

    while (cin >> n)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> proc;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        while (n--)
        {
            cin >> w >> c;
            proc.push({w, c});
        }

        wait = 0;
        time = proc.top().first;

        while (!proc.empty())
        {
            if (proc.top().first > time)
            {
                if (q.top().second <= time)
                    wait += time - q.top().second;
                else
                    time = q.top().second;

                time += q.top().first;
                q.pop();
            }

            q.push({proc.top().second, proc.top().first});
            proc.pop();
        }

        while (!q.empty())
        {
            if (q.top().second <= time)
                wait += time - q.top().second;
            else
                time = q.top().second;

            time += q.top().first;
            q.pop();
        }

        cout << wait << endl;
    }
    return 0;
}