#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    int kor;
    int eng;
    int math;
} Student;

void calculate_average(Student students[], int count) {
    int total_kor = 0;
    int total_eng = 0;
    int total_math = 0;

    for (int i = 0; i < count; i++) {
        total_kor += students[i].kor;
        total_eng += students[i].eng;
        total_math += students[i].math;
    }

    double avg_kor = (double)total_kor / count;
    double avg_eng = (double)total_eng / count;
    double avg_math = (double)total_math / count;

    printf("국어 평균: %.2lf\n", avg_kor);
    printf("영어 평균: %.2lf\n", avg_eng);
    printf("수학 평균: %.2lf\n", avg_math);
}

void calculate_top_score(Student students[], int count) {
    int max_kor = 0;
    int max_eng = 0;
    int max_math = 0;
    char top_kor_name[30];
    char top_eng_name[30];
    char top_math_name[30];

    for (int i = 0; i < count; i++) {
        if (students[i].kor > max_kor) {
            max_kor = students[i].kor;
            strcpy_s(top_kor_name, sizeof(top_kor_name), students[i].name);
        }
        if (students[i].eng > max_eng) {
            max_eng = students[i].eng;
            strcpy_s(top_eng_name, sizeof(top_eng_name), students[i].name);
        }
        if (students[i].math > max_math) {
            max_math = students[i].math;
            strcpy_s(top_math_name, sizeof(top_math_name), students[i].name);
        }
    }

    printf("국어 1등: %s\n", top_kor_name);
    printf("영어 1등: %s\n", top_eng_name);
    printf("수학 1등: %s\n", top_math_name);
}

int main(void) {
    FILE* fp = NULL;
    Student students[100];
    int count = 0;

    fopen_s(&fp, "data2.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fscanf_s(fp, "%s %d %d %d", students[count].name, sizeof(students[count].name),
        &students[count].kor, &students[count].eng, &students[count].math) == 4) {
        count++;
    }

    fclose(fp);

    calculate_average(students, count);
    calculate_top_score(students, count);

    return 0;
}