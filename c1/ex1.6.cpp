#include <iostream>

int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    /*
     * Not legal.  The semicolons mean that I have to setup the input stream for
     * each line.  std::cout belongs at beginning of each line.
     */
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;

    return 0;

}
