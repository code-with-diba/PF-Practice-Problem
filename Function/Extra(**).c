### 1.Write a C Program to Find Power of a Number.

```c
#include <stdio.h>
#include <math.h>

int power(int x, int y) 
{
    int z;
    z = pow(x, y);
    return z;
}

int main() 
{
    int base, exp, result;
    
    scanf("%d %d", &base, &exp);
    
    result = power(base, exp);
    
    printf("%d", result);
}
```
### 2.Write a C Program to Count Number of Digits.

```c
#include <stdio.h>

int countDigits(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main() 
{
    int num, total;
    scanf("%d", &num);
    
    total = countDigits(num);
    
    printf("Total number of digits: %d", total);
}
```
### 3.Write a C Program to Check Perfect Number.

```c
#include <stdio.h>

int isPerfect(int num) 
{
    int sum = 0;
    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) 
        {
            sum = sum + i;
        }
    }
    if (sum == num) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main() 
{
    int num, result;
    scanf("%d", &num);
    
    result = isPerfect(num);
    
    if (result == 1) 
    {
        printf("%d is a Perfect Number", num);
    } 
    else 
    {
        printf("%d is not a Perfect Number", num);
    }
}
```
### 4.Write a C Program to Find Sum of 1 to N Numbers.

```c
#include <stdio.h>

int findSum(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum = sum + i;
    }
    return sum;
}

int main() 
{
    int n, result;
    scanf("%d", &n);
    
    result = findSum(n);
    
    printf("%d", result);
}
```
### 5.Write a C Program to Find Fibonacci Series.

```c
#include <stdio.h>

int fibonacci(int n) 
{
    int a = 1, b = 1, sum = 1;
    for (int i = 1; i <= n - 2; i++) 
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int main() 
{
    int n, result;
    scanf("%d", &n);
    
    result = fibonacci(n);
    
    printf("The %dth fibonacci is %d", n, result);
}
```
}
```
