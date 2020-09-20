#include <iostream>
#include "Sales_item.h"

int main(int arc, char *argv[]){
    Sales_item item1, item2;
    std::cin >> item1;

    while(std::cin >> item2){
        if(item1.isbn() == item2.isbn()){
            item1 = item1 + item2;
        } else {
            std::cerr << "Data must refer to same ISBN" << std::endl;
        }
    }

    std::cout << item1 << std::endl;
    return 0;
}
