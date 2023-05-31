#include "int.h"

int main()
{
    display_number(5);
    display_number(10);
    display_number(15);

    int result = echo_number(20);

    std::cout<<result<<"\n";
    return 0;
}