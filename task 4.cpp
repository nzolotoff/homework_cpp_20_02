#include <iostream>
#include <list>
#include <vector>

void task4() {

    int lenOfList = 0;
    std::cout << "Enter size of your list: ";
    std::cin >> lenOfList;
    std::list<int> lst;
    int input = 0;
    std::cout << "Enter element: ";
    for (int i = 0; i < lenOfList; i++) {
        std::cin >> input;
        if (input != 0) {
            lst.push_back(input);
        }
    }

    std::vector<int> even_vec;
    for (int num : lst) {
        if (num % 2 == 0) {
            even_vec.push_back(num);
        }
    }
    std::cout << "Even elements: ";
    for (int num : even_vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
