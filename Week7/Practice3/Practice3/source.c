#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 중복 체크
int check_duplication(int num, int arr[]) {
    
    for (int i = 0; i < 6; i++) {
        if (arr[i] == num) {
            return 1; // 중복 발생
        }
    }
    return 0; // 중복 없음
    
}

// 버블 sorting
void selection_sort(int arr[]) {
    int i, j, min_idx, temp;
    for (i = 0; i < 6 - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < 6; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}


int main(void) {

    int lottery[6] = {0};
    srand(time(NULL));
    int temp, i = 0;

    // 번호 뽑기
    while (i < 6) {
        temp = rand() % 46;
        if (check_duplication(temp, lottery) == 0) {
            lottery[i] = temp;
            i++;
        }
    }

    selection_sort(lottery); // sorting

    printf("추첨된 번호는 : ");
    for (i = 0; i < 6; i++) {
        printf("%d ", lottery[i]);
    }
    printf("입니다.");

    return 0;

}