#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a[200001];
    cin>>n;
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    long long sum = 0,need = a[n-1];
    for(long long i=n-1; i>=0; i--){
        if(a[i] >= need){
            sum += need;
            need--;
        }
        else if(need > a[i]){
            sum += a[i];
            need = a[i] - 1;
        }
        if(need == 0)
            break;
    }
    cout<<sum<<endl;

    return 0;
}