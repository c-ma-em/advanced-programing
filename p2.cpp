

/*
    Assignment Description:

    - Define a class that contains 10 names and 10 corresponding ages manually (hardcoded).
    - The class must include a function that returns the average age of the people.
    - The function should NOT take any parameters.
    - Nothing else (like names or individual ages) should be accessible from outside the class.
    - Only the average age should be accessible through a public method.
*/
#include <iostream>
#include <string>
using namespace std;
class People {
private:
    string names[10] = {
        "Ali", "Sara", "Reza", "Niloofar", "Mohammad",
        "Hana", "Omid", "Zahra", "Sina", "Elham"
    };

    int ages[10] = {20, 22, 19, 21, 23, 20, 24, 22, 18, 25};

public:
    double getAverageAge() {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += ages[i];
        }
        return static_cast<double>(sum) / 10;
    }
};

int main() {
    People group;
    cout << "Average age: " << group.getAverageAge() << endl;
    return 0;
}
