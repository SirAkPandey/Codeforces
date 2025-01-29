#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, count=0, fours=0, sevens=0, sum=0;
    cin>>n;
    bool flag1=false, flag2=false;

    while(sum<=n){
        sum += 4;
        count++;
        if(abs(sum-n)%7==0){
            fours = count;
            sevens = abs(sum-n)/7;
            flag1=true;
            break;
        }
    }

    if(flag1){
        sum=0;
        for(int i=1; i<=fours; i++) sum = sum*10 +4;

        for(int i=1; i<=sevens; i++) sum = sum*10 +7;

        cout<<sum<<endl;
        return 0;
    }

    while(sum<=n){
        sum += 7;
        count++;
        if(abs(sum-n)%4==0){
            sevens = count;
            fours = abs(sum-n)/4;
            flag2=true;
        }
    }

    if(flag2){
        sum=0;
        for(int i=1; i<=sevens; i++) sum = sum*10 +7;

        for(int i=1; i<=fours; i++) sum = sum*10 +4;

        cout<<sum<<endl;
        return 0;
    }
    
    cout<<-1<<endl;
        return 0;
}