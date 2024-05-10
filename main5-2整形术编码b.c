#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMS 20
#define RANGE 1001 // 假设整数的范围在[-500, 500]之间，可以根据实际情况调整

int main() {
    int n;
    scanf("%d", &n);
    int nums[MAX_NUMS];
    int sortedNums[MAX_NUMS];
    int ranks[RANGE] = {0}; // 用作哈希表，记录编号，默认初始化为0
    int rank = 0;

    // 读取数组元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sortedNums[i] = nums[i];
    }

    // 对数组进行排序
    // 这里可以使用任何排序算法，比如冒泡排序、快速排序等
    // 为了简化，这里省略了排序算法的实现细节
    // ... (排序算法代码)

    // 分配编号
    for (int i = 0; i < n; i++) {
        if (ranks[sortedNums[i] + 500] == 0) { // 偏移500是为了处理负数索引
            rank++;
            ranks[sortedNums[i] + 500] = rank;
        }
    }

    // 输出编号结果
    for (int i = 0; i < n; i++) {
        printf("%d ", ranks[nums[i] + 500]);
    }
    printf("\n");

    return 0;
}
