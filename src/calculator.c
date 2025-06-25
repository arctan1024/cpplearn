#include <stdio.h>
#include <string.h>

int calc(int a, char op, int b){
    int result;
    
    if (op == '+'){
        result = a + b;
    } else if (op == '-'){
        result = a - b;
    }
    else if (op == '*'){
        result = a * b;
    }
    else if (op == '/'){
        result = a / b;
    }
    return result;
}

int main() {
    int a;
    char op;
    int b;
    scanf("%d %c %d",&a,&op,&b);
    int res = calc(a, op, b);
    printf("%d\n", res);
    return 0;
}