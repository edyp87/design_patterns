#include "matrixfibonaccistrategy.h"

IStrategy::FibValue MatrixFibonacciStrategy::execute(FibArg n)
{
    return matrixFibonacci(n);
}

IStrategy::FibValue MatrixFibonacciStrategy::matrixFibonacci(FibArg n)
{
    Matrix baseMatrix { 1, 1,
                        1, 0 };

    Matrix result = baseMatrix;

    while (--n != 0)
    {
        result = matrixMultiply(result, baseMatrix);
    }

    return result.b;
}

MatrixFibonacciStrategy::Matrix MatrixFibonacciStrategy::matrixMultiply(Matrix first, Matrix second)
{
    return { first.a * second.a + first.b * second.c,    first.a * second.b + first.b * second.d,
             first.c * second.a + first.a * second.c,    first.c * second.b + first.a * second.d };
}
