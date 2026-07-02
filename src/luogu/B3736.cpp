#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << gcd(gcd(x,y),z) << '\n';
    return 0;
}