#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,x,y, temp;
    vector<long long> a;
    cin>>n>>x>>y;
    for(int i=0; i<n ;i++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++){
        bool check=true;
        for(int j=max(0LL,i-x);j<i;j++){
            if(a[j]<=a[i]){
                check=false;
                break;
            }
        }
        if(check){
            for(int k=i+1;k<=min(n-1,i+y);k++){
                if(a[k]<=a[i]){
                    check=false;
                    break;
                }
            }
        }
        if(check){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}