#include <iostream>
#include <mutex>

using namespace std;
bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n%i == 0)return false;
    }
    return true;
}
void Prime(){
    while (true) {
        mutex m;
        m.lock();
        int number;
        cin >> number;
        int counter = 0;
        int numbers = 0;
        while (counter < number) {
            numbers++;
            if (checkPrime(numbers))counter++;
        }
        m.unlock();
        cout << numbers << endl;
    }
}

int main()
{
    Prime();
}


