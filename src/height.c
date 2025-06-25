#include <stdio.h>

int foot;
int inch;

int main() {
    printf("请输入身高（英尺,英寸):");
    scanf("%d %d", &foot, &inch); 
    printf("您的身高（米）为：%f米\n",((foot + inch / 12.0) * 0.3048));
    return 0;
}