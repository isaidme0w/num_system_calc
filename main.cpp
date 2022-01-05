#include <iostream>
#include "bin.cpp"
#include "hex.cpp"

using namespace std;

int main() {

    int input;

    cout << "Decimal number: ";
    cin >> input;

    int hwnm = numbers(input);
    int tab[hwnm],output[hwnm];
    int b = 1;
    fill(tab, hwnm, b);

    calculate_bin(hwnm, output, tab, input);

    cout << "Bin: ";
    for (int i = 0; i < hwnm; i++) cout << output[i];
    cout << endl;

    cin >> input;
    return 0;
}