#include <iostream>

// #include <string>
/*
 * global_str will be initialized to an empty string.
 * global_int bill be initialized to 0.
 */
std::string global_str;
int global_int;

int main()
{
    /*
     * local_int and local_str will not be initialized
     */

    int local_int;
    std::string local_str;

    std::cout << global_str << std::endl;
    std::cout << global_int << std::endl;

    std::cout << local_str << std::endl;
    std::cout << local_int << std::endl;
}
