#include <iostream>

int main(){
    int v1, v2;
    std::cout << "Enter the beginning and end of the summation(inclusive):" << std::endl;

    std::cin >> v1 >> v2;

    int s, e, sum = 0;

    if(v2 > v1){
        s = v1, e = v2;
    }else{
        s = v2, e = v1;
    }

    while(s <= e){
        sum += s++;
    }


    std::cout << "The sum from " << v1 << " to " << v2 << " is " << sum << "." << std::endl;

    return 0;
}
