#include <bits/stdc++.h>

using namespace std;

#define ll long long

 int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n,m,p;
        cin>>n>>m>>p;
        vector<int>v(m);
        for(auto i=0;i<m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while (p--)
        {
            /* code */
            int a;
            cin>>a;
            auto it=upper_bound(v.begin(),v.end(),a);
            if(it==v.begin())
            {
               cout<<v[0]-1<<endl; 

            }
            else if(it==v.end())
            {
                cout<<n-v[m-1]<<endl;

            }
            else{int idx=it-v.begin();
                int r_t=v[idx];
                int l_t=v[idx-1];
                cout<<(r_t-l_t)/2<<endl;


            }
        }
        
    
    }
    

    return 0;
}