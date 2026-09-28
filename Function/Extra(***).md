### 1.Write a c program to find the sum of two numbers using function.
```c
#include <stdio.h>

int sum(int x, int y)
{
    int z;
    z=x+y;
    return z;
}
int main(){
     int a,b,result;
     scanf("%d %d",&a,&b);
     result=sum(a,b);
     printf("%d",result);
}
```
### 2.Write a c program to print the printTable of a integer.
```c
#include <stdio.h>

void printTable(int x)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", x*i);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    printTable(n);

}
```
### 3. Write a C program to print the sum of digits of a number using a function.

```c
#include <stdio.h>

int sumOfDigits(int num)
{
    int temp, r, sum = 0;
    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int num, result;
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("sum of digits : %d", result);

    return 0;
}
```
### 4. Write a C program to print the reverse of a number using a function.

```c
#include <stdio.h>

int reverseNumber(int num)
{
    int temp, r, sum = 0;
    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int num, result;
    scanf("%d", &num);

    result = reverseNumber(num);

    printf("Reverse of number : %d", result);

    return 0;
}
```
### 5.Write a C program to check whether a number is Palindrome or not using a function.

```c
#include <stdio.h>

int reverseNumber(int num)
{
    int temp, r, sum = 0;
    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int num, result;
    scanf("%d", &num);

    result = reverseNumber(num);

    if (num == result)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
```
### 6. Write a C program to find the GCD (Greatest Common Divisor) of two numbers using a function.

```c
#include <stdio.h>

int findGCD(int num1, int num2)
{
    int n1, n2, rem, gcd;

    n1 = num1;
    n2 = num2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    return gcd;
}

int main()
{
    int num1, num2, gcd;

    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);

    printf("GCD = %d\n", gcd);

    return 0;
}
```

---

### 7. Write a C program to find the LCM (Least Common Multiple) of two numbers using a function.

```c
#include <stdio.h>

int findLCM(int num1, int num2)
{
    int n1, n2, rem, gcd, lcm;

    n1 = num1;
    n2 = num2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    lcm = (num1 * num2) / gcd;

    return lcm;
}

int main()
{
    int num1, num2, lcm;

    scanf("%d %d", &num1, &num2);

    lcm = findLCM(num1, num2);

    printf("LCM = %d\n", lcm);

    return 0;
}
```
### 8.Write a C program to check whether a number is Armstrong or not using a function.

```c
#include <stdio.h>

int checkArmstrong(int num)
{
    int temp, r, sum = 0;
    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }

    return sum;
}

int main()
{
    int num, result;
    scanf("%d", &num);

    result = checkArmstrong(num);

    if (num == result)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
```


