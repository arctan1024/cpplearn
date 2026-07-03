#include <iostream>
#include <map>
using namespace std;

bool isprime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    string word;
    cin >> word;
    map<char,int> m;
    for(int i = 0; i < word.size(); i++){
        m[word[i]]++;
    }
    int maxn = 0;
    int minn = 101;
    for(const auto& i : m){
        maxn = max(i.second,maxn);
        minn = min(i.second,minn);
    }
    int k = maxn - minn;
    if(isprime(k)){
        printf("Lucky Word\n%d\n",k);
    } else{
        printf("No Answer\n0\n");
    }
    return 0;
}