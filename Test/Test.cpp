//#include <iostream>
//using namespace std;
//
//class A {
//public:
//    A() { cout << "A"; }
//    ~A() { cout << "a"; }
//};
//
//int main() {
//    A a;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int x = 0;
//    cout << (x++ == 0) << " " << x << endl;
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string s = "hello";
//    s += '!';
//    cout << s.length() << endl;
//    return 0;
//}


#include <iostream>

class Test {
public:
    Test() { std::cout << "Constructor\n"; }
    ~Test() { std::cout << "Destructor\n"; }
};

void func() {
    Test t;
    throw std::runtime_error("error");
}

int main() {
    try {
        func();
    }
    catch (...) {
        std::cout << "Caught\n";
    }
}
