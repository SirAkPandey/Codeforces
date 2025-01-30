#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        int mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                mx=max({mx,i+1,n-i});
        }
        if(mx==0)
            cout<<n<<endl;
        else
            cout<<2*mx<<endl;
    }
    return 0;
}