#include <cstdio> // for using printf, scanf etc.
#include <iostream> // for usimg cin, cout etc.
#include <ios>
#include <string> // for using strings in functions.
#include <vector> // for using std::vector function.
#include <algorithm> //for using algorithms.
#include <string_view> // for view of the string and cannot​ be used to modify the actual string, pointers etc.
#include <cstdint>
#include <optional> // bool etc.
using namespace std;

constexpr auto MaxItem = 30; // for setting maximum limit of items in the inventory

//List of product categories stored in the inventory.
enum class Product_categories
{
    start,
    Medicines,
    Fruits,
    Vegetables,
    Chocolates,
    Milk,
    Cheese,
    Chicken,
    Cake,
    Lotion,
    Ice_Cream,
    stop
};

//Returns product name.
 string getProductName(int current) {
    string name = "";
    current == 1? name = "shampoo" :name = name;
    current == 2 ? name = "serial" : name = name;
    current == 3 ? name = "vegetables" : name = name;
    current == 4 ? name = "shoes" : name = name;
    current == 5 ? name = "shirts" : name = name;
    current == 6 ? name = "pants" : name = name;
    current == 7 ? name = "soap" : name = name;
    current == 8 ? name = "glasses" : name = name;
    current == 9? name = "milk" : name = name;
    return name;
}
