#include <iostream>
using namespace std;

int main() {
    float a = 20, b = 30;
    int c = 4;
    float output;
    output = a - (b / (float)c);
    cout << "output: " << output << endl;
    return 0;
}