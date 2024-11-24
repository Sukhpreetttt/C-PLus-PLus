#include <iostream>
using namespace std;

void print1(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cout << "*";
        }
        cout << "\n";
    }
} 

int main() {
    print1(4);
}