#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t, x, y, z;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        vector<long long> v = {x, y, z};
        sort(v.begin(), v.end()); // Sort to ensure v[0] <= v[1] <= v[2]
 
        if (v[1] == v[2]) { // Ensure at least two maximum values exist
            cout << "YES\n";
            cout << v[0] << " " << v[0] << " " << v[1] << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}