#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    char key[20];
    int beg, end, mid;
    char a[14][25] = {"Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin", "Klein",
                      "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton"};
   int n = 14;
    printf("enter the name to be searched\n");
    scanf("%s", &key);
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        printf("beg=%d\t end=%d \tmid=%d\n", beg, end, mid);
        // printf("mid=%d\n", mid);
        if (strcmp(key, a[mid]) == 0)
        {
            printf("key found at the position %d\n", mid + 1);
            exit(0);
        }
        else if (strcmp(key, a[mid]) > 0)
        {
            end = end;
            beg = mid + 1;
        }
        else
        {
            beg = beg;
            end = mid - 1;
        }
    }
    printf("not found\n");

    return 0;
}
