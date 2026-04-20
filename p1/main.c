#include <stdio.h>

int main() {
    int answer, guess, count = 0;

    printf("정답 입력 : ");
    scanf("%d", &answer);

    do {
        scanf("%d", &guess);
        count++;
        if (guess > answer)
            printf("%d 보다 낮습니다\n", guess);
        else if (guess < answer)
            printf("%d 보다 높습니다\n", guess);
        else
            printf("%d 정답입니다\n", guess);
    } while (guess != answer);

    printf("시도횟수는 %d회\n", count);
    return 0;
}
