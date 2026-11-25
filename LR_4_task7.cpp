#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float v1 = 2.3f;
    float v2 = 2.3f;
    float v3 = 2.123456f;
    float v4 = 2.123456f;
    float v5 = 2.123456f;

    cout << v1 << endl;
    cout << fixed << setprecision(2) << v2 << endl;
    cout << fixed << setprecision(6) << v3 << endl;
    cout << defaultfloat << setprecision(2) << v4 << endl;
    cout << defaultfloat << setprecision(1) << v5 << endl;

    return 0;
}
