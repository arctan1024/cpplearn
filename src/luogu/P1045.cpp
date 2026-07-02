#include <bits/stdc++.h>
using namespace std;

vector<int> tovec(int n){
    if(n == 0) return {0};
    vector<int> res;
    while(n > 0){
        int temp = n % 10;
        res.push_back(temp);
        n /= 10;
    }
    return res;
}

vector<int> mul(const vector<int>& a,const vector<int>& b){
    vector<int> ans(a.size()+b.size(),0);
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(i+j+1 > 500) break;
            ans[i+j] += a[i] * b[j];
        }
    }
    int carry = 0;
    for(int i = 0; i < ans.size(); i++){
        int sum = ans[i] + carry;
        ans[i] = sum % 10;
        carry = sum / 10;
    }
    while(ans.size() > 1 && ans.back() == 0) ans.pop_back();
    return ans;
}

vector<int> qmod(long long b){
    vector<int> a(1,2);
    vector<int> ans(1,1);
    while(b > 0){
        if(b & 1){
            ans = mul(ans,a);
        }
        a = mul(a,a);
        b >>= 1;
    }
    return ans;
}

int main(){
    int p;
    cin >> p;
    int k = p*log10(2) + 1;
    cout << k;
    vector<int> ans = qmod(p);
    reverse(ans.begin(),ans.end());
    ans[ans.size()-1] -= 1;
    while(ans.back() < 0){
        ans.pop_back();
        ans[ans.size()-1] -= 1;
    }
    reverse(ans.begin(),ans.end());
    int cnt = 0;
    for(int i = 499; i >= 0; i--){
        if(cnt % 50 == 0) cout << '\n';
        if(i >= ans.size()) cout << 0;
        else cout << ans[i];
        cnt++;
    }
    cout << '\n';
    return 0;
}