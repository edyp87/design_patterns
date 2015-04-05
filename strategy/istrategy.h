#ifndef ISTRATEGY_H
#define ISTRATEGY_H

class IStrategy
{
public:
    using FibValue = unsigned long long;
    using FibArg = unsigned int;

    virtual FibValue execute(FibArg n) = 0;
};

#endif // ISTRATEGY_H
