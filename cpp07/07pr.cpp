#include <iostream>
#include <cstring>

using namespace std;

// int main() {
//     string names[5];

//     for (int i = 0; i < 5; i++) {
//         cout << "이름 : ";
//         getline(cin, names[i], '\n');
//     }

//     string latter = names[0];

//     for (int i = 0; i < 5; i++) {
//         if (latter < names[i])
//             latter = names[i];
//     }
//     cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << "입니다." << endl;
// }

// int main() {
//     string str;
//     string address("용인시 수지구 고기로 89 ");
//     string CopyAddress(address);

//     string *p = new string("서경진 ");
//     cout << " C/C++ 담당 : " << *p << endl;
//     p->append("강사");

//     cout << *p << endl;
//     cout << address << endl;
//     cout << CopyAddress << endl;

//     delete p;
// }


class Account {
    string accountnum, name, password;
    double balance = 0;
        
public :
    Account(string accnum, string name, string pw, double bal);
    void Deposit(int money);
    void Withdraw(int money);
    double getBalance();
    void prnAccount();
};

Account::Account(string accnum, string NAME, string pw, double bal) : balance(bal) {
    accountnum = accnum;
    name = NAME;
    password = pw;
}

void Account::Deposit(int money) {
    balance += money;
}

void Account::Withdraw(int money) {
    string enter;
    int error_count = 0;

    do {
        cout << "비밀번호를 입력하세요 : ";
        cin >> enter;
        if (!password.compare(enter)) {    
            balance -= money;
            cout << money << "원 인출되었습니다." << endl;
            break;
        }
        else {
            cout << "비밀번호가 일치하지 않습니다.\n오류 횟수 : " << error_count + 1 << "회\n" << endl;
            error_count += 1;
        }
    } while(error_count < 3);
    if (error_count >= 3)
        cout << "실패 횟수 초과입니다.\n인출 시스템을 종료합니다.\n" << endl;
}

double Account::getBalance() {
    return balance;
}

void Account::prnAccount() {
    cout << accountnum << "\t" << name << "\t" << balance << endl;
}

int main() {
    Account acc1("234-23-422254", "김선하", "1q2w3e4r", 450000);
    // Account acc2("425-15-453627", "이지연", 65000);
    // Account acc3("537-56-563465", "임현아", 5000);
    
    acc1.prnAccount();
    // acc2.prnAccount();
    // acc3.prnAccount();

    acc1.Deposit(100000);
    acc1.Withdraw(30000);
    // acc2.Deposit(400000);
    cout << "현재 잔액 : " << acc1.getBalance() << endl;
    // acc2.getBalance();
}



// int main() {
//     string str;
//     string address("용인시 수지구 고기로 89 ");
//     string CopyAddress(address);

//     string *p = new string("서경진 ");
//     cout << " C/C++ 담당 : " << *p << endl;
//     p->append("강사");

//     cout << *p << endl;
//     cout << address << endl;
//     cout << CopyAddress << endl;

//     delete p;
// }


// class Account {
//     char *accountnum, *name;
//     double balance = 0;
        
// public :
//     Account(const char *accnum, const char *name, double bal);
//     Account();
//     void Deposit(int money);
//     void Withdraw(int money);
//     double getBalance();
//     void prnAccount();
// };

// Account::Account(const char *accnum, const char *NAME, double bal) : balance(bal) {
//     accountnum = new char[strlen(accnum) + 1];
//     strcpy(accountnum, accnum);
//     name = new char[strlen(NAME) + 1];
//     strcpy(name, NAME);
// }

// void Account::Deposit(int money) {
//     balance += money;
// }

// void Account::Withdraw(int money) {
//     balance -= money;
// }

// double Account::getBalance() {
//     return balance;
// }

// void Account::prnAccount() {
//     cout << accountnum << "\t" << name << "\t" << balance << endl;
// }

// int main() {
//     Account acc1("234-23-422254", "김선하", 450000);
//     Account acc2("425-15-453627", "이지연", 65000);
//     Account acc3("537-56-563465", "임현아", 5000);
    
//     acc1.prnAccount();
//     acc2.prnAccount();
//     acc3.prnAccount();

//     acc1.Deposit(100000);
//     acc1.Withdraw(30000);
//     acc2.Deposit(400000);
//     acc1.getBalance();
//     acc2.getBalance();
// }



// class Student {
//     int order, kor, eng, math, total = 0;
//     char *name;
//     double avg;

//     public : 
//         Student(int ord, const char *NAME, int KOR, int ENG, int MATH) :
//             order(ord), kor(KOR), eng(ENG), math(MATH) {
//                 name = new char[strlen(NAME) + 1];
//                 strcpy(name, NAME);
//                 total = kor + eng + math;
//                 avg = total / 3;
//             }
//         ~Student() {
//             delete name;
//         }

//         void std_print() {
//             cout << order << "      \t" << name << "\t" << kor << "\t" << eng << "\t" << math << "\t" << total << "\t" << avg << "\t\n" << endl;
//         }
// };

// int main() {
//     Student student1(1, "황순혜", 99, 80, 95);
//     Student student2(2, "이민우", 60, 80, 90);
//     Student student3(3, "김덕윤", 85, 70, 90);
    
//     cout << "학생번호   이름    국어    영어    수학    총점    평균" << endl;

//     student1.std_print();
//     student2.std_print();
//     student3.std_print();
// }



// class Circle {
//     int radius;

//     public :
//         Circle() {

//         }
        
//         void setRadius(int r) {
//             radius = r;
//         }

//         double getArea() {
//             return 3.14 * radius * radius;
//         }
// };

// int main() {
//     int n, radius;

//     cout << "생성하고자 하는 원의 개수 : ";
//     cin >> n;

//     if (n <= 0) return 0;

//     Circle *pArray = new Circle[n];
//     for (int i = 0; i < n; i++) {
//         cout << "원" << i + 1 << " : ";
//         cin >> radius;
        
//         pArray[i].setRadius(radius);
//     }
//     int count = 0;

//     Circle *p = pArray;
//     for (int i = 0; i < n; i++) {
//         cout << p->getArea() << "";
//         if (p->getArea() >= 100 && p->getArea() <= 200)
//             count++;
//         p++;
//     }
//     cout << endl;

//     delete[] pArray;
// }




// class Person {
//     char *name, *phone;
//     int age;

//     public :
//         Person (const char *_name, const char*_phone, int _age);
//         ~Person();
//         void ShowData();
// };

// Person::Person(const char *_name, const char *_phone, int _age) {
//     name = new char[strlen(_name) + 1];
//     strcpy(name, _name);

//     phone = new char[strlen(_phone) + 1];
//     strcpy(phone, _phone);

//     age = _age;
// }

// void Person::ShowData() {
//     cout << "name : " << name << endl;
//     cout << "phone : " << phone << endl;
//     cout << "age : " << age << endl;
// }

// Person::~Person() {
//     delete []name;
//     delete []phone;
//     cout << "소멸자 호출" << endl;
// }

// int main() {
//     Person p("서경진", "010-4223-4145", 18);
    
//     p.ShowData();

//     return 0;
// }



// class Circle {
//     int radius;

//     public :
//         Circle();
//         Circle(int r);
//         ~Circle();
        
//         void setRadius(int r) {
//             radius = r;
//         }

//         double getArea() {
//             return 3.14 * radius * radius;
//         }
// }

// Circle::Circle() {
//     radius = 5;
// }

// Circle::Circle(int r) {
//     radius = r;
// }

// Circle::~Circle() {
//     delete radius;
// }

// int main() {
//     int r;

//     while (true) {
//         cout << "정수 반지름을 입력하세요(음수면 종료) : ";
//         cin >> r;

//         if (r < 0) break;
//         Circle *p = new Circle(r);
//         cout << "원의 면적은 " << p->getArea() << endl;

//     delete p;
//     }

//     return 0;
// }