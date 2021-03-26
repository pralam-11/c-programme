#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int conversion(int conv)
{

    char input;
    float first, second;
    float kmsTomiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsTokgs = 0.453592;
    float inchesTometers = 0.0254;

    // while (1)
    // {

    printf("entre the input.q To quit\n");
    printf("1:kms To miles\n");
    printf("2:inches To foot\n");
    printf("3: cms To inches\n");
    printf("4:pounds To kgs\n");
    printf("5:inches To meters\n");
    scanf("%s", &input);
    // input++;

    switch (input)
    {

    case '1':
        second = first * kmsTomiles;
        printf("entr the first quantity\n");
        scanf("%f", &first);
        printf("%.2f kms is equal to %.2fmiles\n", first, second);

        break;

    case '2':
        printf("entr the first quantity\n");
        scanf("%f", &first);
        second = first * inchesTofoot;
        printf("%.2f inches is equal to %.2f foot\n", first, second);
        break;

    case '3':
        printf("entr the first quantity\n");
        scanf("%f", &first);
        second = first * cmsToinches;
        printf("%.2f cms is equal to %.2f inches\n", first, second);
        break;

    case '4':
        printf("entr the first quantity\n");
        scanf("%f", &first);
        second = first * poundsTokgs;
        printf("%.2f pounds is equal to %.2f kgs\n", first, second);
        break;

    case '5':
        printf("entr the first quantity\n");
        scanf("%f", &first);
        second = first * inchesTometers;
        printf("%.2f inches is equal to %.2f meters\n", first, second);
        break;

    case 'q':
        printf("Quitting the programme......");
        break;

    default:

        break;
    }
}

int starpattern(int str)
{

    int starpattern(int rows)
    {

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        return 0;
    }

    int revstarpattern(int rows)
    {
        for (int i = 0; i <= rows; i++)
        {
            for (int j = 0; j <= rows - i - 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        return 0;
    }

    int temp;
    int rows;
    printf("Press 1 For star pattern\n");
    printf("Press 2 For reverse star pattern\n");
    printf("Press 3 For Both pattern\n");
    scanf("%d", &temp);
    printf("entre the rows you want\n");
    scanf("%d", &rows);

    switch (temp)
    {
    case 1:
        starpattern(rows);
        break;

    case 2:
        revstarpattern(rows);
        break;

    case 3:
        starpattern(rows);
        revstarpattern(rows);
        break;

    default:
        printf("Invalid Press");
        break;
    }

    return 0;
}

int matrix(int mxt)
{

    int a[10][10], b[10][10], c[10][10], r1, r2, c1, c2, sum = 0, j, i, k;

    printf("Entre the no of rows and columns in matrix A:\n");
    scanf("%d%d", &r1, &c1);
    printf("Entre the no of rows and columns in matrix B:\n");
    scanf("%d%d", &r2, &c2);

    printf("Input matrix A:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Input matrix B:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {

            printf("the result is %d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int multiply(int mlt)
{

    int num;
    int mt;
    printf("enter the num to multiply of :\n");
    scanf("%d", &num);
    printf("Entre Till Where You Want To Multiply\n");
    scanf("%d", &mt);

    printf("the multiplication table of %d as follows\n", num);

    for (int i = 1; i <= mt; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}

int differenceCir(int cir)
{

    float Edistance(int x1, int y1, int x2, int y2)
    {
        int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
        return sqrt(a);
    }

    float Areaofcircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
    {
        return distance(x1, y1, x2, y2);
    }

    int x1, y1, x2, y2;
    float dst;

    printf("entre the value of x1\n");
    scanf("%d", &x1);

    printf("entre the value of y1\n");
    scanf("%d", &y1);

    printf("entre the value of x2\n");
    scanf("%d", &x2);

    printf("entre the value of y2\n");
    scanf("%d", &y2);

    dst = Areaofcircle(x1, y1, x2, y2, Edistance);
    printf("the value is %.0f", dst);

    return 0;
}

int factorial(int fac)
{

    int factorial(int number)
    {
        if (number == 1 || number == 0)
        {
            return 1;
        }
        else
        {
            return (number * factorial(number - 1));
        }
    }

    int num;
    printf("entre the number\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d", num, factorial(num));
    return 0;
}

int macros(int mac)
{

    printf("%s\n", __TIME__);
    printf("%s\n", __DATE__);

    return 0;
}

int palindrome(int pal)
{

    int ispalindrome(int num)
    {
        int reversed = 0, originalNumber = num;

        while (num != 0)
        {
            reversed = reversed * 10 + num % 10;
            num = num / 10;
        }
        printf("the reverse num is %d\n", reversed);
        if (originalNumber == reversed)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int number;
    printf("entre the number\n");
    scanf("%d", &number);

    if (ispalindrome(number))
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}

int simpleCalci(int spl)
{
    float num1, num2;
    char operation;
    printf("Entre  num1\n");
    scanf("%f", &num1);
    getchar();

    printf("Enter the operation\n");
    scanf("%c", &operation);
    getchar();

    printf("Enter num2\n");
    scanf("%f", &num2);

    switch (operation)
    {
    case '+':
        printf("%.0f + %.0f = %.0f\n ", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.0f - %.0f = %.0f\n ", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.0f X %.0f = %.0f\n ", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.0f / %.0f = %.0f\n ", num1, num2, num1 / num2);
        break;

    default:
        printf("Invalid\n");
        break;
    }
}

int main()
{
    int mac;
    int conv;
    int temp;
    int str;
    int mxt;
    int mlt;
    int cir;
    int fac;
    int pal;
    int spl;
    printf("\n\n");
    printf("    ~~~~~~~~~~~~~~~~~~~~~~   \n");
    printf("    WELCOME TO CONVERTER 9    \n");
    printf("    ~~~~~~~~~~~~~~~~~~~~~~   \n");
    printf("Press 1 For Conversion Of Quantities\n");
    printf("Press 2 For Star Pattern\n");
    printf("Press 3 For Matrix Calculation\n");
    printf("Press 4 For multiplicatin table\n");
    printf("Press 5 To Calculate  Difference Of Circle\n");
    printf("Press 6 For Factorial Calculation\n");
    printf("Press 7 To Know Todays Time And Date\n");
    printf("Press 8 To know Whether The Number Is Palindrome\n");
    printf("Press 9 For Simple Calculator\n");

    scanf("%d", &temp);

    switch (temp)
    {
    case 1:
        conversion(conv);
        break;
    case 2:
        starpattern(str);
        break;
    case 3:
        matrix(mxt);
        break;
    case 4:
        multiply(mlt);
        break;
    case 5:
        differenceCir(cir);
        break;
    case 6:
        factorial(fac);
        break;
    case 7:
        macros(mac);
        break;
    case 8:
        palindrome(pal);
        break;
    case 9:
        simpleCalci(spl);
        break;

    default:
        printf("Invalid input ");
        break;
    }

    return 0;
}