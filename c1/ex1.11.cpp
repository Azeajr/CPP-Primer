#include <iostream>

int main(int argc, char const *argv[]) {
    int start, end;
    std::cout << "Enter a start and end of the sequence(inclusive):" << std::endl;
    std::cin >> start >> end;

    while(start <= end){
        std::cout << start++ << " ";
    }
    std::cout << std::endl;
    return 0;
}
