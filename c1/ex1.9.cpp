#include <iostream>

int main(){
    int s, f;
    std::cout << "Enter the beginning and end of the summation(inclusive):" << std::endl;

    std::cin >> s >> f;

    int i = s, sum = 0;
    while(i <= f){
        sum += i++;
    }

    std::cout << "The sum from " << s << " to " << f << " is " << sum << "." << std::endl;

    return 0;
}
