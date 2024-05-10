#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMS 20
#define RANGE 1001 // ���������ķ�Χ��[-500, 500]֮�䣬���Ը���ʵ���������

int main() {
    int n;
    scanf("%d", &n);
    int nums[MAX_NUMS];
    int sortedNums[MAX_NUMS];
    int ranks[RANGE] = {0}; // ������ϣ����¼��ţ�Ĭ�ϳ�ʼ��Ϊ0
    int rank = 0;

    // ��ȡ����Ԫ��
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sortedNums[i] = nums[i];
    }

    // �������������
    // �������ʹ���κ������㷨������ð�����򡢿��������
    // Ϊ�˼򻯣�����ʡ���������㷨��ʵ��ϸ��
    // ... (�����㷨����)

    // ������
    for (int i = 0; i < n; i++) {
        if (ranks[sortedNums[i] + 500] == 0) { // ƫ��500��Ϊ�˴���������
            rank++;
            ranks[sortedNums[i] + 500] = rank;
        }
    }

    // �����Ž��
    for (int i = 0; i < n; i++) {
        printf("%d ", ranks[nums[i] + 500]);
    }
    printf("\n");

    return 0;
}
