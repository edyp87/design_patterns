#include "dynamicfibonaccistrategy.h"


IStrategy::FibValue DynamicFibonacciStrategy::execute(FibArg n)
{
    return dynamicFibonacci(n);
}

long long DynamicFibonacciStrategy::dynamicFibonacci(unsigned int n)
{
    long long firstFib = 0;
    long long secondFib = 1;

    for (unsigned int i = 0; i < n; ++i)
    {
        long long newFib = firstFib + secondFib;
        firstFib = secondFib;
        secondFib = newFib;
    }
    return firstFib;
}
