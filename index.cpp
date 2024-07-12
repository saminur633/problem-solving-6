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
// problem 10
#include <iostream>
#include <algorithm> // Include <algorithm> for std::min and std::max
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int minValue = min(min(A, B), C); // Find the minimum of A, B, and C
    int maxValue = max(max(A, B), C); // Find the maximum of A, B, and C
    
    cout << minValue << " " << maxValue << endl; // Output the minimum and maximum
    
    return 0;
}
// problem 11
#include <iostream>
#include <string>
using namespace std;

int main() {
    string F1, S1;
    string F2, S2;

    
    cin >> F1 >> S1;

    
    cin >> F2 >> S2;

    
    if (S1 == S2) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }

    return 0;
}
// problem 12
#include <iostream>
#include <cctype> // Include for character classification functions
using namespace std;

int main() {
    char X;
    cin >> X;
    
    if (isdigit(X)) {
        cout << "IS DIGIT" << endl;
    } else if (isupper(X)) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    } else if (islower(X)) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    } else {
        cout << "Unknown category" << endl;
    }

    return 0;
}
// problem 13
#include <iostream>
#include <cctype> // Include for character classification functions

using namespace std;

int main() {
    char X;
    cin >> X;


    if (isupper(X)) {
       
        char lower = tolower(X);
        cout << lower << endl;
    }else if (islower(X)){
       char upper = toupper(X);
       cout << upper << endl;
    }
     else {
        
        cout << X << endl;
    }

    return 0;
}
// problem 14
#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;


    cin >> A >> S >> B;


    switch (S) {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            if (B != 0) {
                cout << A / B << endl;
            } else {
                cout << "undefined (division by zero)" << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}
// problem 15
#include <iostream>
using namespace std;


int main() {
    int X;

    
    cin >> X;

    
    string X_str = to_string(X);

    
    char first_digit_char = X_str[0];

   
    int first_digit = first_digit_char - '0';

   
    if (first_digit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    return 0;
}

// problem 16
#include <iostream>
using namespace std;

int main() {
    float X, Y;
    
    // Read the input numbers
    cin >> X >> Y;
    
    // Check the location of the point
    if (X == 0 && Y == 0) {
        cout << "Origem" << endl;
    } else if (X == 0) {
        cout << "Eixo Y" << endl;
    } else if (Y == 0) {
        cout << "Eixo X" << endl;
    } else if (X > 0 && Y > 0) {
        cout << "Q1" << endl;
    } else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;
    } else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;
    } else if (X > 0 && Y < 0) {
        cout << "Q4" << endl;
    }

    return 0;
}
// problem 17
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365;
    int months = (N % 365) / 30;
    int days = (N % 365) % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
// problem 18
#include <iostream>
using namespace std;

int main() {
    float X;
    cin >> X;

    if (X >= 0.0 && X <= 25.0) {
        cout << "Interval [0,25]" << endl;
    } else if (X > 25.0 && X <= 50.0) {
        cout << "Interval (25,50]" << endl;
    } else if (X > 50.0 && X <= 75.0) {
        cout << "Interval (50,75]" << endl;
    } else if (X > 75.0 && X <= 100.0) {
        cout << "Interval (75,100]" << endl;
    } else {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}
// problem 19
#include <iostream>
#include <algorithm> // Include for std::sort
using namespace std;

int main() {
    long long int A, B, C;
    cin >> A >> B >> C;
    long long int arr[3] = {A, B, C };
    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
// problem 20
#include <iostream>
#include <iomanip>
#include <cmath> // Include for floor
using namespace std;

int main() {
    double N;
    cin >> N;

    cout << fixed << setprecision(3);

    // Check if the number is an integer
    if (N == static_cast<int>(N)) {
        cout << "int " << static_cast<int>(N) << endl;
    } else {
        int integerPart = static_cast<int>(N);
        double fractionalPart = N - integerPart;
        cout << "float " << integerPart << " " << fractionalPart << endl;
    }

    return 0;
}
// problem 21
#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;

    // Read the input
    cin >> A >> S >> B;

    switch (S) {
        case '>':
            cout << (A > B ? "Right" : "Wrong") << endl;
            break;
        case '<':
            cout << (A < B ? "Right" : "Wrong") << endl;
            break;
        case '=':
            cout << (A == B ? "Right" : "Wrong") << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}


