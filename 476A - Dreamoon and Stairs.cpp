#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, m;
	scanf("%lld%lld",&n,&m);
	long long ans=n/2 + n%2; 

	while(ans%m){
		ans++;
	}

	if(ans>n){
        cout<<"-1"<<endl;
    }
	else{
        cout<<ans<<endl;
    }
    return 0;
}
