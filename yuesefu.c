#include <stdio.h>

void yuesefu(int n, int k)
{
    int people[n];
    
    // 初始化数组
    for (int i = 0; i < n; i++) {
        people[i] = i + 1;
    }
    
    // 开始循环
    int i = 0;
    while (n > 1) {
        // 找到要删除的人的位置
        i = (i + k - 1) % n;
        
        // 输出被删除的人
        printf("%4d", people[i]);
        
        // 从数组中删除被淘汰的人
        for (int j = i; j < n - 1; j++) {
            people[j] = people[j+1];
        }
        n--;
    }
    
    // 输出幸存者
    printf("%4d", people[0]);
}

int main() 
{
    int n = 0;
    int k = 0;
    scanf("%d%d", &n, &k);
    yuesefu(n, k);
    return 0;
}