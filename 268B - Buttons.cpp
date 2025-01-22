#include <iostream>
using namespace std;

int main(){
    long long sum=0, n;
    cin >> n;
    // 1*(n-1) + 2*(n-2)+ 3*(n-3) + ... + n*(n-n)+n
    for(int i=1; i<=n; i++){
        sum += i*(n-i);
    }
    cout << sum+n<< endl;
    return 0;
}