#include <iostream>
using namespace std;

int n,k;
int a[100005];

long long cnt(int mx){
    long long res = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] < mx){
            res += (mx-a[i]) / k;
        }
    }
    return res;
}

int main(){
    cin >> n >> k;
    int remainder;
    int mm = -1;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mm = max(a[i],mm);
        if(i == 1){
            remainder = a[i] % k;
        } else{
            if(a[i] % k == remainder) continue;
            else{
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES ");
    printf("%lld\n",cnt(mm));
    return 0;
}