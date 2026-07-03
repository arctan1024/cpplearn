#include <iostream>
using namespace std;

const double N = 1e-7;
int n;
double l,r;
double a[15];

double f(double x){
    double res = 0;
    for(int i = n; i >= 0; i--){
        double temp = 1;
        for(int j = 1; j <= i; j++){
            temp *= x;
        }
        res += a[i]*temp;
    }
    return res;
}

int check(double i){
    double fx = f(i);
    double rx = f(i+1e-6);
    double lx = f(i-1e-6);
    if(rx > fx && lx < fx) return -1;
    if(rx < fx && lx < fx) return 0;
    if(rx < fx && lx > fx) return 1;
    return -2;
}

double sl(double l,double r){
    while(r - l > N){
        double mid = (l+r)/2;
        if(check(mid) == -1) l = mid;
        else if(check(mid) == 1) r = mid;
        else if(check(mid) == 0) return mid;
    }
    return l;
}

int main(){
    cin >> n >> l >> r;
    for(int i = n; i >= 0; i--){
        cin >> a[i];
    }
    printf("%.5f\n",sl(l,r));
    return 0;
} //这能AC是我没想到的，只能说题目数据太水还有运气太好，另解看P3392_Re.cpp