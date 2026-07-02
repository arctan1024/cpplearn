#include <bits/stdc++.h>
using namespace std;

vector<int> mul(const vector<int>& aa,const vector<int>& bb){
    vector<int> a = aa;
    vector<int> b = bb;
    vector<int> ans(a.size() + b.size(),0);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int lena = a.size();
    int lenb = b.size();
    for(int i = 0; i < lena; i++){
        for(int j = 0; j < lenb; j++){
            ans[i+j] += a[i] * b[j];
            if(ans[i+j] >= 10){
                ans[i+j+1] += ans[i+j] / 10;
                ans[i+j] %= 10;
            }
        }
    }
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    reverse(ans.begin(),ans.end());
    return ans;
}

vector<int> tovec(long long n){
    if(n == 0) return {0};
    vector<int> res;
    while(n > 0){
        int temp = n % 10;
        res.push_back(temp);
        n /= 10;
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<int> mod(const vector<int>& a,long long m){
    long long res = 0;
    for(int num : a){
        res = (res * 10 + num) % m;
    }
    return tovec(res);
}

vector<int> qmod(long long a,long long b,long long m){
    vector<int> va = tovec(a);
    vector<int> ans = {1};
    while(b > 0){
        if(b & 1){
            ans = mod(mul(ans,va),m);
        }
        va = mod(mul(va,va),m);
        b >>= 1;
    }
    return ans;
}

int main(){
    long long a,b,p;
    cin >> a >> b >> p;
    vector<int> temp = qmod(a,b,p);
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << ' ';
    }
    return 0;
}