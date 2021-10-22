#include "Header.h"
int CompareString(const char* lhs, const char* rhs)
{
    for (; *lhs && *rhs && *lhs - *rhs == 0; ++lhs, ++rhs);
    return *lhs - *rhs;
}