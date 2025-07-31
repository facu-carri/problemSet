#include <cmath>
#include <iomanip>
#include <iostream>
#include  <sstream>
using std::string;
using std::cin;
using std::cout;
using std::istringstream;

int main(){
    long double n, m, a;
    string chars;

    getline(cin, chars);

    istringstream iss(chars);
    iss >> n >> m >> a;

    const long double flagstonePerRow = ceill(n / a);
    const long double flagstonePerCol = ceill(m / a);

    cout << std::setprecision(20) << flagstonePerRow * flagstonePerCol;

    return 0;
}