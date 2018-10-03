#include <iostream>
#include <functional>
int main(int arc, char * argv[]) {
    [out = std::ref(std::cout << "Hello")](){out.get() << " World";}();
    return 0;
}
