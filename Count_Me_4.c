#include <stdio.h>
int main()
{
    char s[10001];
    int freq[26] = {0};
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a'] ++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        printf("%c - %d\n", i + 'a', freq[i]);
    }
    return 0; 
}
