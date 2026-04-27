#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool check(vector<int>&arr,int days,int man){
    ll pp=0;
    
    for(int &x:arr){
        pp+=(x/days);
    }
    return (pp>=man);
}




int main() {
	// your code goes here
int n,m;
cin>>n>>m;
vector<int>arr(n);
for(int &x:arr){
    cin>>x;
}
int l=1;
int r=*max_element(arr.begin(), arr.end());
int count_d=0;



while(l<=r){
    int mid=l+(r-l)/2;
    
    if(check(arr,mid,m)){
        l=mid+1;
        count_d=mid;
    }else{
        r=mid-1;
    }
    
}
cout<<count_d<<"\n";
return 0;
}
