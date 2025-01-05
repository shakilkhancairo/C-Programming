#include <stdio.h>

int compareStrings(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0';
}

void copyString(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char arr1[100][100], arr2[100][100], common[100][100];
    int n1, n2, commonCount = 0;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%s", arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%s", arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (compareStrings(arr1[i], arr2[j]))
            {
                int isDuplicate = 0;
                for (int k = 0; k < commonCount; k++)
                {
                    if (compareStrings(common[k], arr1[i]))
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate)
                {
                    copyString(common[commonCount], arr1[i]);
                    commonCount++;
                }
            }
        }
    }

    printf("Common elements: [");
    for (int i = 0; i < commonCount; i++)
    {
        printf("'%s'", common[i]);
        if (i < commonCount - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
