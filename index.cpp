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
// problem 22
#include <iostream>
#include <sstream>

using namespace std;


string evaluateExpression(string expression) {
    stringstream ss(expression);
    int A, B, C;
    char S, Q;

    ss >> A >> S >> B >> Q >> C;


    int correctResult;
    if (S == '+') {
        correctResult = A + B;
    } else if (S == '-') {
        correctResult = A - B;
    } else if (S == '*') {
        correctResult = A * B;
    } else {
        return "Invalid operator";
    }

    // Compare with C and return the appropriate output
    if (correctResult == C) {
        return "Yes";
    } else {
        return to_string(correctResult);
    }
}

int main() {
    string expression;
    getline(cin, expression); // Reading input line

    // Evaluate the expression and print the result
    cout << evaluateExpression(expression) << endl;

    return 0;
}
// problem 23
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the boundaries of the intersection
    int intersection_start = max(l1, l2);
    int intersection_end = min(r1, r2);

    // Check if there is an intersection
    if (intersection_start <= intersection_end) {
        cout << intersection_start << " " << intersection_end << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}

// problem 24 
#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main() {

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a = a % 100;
     b = b % 100;
      c = c % 100;
       d = d % 100;
       int product = a*b*c*d;
       int last_two_digit = product % 100;
       if(last_two_digit < 10){
        cout << 0 << last_two_digit << endl;
       }else{
           cout << last_two_digit << endl;

       }


    return 0;
}



// problem 25 submit hoy na
#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main() {
    // Read input values A, B, C, D
    int64_t A, B, C, D;
    cin >> A >> B >> C >> D;
    
    // Calculate A^B and C^D using pow function
    int64_t AB = pow(A, B);
    int64_t CD = pow(C, D);
    
    // Compare A^B and C^D
    if (AB > CD) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// problem 26
#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main() {

    int N ;
    cin >> N;
    for (int i = 1; i <= N; i++){
        cout << i<< endl;
    }

    return 0;
}
//problem 27
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    bool hasEven = false;
    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        hasEven = true;
    }
    
    if (!hasEven) {
        cout << -1 << endl;
    }
    
    return 0;
}
//problem 36
#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

int main() {

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }


    return 0;
}
// problem 38
#include <iostream>

using namespace std;

bool is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!(digit == 4 || digit == 7)) {
            return false;
        }
        num = num / 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    bool found = false;
    for (int i = a; i <= b; i++) {
        if (is_lucky(i)) {
            if (found) {
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
    cout << endl;

    return 0;
}
// three numbers
#include <iostream>

using namespace std;
int main() {
    int k,s;cin >> k >> s;
    int cnt  = 0;
    for (int x = 0; x<=k; x++){
        for(int y = 0; y<=k; y++){
            int z = s - x -y;
            if(z >=0 && z <= k){
                cnt++;
            }
                }
            }


    cout << cnt << endl;

    return 0;
}
// distinct 
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool visited[1000] = {false}; 

    
    for (int i = 0; i < n; i++) {
        int x = a[i];
        if (x < 1000) { 
            visited[x] = true;
        }
    }

    int cnt = 0;

   
    for (int i = 0; i < 1000; i++) {
        if (visited[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
// lowest number and where its index
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn = 1e9;
    for (int i =0; i<n; i++){
        mn = min(mn, a[i]);
    }
    cout << mn << " "  ;
    for(int i = 0; i< n; i++){
        if (a[i]== mn){
            cout << i+1 << endl;
        }
    }

    return 0;
}
// reverse 
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n = 6;
    int a[n] = {1,2,3,4,5,6};
    reverse(a,a+n);
    for(int i = 0; i< n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
// sort 
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n = 6;
    int a[n] = {10,20,3,40,5,60};
    sort(a,a+n);
    for(int i = 0; i< n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
// problem 28
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
// problem 29
#include <iostream>
using namespace std;

int main() {
    int password;
    const int correctPassword = 1999;

    while (cin >> password) {
        if (password == correctPassword) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
// problem 30
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // Reading input into the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Initializing the maximum element with the first element of the array
    int maxElement = a[0];

    // Finding the maximum element in the array
    for (int i = 1; i < n; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }

    // Printing the maximum element
    cout << " " << maxElement << endl;

    return 0;
}
// problem 31
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 12; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
// problem 32
#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main()
{
    int T;
    cin >> T;

    // Reading T test cases
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << factorial(N) << endl;
    }

    return 0;
}
// problem 33
#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    cout << (isPrime(X) ? "YES" : "NO") << endl;

    return 0;
}
// problem 34
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Step 1: Reverse the number N without leading zeros
    int reversedN = 0;
    int originalN = N;

    while (N > 0) {
        int digit = N % 10;
        reversedN = reversedN * 10 + digit;
        N /= 10;
    }

    // Step 2: Check if originalN is a palindrome
    bool isPalindrome = (originalN == reversedN);

    // Output reversedN and whether originalN is a palindrome
    cout << reversedN << endl;
    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
// problem 35
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    // Print all prime numbers between 1 and N
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
// problem 37
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << " ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout  << result << endl;

    return 0;
}
// problem 39
#include <iostream>
using namespace std;

int main() {
    
    char symbol;
    cin >> symbol;

   
    int n;
    cin >> n;

    
    int a[n];

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i]; j++) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}
// problem 40
#include <iostream>
using namespace std;

int main() {
    int n;
    //cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
// problem 41
#include <iostream>
using namespace std;

int main() {
    int n;
    //cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
// problem 42
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string N;
        cin >> N;
        
        // Print the digits of N in reverse order separated by space
        for (int i = N.length() - 1; i >= 0; i--) {
            cout << N[i];
            if (i > 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
// problem 43
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    
    while (cin >> N >> M) {
        if (N <= 0 || M <= 0) {
            break;
        }
        
        int start = min(N, M);
        int end = max(N, M);
        int sum = 0;
        
        for (int i = start; i <= end; ++i) {
            cout << i << " ";
            sum += i;
        }
        
        cout << "sum =" << sum << endl;
    }

    return 0;
}
// problem 44
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        // Ensure that X is less than Y
        if (X > Y) {
            swap(X, Y);
        }
        
        int sum = 0;
        
        // Sum odd numbers between X and Y (excluding X and Y)
        for (int i = X + 1; i < Y; ++i) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        
        // Print the result for the current test case
        cout << sum << endl;
    }

    return 0;
}
// problem 45
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Loop for each row of the pyramid
    for (int i = 1; i <= N; i++) {
        // Print spaces before the stars
        for (int space = 1; space <= N - i; space++) {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
// problem 46
#include <iostream>
using namespace std;

// Helper function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;

    // Loop through each number from 1 to N
    for (int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);
        // Check if the sum of digits is between A and B
        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl;

    return 0;
}
// problem 47
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int current = 1;

    for (int i = 1; i <= N; i++) {
        // Print three consecutive numbers
        cout << current << " " << (current + 1) << " " << (current + 2) << " PUM" << endl;
        // Move to the next set of numbers
        current += 4;
    }

    return 0;
}
// problem 48
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Print top half of the diamond including the middle row
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Print bottom half of the diamond including the middle row again
    for (int i = N; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
// problem 49
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        unsigned int N;
        cin >> N;
        
        // Step 1: Convert N to its binary representation and count the number of 1's
        int countOnes = 0;
        unsigned int temp = N;
        while (temp > 0) {
            countOnes += (temp & 1); // Check if the least significant bit is 1
            temp >>= 1; // Right shift to process the next bit
        }
        
        // Step 2: Create a new binary number consisting of 'countOnes' ones
        unsigned int result = (1 << countOnes) - 1;
        
        // Step 3: Print the result
        cout << result << endl;
    }
    
    return 0;
}


// problem 50
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    // Special cases for n = 1 or n = 2
    if (n >= 1) {
        cout << 0;
    }
    if (n >= 2) {
        cout << " " << 1;
    }
    
    // Variables to store the last two Fibonacci numbers
    int a = 0, b = 1, next;
    
    // Loop to compute the next Fibonacci numbers
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << " " << next;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printFibonacci(n);

    return 0;
}
// Triangle 
#include <iostream>
using namespace std;

struct Triangle{
    double base , height;

    double area(int base){

        return base * height /2;
    }


};

int main() {
    Triangle x;
    x.base = 10;
    x.height = 20;
    cout << x.area(20) << '\n';

    return 0;
}
// pointer
#include <iostream>
using namespace std;

int main() {
    int *ptr;
    int num = 10;
    *ptr = num;
    cout << *ptr << endl;

    return 0;
}
// 
// Finish code


