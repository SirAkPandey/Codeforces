#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long t;
    cin>>t;
    while(t--){
        string s1, s2, s3, s4;
        bool flag=false;
        long long sum=0;
        cin>>s1>>s2;
        long long n1 = s1.size(), n2=s2.size();
        sort(s1.begin(), s1.end());

        for(int i=0; (i+n1-1)<n2; i++){
            s3=s2.substr( i, n1);
            sort(s3.begin(), s3.end());
            if(s1==s3){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}