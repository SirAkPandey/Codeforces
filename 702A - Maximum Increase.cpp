#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    int ans = 1, mx = 1;

    for(int i = 1; i < n; i++){
        if(a[i - 1] < a[i]) ans++;
        else ans = 1;
        mx = max(mx, ans);
    }

    cout << mx << endl;
    return 0;
}