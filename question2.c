#include <stdio.h>
#include <string.h>

int main()
{
    char name[8][10] = {"brown", "davis", "johnson", "smith", "wagner"};
    char name2[8][10];
    for (int i = 0; i < 5; i++)
    {
        strcpy(name2[i], name[i]);

        printf("%s\n", name2[i]);
    }

    return 0;
}