#include <iostream>
using namespace std;

const double N = 1e-7;
int n;
double l,r;
double a[15];

double f(double x){
    double res = a[n];
    for(int i = n; i >= 1; i--){
        res = res * x + a[i-1];
    }
    return res;
}

double sl(double l,double r){
    while(r - l > N){
        double m1 = l + (r-l)/3;
        double m2 = r - (r-l)/3;
        if(f(m1) > f(m2)) r = m2;
        else l = m1;
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
}