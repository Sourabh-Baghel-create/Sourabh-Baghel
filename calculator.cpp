#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "enter 2 numbers\n";
    cin >> a >> b;

    cout << "choose + - * / : ";
    cin >> op;

    if(op == '+'){
        cout << "ans is " << a + b;
    }
    if(op == '-'){
        cout << "ans is " << a - b;
    }
    if(op == '*'){
        cout << "ans is " << a * b;
    }
    if(op == '/'){
        cout << "ans is " << a / b;
    }

    return 0;
}
