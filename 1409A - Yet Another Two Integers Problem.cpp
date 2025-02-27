#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t, a, b, n, count=0;
    cin>>t;

    while(t--){
        cin>>a>>b;
        n = abs(b - a); 
        count = n / 10;
        if(n%10 > 0) count++;
        
        cout<<count<<endl;
    }

    return 0;
}