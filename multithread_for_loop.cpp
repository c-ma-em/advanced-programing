#include <iostream>
#include <thread>
using namespace std;

void func(int i) {
    cout << "Hello " << i << endl;
}

int main() {
    thread t[5];

    for (int i = 0; i < 5; i++) {
        t[i] = thread(func, i);
        t[i].join(); 
    }

    return 0;
}
