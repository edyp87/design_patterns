#include "recursivefibonaccistrategy.h"

IStrategy::FibValue RecursiveFibonacciStrategy::execute(FibArg n)
{
    return recursiveFibonacci(n);
}

IStrategy::FibValue RecursiveFibonacciStrategy::recursiveFibonacci(FibArg n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
    }
}
