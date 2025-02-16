#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        double  A,B;
        cin>>n>>m;
        A = n, B = m;
        long long ans = 0;
        ans = ceil((A*B) / 2);
        cout<<ans<<endl;
    }
    return 0;
}
