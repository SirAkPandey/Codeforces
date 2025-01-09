#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans="";
    int i=0, j = 2;
    while(i<n){
        ans += s[i];
        i = i+j;
        j++;
        

    }
    cout<<ans<<endl;
    return 0;
}