#ifndef MATRIXFIBONACCISTRATEGY_H
#define MATRIXFIBONACCISTRATEGY_H
#include <istrategy.h>

class MatrixFibonacciStrategy : public IStrategy
{
public:
    FibValue execute(FibArg n);
private:
    struct Matrix
    {
        FibValue a, b;
        FibValue c, d;
    };
    FibValue matrixFibonacci(FibArg n);
    Matrix matrixMultiply(Matrix first, Matrix second);
};

#endif // MATRIXFIBONACCISTRATEGY_H
