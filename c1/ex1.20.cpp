#include <iostream>
#include "Sales_item.h"

int main(int argc, char *argv[]){
    Sales_item item1;

    while(std::cin >> item1){
        std::cout << item1;
    }

    return 0;

}
