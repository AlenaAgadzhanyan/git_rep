 # include <iostream>
int main() {
    // переменная для имени пользователя
    std::string name;
    std::cout << "Enter your name, please: ";
    // ввод имени пользователя
    std::cin >> name;
    // вывод приветствия
    std::cout << "Hello world from " << name;
    return 0;
}
