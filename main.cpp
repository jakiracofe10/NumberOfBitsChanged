#include <iostream>


using namespace std;

int determineBitFlips(int a, int b) {
    int num = a^b;
    int count = 0;
    do {
        if (num & 1 == 1) {
            count++;
        }
        num >>= 1;
    } while (num != 0);
    return count;
}


//Determines the number of bits required to convert int A to int B
int main() {
    int A = 31;
    int B = 14;
    int result = determineBitFlips(A, B);
    cout << result << endl;
    return 0;
}