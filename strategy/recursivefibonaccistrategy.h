#ifndef RECURSIVEFIBONACCISTRATEGY_H
#define RECURSIVEFIBONACCISTRATEGY_H

#include <istrategy.h>

class RecursiveFibonacciStrategy : public IStrategy
{
public:
    FibValue execute(FibArg n) override;

private:
    FibValue recursiveFibonacci(FibArg n);
};

#endif // RECURSIVEFIBONACCISTRATEGY_H
