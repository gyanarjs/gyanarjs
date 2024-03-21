#include <iostream>
using namespace std;

// Object Like Macros
#define PI 3.14

// Object Like Macros
#define SQUARE(x) (x * x)

// Function Like Macros
#define PRINT(x) cout << "Value is: " << x << endl 
#define PRINTAGAIN(y) cout << "Value is: " << y << endl

// Multiline Macros
// #define PRINT_RECTANGLE(width, height)
//     for (int i = 0; i < height; i++)
// {
//     for (int j = 0; j < width; j++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }

int main()
{
    int r = 5;
    double area = PI * r * r;
    cout << "Area is: " << area << endl;

    int a = 5;
    int result = SQUARE(a);
    cout << "Square is: " << result << endl;

    int b = 6;
    PRINT(b);

    //PRINT_RECTANGLE(4,3);
}