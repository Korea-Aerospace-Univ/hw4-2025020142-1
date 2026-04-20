#include <stdio.h>

int main(void)
{
    char ch;
    int i, count, number, len, max_num, max_str;

    count = 0;
    number = 0;
    max_num = 0;
    max_str = 0;

    scanf("%d", &len);
    getchar();
    
    for (i = 0; i < len; i++) {
        scanf("%c", &ch);

        if (ch >= 'a' && ch <= 'z') {
            count++;
            number = 0;
            if (count > max_str)
                max_str = count;
        }
        else if (ch >= '0' && ch <= '9') {
            number++;
            count = 0;
            if (number > max_num)
                max_num = number;
        }
        else {
            count = 0;
            number = 0;
        }
    }

    printf("%d\n", max_str);
    printf("%d\n", max_num);

    return 0;
}
