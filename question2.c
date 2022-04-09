#include <stdio.h>
#include <string.h>

int main()
{
    char name[8][10] = {"brown", "davis", "johnson", "smith", "wagner"};

    int pos = 2;
    char temp[10];
    char temp2[10];

    // inserting a value inbetween an array means inserting the array at some position and shifting other elements one position after the current position.
    //  inserting ford at position 3

    for (int i = pos; i < 6; i++)
    {
        if (i != pos)
        {
            strcpy(name[i], temp);
            strcpy(temp, temp2);
            strcpy(temp2, name[i + 1]);
        }
        if (i == pos)
        {
            strcpy(temp, name[i]);
            strcpy(name[i], "Ford");
            strcpy(temp2, name[i + 1]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", name[i]);
    }
    printf("\n\n\n");

    // iserting taylor at position 5

    pos = 5;
    for (int i = pos; i < 7; i++)
    {
        if (i != pos)
        {
            strcpy(name[i], temp);
            strcpy(temp, temp2);
            strcpy(temp2, name[i + 1]);
        }
        if (i == pos)
        {
            strcpy(temp, name[i]);
            strcpy(name[i], "Taylor");
            strcpy(temp2, name[i + 1]);
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", name[i]);
    }
    printf("\n\n\n");
    // in the previous example we have seen that to insert ford at position 3 we have to shift johnson smith and wagner 1 position after the current.
    //  deleting davis at position 2;
    pos = 1;
    for (int i = pos; i < 6; i++)
    {
        strcpy(temp2, name[i + 1]);
        strcpy(name[i], temp2);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", name[i]);
    }

    // to delete an element at any position we have to shift the element one place before the current position.
    return 0;
}