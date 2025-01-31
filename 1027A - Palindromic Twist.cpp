#include <bits/stdc++.h>
using namespace std;


int main (void){

    int tc,n,i,h,d;
    char str[105];
    bool k;

    scanf("%d",&tc);

    while (tc--){
        scanf("%d\n%s",&n,str);

        h = n/2;
        k = true;

        for (i=0; i<h; i++){
            d = (int)(abs(str[i]-str[n-i-1]));

            if (!(d == 0 || d == 2 )){
                k = false;
                printf("NO\n");
                break;
           }
        }

        if (k) printf("YES\n");
    }

    return 0;
}