#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string pw = "123456", enter;
    
    cout << "��й�ȣ�� �Է��ϼ��� : ";
    cin >> enter;

    cout << enter.compare(pw) << endl;
}