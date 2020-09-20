#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item items[10];
    //size_t size = 10;

    int n = 0;
    while(std::cin >> items[n]){
        int i = 0;
        while(i < n){
            if(items[n].isbn() == items[i].isbn()){
                items[i] += items[n];
                n--;
                i = n;
            } else {
                i++;
            }
        }
        n++;
    }

    int i;
    for(i = 0; i < n; i++){
        std::cout << items[i] << std::endl;
    }

    return 0;

    /*size *= 2;

    Sales_item* temp = realloc(items, size * sizeof(Sales_item));
    if(temp){
        items = temp;
    } else {
        //error message due to lack of space for resize.
    }*/

}
