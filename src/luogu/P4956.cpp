#include <iostream>
using namespace std;

int sk(int n){
    int temp = n / 52;
    int i = 1;
    while(true){
        if((temp-21*i) % 7 == 0 && (temp-21*i)/7 <= 100){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int k = sk(n);
    int x = (n/52-21*k) / 7;
    printf("%d\n%d\n",x,k);
    return 0;
}