#include <stdio.h>


int fibonacci_recursive(int n) {
if (n == 0)
return 0;
if (n == 1)
return 1;
if (n == 2)
return 2;
return fibonacci_recursive(n - 3) + fibonacci_recursive(n - 2);
}


int main() {
int n = 10;
int result = fibonacci_recursive(n);
printf("F(%d) = %d\n", n, result);
return 0;
}


// Method 2: Memoization (Top-Down) Approach


#include <stdio.h>


#define MAX_N 1000


int memo[MAX_N];


int fibonacci_memoization(int n) {
if (n == 0)
return 0;
if (n == 1)
return 1;
if (n == 2)
return 2;
if (memo[n] != -1)
return memo[n];
memo[n] = fibonacci_memoization(n - 3) + fibonacci_memoization(n - 2);
return memo[n];
}


int main() {
int n = 10;
// Initialize memo array with -1
for (int i = 0; i < MAX_N; i++)
memo[i] = -1;
int result = fibonacci_memoization(n);
printf("F(%d) = %d\n", n, result);
return 0;
}




// Method 3: Dynamic Programming (Bottom-Up) Approach


#include <stdio.h>


int fibonacci_dynamic(int n) {
int fib[n + 1];
fib[0] = 0;
fib[1] = 1;
fib[2] = 2;
for (int i = 3; i <= n; i++)
fib[i] = fib[i - 3] + fib[i - 2];
return fib[n];
}


int main() {
int n = 10;
int result = fibonacci_dynamic(n);
printf("F(%d) = %d\n", n, result);
return 0;
}


