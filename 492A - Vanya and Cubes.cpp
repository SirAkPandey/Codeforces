#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int level=0, count=1, sum=0;
    
    while(sum<=n){

        sum += (count*(count+1))/2;
        count++;
        level++;

        if((count*(count+1))/2 > n - sum) break;
    }

    cout<<level<<endl;
    return 0;

}