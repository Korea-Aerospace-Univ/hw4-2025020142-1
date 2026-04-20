#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str;
    scanf("%s", str);

    int lowerCnt = 0, digitCnt = 0;
    int maxLower = 0, maxDigit = 0;

    for (int i = 0; i < n; i++) 
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') 
	{
            lowerCnt++;
            digitCnt = 0;
            if (lowerCnt > maxLower) 
	    maxLower = lowerCnt;
        } 
	else if (ch >= '0' && ch <= '9') 
	{
            digitCnt++;
            lowerCnt = 0;
            if (digitCnt > maxDigit) 
	    maxDigit = digitCnt;
        } 
	else 
	{
            lowerCnt = 0;
            digitCnt = 0;
        }
    }

    printf("%d\n", maxLower);
    printf("%d\n", maxDigit);
    return 0;
}
