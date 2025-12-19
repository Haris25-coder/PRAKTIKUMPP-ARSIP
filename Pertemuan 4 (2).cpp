#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        cout << i << " ";
    }

    cout << "\nLooping Selesai";

    return 0;
}



COPNTINUE


#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; 
        }
        cout << i << " ";
    }
    cout << "\nLooping Selesai";
    return 0;
}
