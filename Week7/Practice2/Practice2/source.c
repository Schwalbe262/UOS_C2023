#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int find_max_index(int arr[], int length) {
    int max_index = 0;
    for (int i = 1; i < length; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

int main(void) {
    int arr[ARRAY_SIZE];
    srand(time(NULL));

    // 난수로 배열 채우기
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 101; // 0부터 100 사이의 난수 생성
    }

    // 배열 출력
    printf("배열: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max_index = find_max_index(arr, ARRAY_SIZE);
    printf("최대값 인덱스: %d\n", max_index);
    printf("최대값: %d\n", arr[max_index]);

    return 0;
}