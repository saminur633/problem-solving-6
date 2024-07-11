// problem 1
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
// problem 2
#include <iostream>

int main() {
    int i;
    long long ll;
    char c;
    float f;
    double d;

    std::cin >> i >> ll >> c >> f >> d;  // Read input values
    std::cout << i << std::endl;
    std::cout << ll << std::endl;
    std::cout << c << std::endl;
    std::cout << f << std::endl;
    std::cout << d << std::endl;

    return 0;
}

// problem 3
#include <iostream>

int main() {
    long long int X, Y;
    std::cin >> X >> Y;

    long long int summation = X + Y;
    long long int multiplication = X * Y;
    long long int subtraction = X - Y;

    std::cout << X << " + " << Y << " = " << summation << std::endl;
    std::cout << X << " * " << Y << " = " << multiplication << std::endl;
    std::cout << X << " - " << Y << " = " << subtraction << std::endl;

    return 0;
}

