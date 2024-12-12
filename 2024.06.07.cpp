#include <iostream>  
#include <string>  

int main() {

    std::string my_tuple[] = { "2", "0", "3", "4", "0", "G", "A", "F", "L", "Q", "a", "a", "h", "o", "p", "w", "w", "x", "x", "5",
                               "6", "10", "11", "7", "7", "8", "0", "15", "2", "3", "4", "r", "r", "r", "e", "e", "a" };
    int size = sizeof(my_tuple) / sizeof(my_tuple[0]);

    char user_input;
    std::cout << "Введите символ: ";
    std::cin >> user_input;

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (my_tuple[i][0] == user_input) {
            count++;
        }
    }
    std::cout << "Символ '" << user_input << "' встречается " << count << " раз(а) в массиве." << std::endl;

    int digit_count = 0;
    for (int i = 0; i < size; ++i) {
        if (my_tuple[i][0] >= '0' && my_tuple[i][0] <= '9') {
            digit_count++;
        }
    }
    std::cout << "Количество цифр в массиве: " << digit_count << std::endl;

    int letter_count = 0;
    for (int i = 0; i < size; ++i) {
        if ((my_tuple[i][0] >= 'a' && my_tuple[i][0] <= 'z') || (my_tuple[i][0] >= 'A' && my_tuple[i][0] <= 'Z')) {
            letter_count++;
        }
    }
    std::cout << "Количество букв в массиве: " << letter_count << std::endl;

    int upper_count = 0;
    for (int i = 0; i < size; ++i) {
        if (my_tuple[i][0] >= 'A' && my_tuple[i][0] <= 'Z') {
            upper_count++;
        }
    }
    std::cout << "Количество заглавных букв в массиве: " << upper_count << std::endl;

    return 0;
}