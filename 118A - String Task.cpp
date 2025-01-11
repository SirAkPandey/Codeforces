#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    string s,t;
    cin>>s;
    n = s.length();

    for(long long i=0; i<n; i++){
        s[i]=towlower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else{
            t += '.';
            t += s[i];
        }
    }
    cout<<t<<endl;

    return 0;
}
