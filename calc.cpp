#include <iostream>
using namespace std;

int main() {

    char op;
    float n1,n2;
    cout << "Enter the first number: " ;
    cin >> n1;
    cout << "Enter the second number: " ;
    cin >> n2;
    cout << "Enter the operator: " ;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "the result is " <<n1+n2;
        break;
    case '-':
        cout << "the result is " <<n1-n2;
        break;
    case '*':
        cout << "the result is " <<n1*n2;
        break;
    case '/':{
        if (n2==0)
        cout << "Error " ;
        
        cout << "the result is " <<n1/n2;
    }
    default:
        break;
    }
    
    return 0;
}