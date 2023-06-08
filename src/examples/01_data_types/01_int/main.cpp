#include "int.h"

int main()
{
    display_number(5);
    display_number(10);
    display_number(31);
    display_number(53);

    int result = echo_number(20);
    int result1 = echo_number(88);
    int result2 = echo_number(77);

    std::cout<<"\n"<<result<<"\n";
    std::cout<<"\n"<<result1<<"\n";
    std::cout<<"\n"<<result2<<"\n";
    
    return 0;
}