#include <iostream>
using namespace std;

int main(){
    // dereference
    int a = 10;
    int b = 6;
    int y = 20;
    int * c= &a;
    cout << "alamat memori : "<< c << endl;
    cout << "nilai dari C : " << *c << endl;
    c =&y;
    cout << "alamat memori : " << c << endl;
    cout << "nilai dari C : " << *c << endl;

    
}