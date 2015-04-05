#ifndef DYNAMICFIBONACCISTRATEGY_H
#define DYNAMICFIBONACCISTRATEGY_H
#include <istrategy.h>

class DynamicFibonacciStrategy : public IStrategy
{
public:
    FibValue execute(FibArg n);
private:
    long long dynamicFibonacci(unsigned int n);
};

#endif // DYNAMICFIBONACCISTRATEGY_H
