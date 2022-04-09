#include <stdio.h>

int main()
{
    // printf("enter the name of the students:");
    printf("enter the no. of students:");
    int n;
    scanf("%d", &n);
    int arr[n][4];

    // taking the  input from the user

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            if (j == 0)
            {
                printf("Enter the roll no.:");
            }
            else if (j == 1)
            {
                printf("Enter the marks of subject 1:");
            }
            else if (j == 2)
            {
                printf("Enter the marks of subject 2:");
            }
            else if (j == 3)
            {
                printf("Enter the marks of subject 3:");
            }
            scanf("%d", &arr[i][j]);
        }
    }

    // question 1a total marks obtained by each student
    int totalMarks;
    for (int i = 0; i < n; i++)
    {
        totalMarks = 0;
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            if (j != 0)
            {
                totalMarks = totalMarks + arr[i][j];
            }
        }
        printf("marks of the roll no ");
        printf("%d", arr[i][0]);
        printf(" is: ");
        printf("%d", totalMarks);
    }

    // question 1 (b);

    int highSub1 = 0;
    int highSub1Rno;
    int highSub2Rno;
    int highSub3Rno;

    int highSub2 = 0;
    int highSub3 = 0;

    for (int i = 0; i < n; i++)
    {
        totalMarks = 0;
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            if (j = 1)
            {
                if (highSub1 < arr[i][j])
                {
                    highSub1 = arr[i][j];
                    highSub1Rno = arr[i][0];
                }
            }
            if (j = 2)
            {
                if (highSub2 < arr[i][j])
                {
                    highSub2 = arr[i][j];
                    highSub2Rno = arr[i][0];
                }
            }
            if (j = 3)
            {
                if (highSub3 < arr[i][j])
                {
                    highSub3 = arr[i][j];
                    highSub3Rno = arr[i][0];
                }
            }
        }
    }

    printf("\n             ************************************\n");

    printf("highest marks in subject 1 is: %d", highSub1);
    printf(" scored by roll no %d", highSub1Rno);
    printf("\n             ************************************\n");

    printf("highest marks in subject 2 is: %d", highSub2);
    printf(" scored by roll no %d", highSub2Rno);
    printf("\n             ************************************\n");

    printf("highest marks in subject 3 is: %d", highSub3);
    printf(" scored by roll no %d", highSub3Rno);

    return 0;
}