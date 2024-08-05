#define   _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                {
//                    printf("*");
//                }
//                else if (i + j == 4)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    i = 0;
//    int a = 0;
//    scanf("%d", &a);
//    int max = a;
//    int j = 0;
//    while (i < n)
//    {
//        if (arr[i] < max)
//            i++;
//        else
//            break;
//    }
//    for (j = n; j > i; j--)
//    {
//        arr[j] = arr[j -1];
//    }
//    arr[i] = a;
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int arr[100] = { 0 };
//        int i = 0;
//        for (i = 2; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    arr[i] = 0;
//                }
//            }
//        }
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//                printf("%d ", arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    double count = 0;
//    int arr1[][20] = { 0 };
//    int arr2[][20] = { 0 };
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    double sim = count / (m * n) * 100.0;
//    printf("%.2lf", sim);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    double count = 0;
//    int* arr1 = { 0 };
//    int* arr2 = { 0 };
//    int* p1 = (int* )malloc(sizeof(int) * m * n);
//    int* p2 = (int* )malloc(sizeof(int) * m * n);
//    arr1 = p1;
//    arr2 = p2;
//    for (i = 0; i < m*n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m*n; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < m*n; i++)
//    {
//        if (arr1[i] == arr2[i])
//            count++;
//    }
//    double sim = count / (m * n) * 100;
//    printf("%.2f", sim);
//    free(p1);
//    p1 = NULL;
//    free(p2);
//    p2 = NULL;
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int cnt = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        int m = i;
//        while (m > 0)
//        {
//            if (m % 10 == 9)
//            {
//                cnt++;
//                break;
//            }
//            else
//            {
//                m /= 10;
//            }
//        }
//    }
//    //Êä³ö
//    printf("%d\n", cnt);
//
//    return 0;
//}