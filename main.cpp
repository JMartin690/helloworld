#include <iostream>

int main() {
#include <iostream>

    using namespace std;

// main program
    int main() {
        // unused variable warning from compiler
        // CMakeLists.txt must have
        // set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -Wno-sign-compare")
        int i;

        // memory leak warning from cppcheck
        int *leak = new int[10];

        // long line warning from cpplint
        cout << "Long lines are bad, limit it to 80 characters, use CLion > Settings > Editor > Code Style > Visual Guides" << endl;

        cout << "Hello, World!" << endl;

        return 0;
    }
}