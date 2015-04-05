#include <recursivefibonaccistrategy.h>
#include <dynamicfibonaccistrategy.h>
#include <matrixfibonaccistrategy.h>
#include <memory>
#include <iostream>


void execute (std::unique_ptr<IStrategy> strategy, IStrategy::FibArg n)
{
    std::cout << "Fibonacci for n: " << n << " = " << strategy->execute(n) << std::endl;
}

int main()
{
    std::unique_ptr<IStrategy> strategy(new MatrixFibonacciStrategy);
    execute(std::move(strategy), 17);
    return 0;
}


