#include <iostream>
#include <string>
#include "SalesData.h"

int main()
{
    Sales_data book1;
    Sales_data book2;

    double price1 = 0;
    double price2 = 0;

    std::cin >> book1.bookNo >> book1.units_sold >> price1;
    book1.revenue += price1 * book1.units_sold;
    std::cin >> book2.bookNo >> book2.units_sold >> price2;
    if(book1.bookNo == book2.bookNo) {
        unsigned count = book1.units_sold + book2.units_sold;
        double revenue = book1.revenue + book2.units_sold * price2;
        book1.revenue += revenue;
        if(count != 0) {
            std::cout << revenue/count << std::endl;
        } else {
            std::cout << "(no sale)" << std::endl;
        }
        return 0;
    } else {
        std::cerr << "ISBN input must refer to the same as book 1." << std::endl;
        return -1;
    }
}