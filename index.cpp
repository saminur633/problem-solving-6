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
// problem 4
#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;

    
    cin >> A >> B >> C >> D;

   
    long long X = (A * B) - (C * D);

    
    cout << "Difference = " << X << endl;

    return 0;
}
// problem 5
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#ifndef M_PI
#define M_PI 3.141592653
#endif

int main() {
    double R;
    cin >> R;

    double Area = M_PI * R * R;
    cout << fixed << setprecision(9) << Area << endl;

    return 0;
}
// problem 6 mile na 
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}
// problem 7
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double result = static_cast<double>(A) / B;

    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    return 0;
}
// problem 8
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A >= B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

// problem 9
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A % B == 0 || B % A == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }

    return 0;
}

