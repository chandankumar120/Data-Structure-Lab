#include <stdio.h>
void main()
{
    int a[10];
    int pos, num;
    int ad;
    int choice;
l1:
    printf("--------------------------------\n");
    printf("Press 1 for Insert.\n");
    printf("Press 2 for update.\n");
    printf("Press 3 for delete.\n");
    printf("Press 4 for Exit.\n");
    printf("Press 5 for Display.\n");
    printf("--------------------------------\n");
    printf("Enter Your Choice.\t\n");
    // printf("--------------------------------\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter no. of array to be entered\t");
        scanf("%d", &num);
        printf("Enter Elements\n");
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &a[i]);
        }
        goto l1;
    case 2:
        printf("Enter position to add element as count from 0\t");
        scanf("%d", &pos);
        for (int i = 0; i < num; i++)
        {
            if (i == pos)
            {
                printf("enter element\t");
                scanf("%d", &ad);
                a[i] = ad;
            }
        }
        goto l1;
    case 3:
        printf("Enter position to delete element as count from 0");
        scanf("%d", &pos);
        for (int i = 0; i < num; i++)
        {
            if (i == pos)
            {
                a[i] = a[i + 1];
                i++;
            }
            printf("%d", a[i]);
        }
        goto l1;
    case 4:
        break;
    case 5:
        for (int i = 0; i < num; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        goto l1;
    default:
        printf("Invalid Choice\n");
        goto l1;
    }
}