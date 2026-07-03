#include <iostream>
#include <map>
using namespace std;

int a[100005];
map<int,int> b;
map<int,int> c;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    for(const auto& p : b){
        for(const auto& q : b){
            if(q.first % p.first == 0){
                c[q.first] += p.second;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        printf("%d\n",c[a[i]]-1);
    }
    return 0;
}