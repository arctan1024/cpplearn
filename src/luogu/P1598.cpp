#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> a(26);

int main(){
    char t;
    int maxn = 0;
    while(cin >> t){
        for(int i = 0; i < 26; i++){
            if(t == 'A'+i){
                a[i].push_back('*');
                int len = a[i].size();
                maxn = max(len,maxn);
            }
        }
    }
    for(int i = maxn; i >= -1; i--){
        for(int j = 0; j < 26; j++){
            cout << 1 << '\n';
            if(i == -1){
                char temp = 'A' + j;
                printf("%c",temp);
            }
            else if(i >= a[j].size()) printf(" ");
            else{
                printf("%c",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}