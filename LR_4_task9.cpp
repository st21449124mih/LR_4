#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a >= 1 && a <= 255) &&
        (b >= 1 && b <= 255) &&
        (c >= 1 && c <= 255) &&
        (d >= 1 && d <= 255)) {
        string ip = to_string(a) + "." + to_string(b) + "." + to_string(c) + "." + to_string(d);
        cout << ip << endl;
    } else {
        cout << "Invalid IP address values!" << endl;
    }

    return 0;
}
