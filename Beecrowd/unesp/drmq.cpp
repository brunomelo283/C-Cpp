#include <bits/stdc++.h>

using namespace std;


int f(int e1, int e2)
{
	return e1 | e2;
}


void construct_segment_tree(vector<int> &segtree,
                            vector<int> &a, int n)
{

    for (int i = 0; i < n; i++)
        segtree[n + i] = a[i];


    for (int i = n - 1; i >= 1; i--)
        segtree[i] = f(segtree[2 * i],
                         segtree[2 * i + 1]);
}

void update(vector<int> &segtree, int pos, int value,
            int n)
{

    pos += n;


    segtree[pos] = value;

    while (pos > 1)
    {

    
        pos >>= 1;

 
        segtree[pos] = f(segtree[2 * pos],
                           segtree[2 * pos + 1]);
    }
}

int range_query(vector<int> &segtree, int left, int right, int n)
{

    left += n;
    right += n;


    int mi = 0;

    while (left < right)
    {


        if (left & 1)
        {
            mi = f(mi, segtree[left]);

  
            left++;
        }


        if (right & 1)
        {

            
            right--;

            mi = f(mi, segtree[right]);
        }

       
        left /= 2;
        right /= 2;
    }
    return mi;
}

int main(void)
{

    vector<int> v;
    

    int q, c;
    cin >> q >> c;

    v.resize(q);
    for (int i = 0; i < q; ++i)
        cin >> v[i];

    vector<int> st(2*q);
    construct_segment_tree(st, v, q);

    while (c--)
    {
        int op, n1, n2;
        cin >> op >> n1 >> n2;
        if (op == 1)
        {
            update(st, n1-1, n2, q);
        }
        else
        {
            int res = range_query(st, n1 - 1, n2 , q);
            cout << res << endl;
        }
    }
    return 0;
}
