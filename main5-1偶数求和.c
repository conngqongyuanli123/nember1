#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numbers[8];
    int sum = 0;
    int i;

    // ��ȡ8������
    for (i = 0; i < 8; i++) {
        scanf("%d", &numbers[i]);
    }

    // ��������ż���ĺ�
    for (i = 0; i < 8; i++) {
        if (numbers[i] % 2 == 0) {
            sum += numbers[i];
        }
    }

    printf("%d\n", sum);

 
	return 0;
}
