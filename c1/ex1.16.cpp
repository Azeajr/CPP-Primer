#include <iostream>

int main(){
    int i, sum = 0;
    while(std::cin >> i){
        sum += i;
    }
    std::cout << sum;
}
