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
        vector<int>v(n);
        bool found=false;
        for (auto i=1;i<=n;i++)
        { cin>>v[i];
        
        }
        int l=1,r=n;
        int coto=1,boro=n;
        while (l<r)
        {
            /* code */
            if(v[l]==coto)
            {
                l++;
                coto++;
            }
            else if(v[l]==boro)
            {
                l++;
                boro--;


            }
            else if(v[r]==coto)
            {
                r--;
                coto++;
            }
            else if(v[r]==boro)
            {
                r--;
                boro--;
            }
            else{
                cout<<l<<" "<<r<<endl;
                found=true;
                break;

                
            }
        }
        if(found==false)
        cout<<-1<<endl;
        
        
    }
    

    return 0;
}