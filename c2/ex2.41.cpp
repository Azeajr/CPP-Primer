#include <iostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

void ex1_20() {
  Sales_data item1;
  double price;

  while (std::cin >> item1.bookNo >> item1.units_sold >> price) {
    item1.revenue = item1.units_sold * price;
    std::cout << item1.bookNo << " " << item1.units_sold << "" << item1.revenue;
  }
}

int ex1_21() {
  Sales_data item1, item2;
  double price;

  if (std::cin >> item1.bookNo >> item1.units_sold >> price) {
    item1.revenue = item1.units_sold * price;
    if (std::cin >> item2.bookNo >> item2.units_sold >> price) {
      item2.revenue = item2.units_sold * price;
      if (item1.bookNo.compare(item2.bookNo)) {
        std::cout << item1.bookNo << " " << item1.units_sold + item2.units_sold
                  << "" << item1.revenue + item2.revenue << std::endl;
        return 0;
      } else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;
      }
    } else {
      std::cerr << "No data for item two" << std::endl;
      return -1;
    }
  } else {
    std::cerr << "No data for item one" << std::endl;
    return -1;
  }

  std::cin >> item1.bookNo >> item1.units_sold >> price;
  item1.revenue = item1.units_sold * price;

  std::cin >> item2.bookNo >> item2.units_sold >> price;
  item2.revenue = item2.units_sold * price;
}