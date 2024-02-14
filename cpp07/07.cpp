#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string pw = "123456", enter;
    
    cout << "비밀번호를 입력하세요 : ";
    cin >> enter;

    cout << enter.compare(pw) << endl;
}