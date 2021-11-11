#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

ostream &pcout(ostream &stream) {
    m.lock();
    cout << "start thread " << endl;
    m.unlock();
    this_thread::sleep_for(1s);
    m.lock();
    cout << "stop thread " << endl;
    m.unlock();
}

int main()
{
    pcout << "word1" << endl;
    pcout << "word2" << endl;
}

