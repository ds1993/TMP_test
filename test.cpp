#include <stdio.h>

template<unsigned n>
struct Factorial {
    enum {value = n * Factorial<n - 1>::value};
};

template<>
struct Factorial<0> {
    enum {value = 1};
};

int main(void)
{
    printf("value = %d\n", Factorial<10>::value);
}
