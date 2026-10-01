#include <stdio.h>
#include <string.h>

int main() {
    char name[3][20];
    float score[3][3];
    float avg[3] = {0, 0, 0};

    // รับข้อมูลนักศึกษา 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", name[i]);

        printf("Math score: ");
        scanf("%f", &score[i][0]);

        printf("Phy score: ");
        scanf("%f", &score[i][1]);

        printf("Chem score: ");
        scanf("%f", &score[i][2]);

        printf("\n");
    }

    // คำนวณค่าเฉลี่ยแต่ละวิชา
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            avg[j] += score[i][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        avg[j] /= 3;
    }

    // แสดงผล
    printf("\n");
    printf("============================================================\n");
    printf("%-15s %-8s %-8s %-8s\n",
           "Student (length)", "Math", "Phy", "Chem");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-15s %-8.2f %-8.2f %-8.2f\n",
               name[i],
               score[i][0],
               score[i][1],
               score[i][2]);
    }

    printf("------------------------------------------------------------\n");

    printf("%-15s %-8.2f %-8.2f %-8.2f\n",
           "Subject average",
           avg[0], avg[1], avg[2]);

    printf("============================================================\n");

    return 0;
}