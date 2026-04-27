#include <bits/stdc++.h>

using namespace std;

#define ll long long

 int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        long long total=0;
        priority_queue<int>pq;
        for(auto i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>0)
            {pq.push(x);}
            else{
                if(!pq.empty())
                {
                    total+=pq.top();
                    pq.pop();

                }
            }
        }
        cout<<total<<endl;


    }
    

    return 0;
}