#include <iostream>
#include <cstring>

using namespace std;

class Info {
    char name[10], call[20];
    int age;

    public : 
        Info(const char *n, const char *tel, int old) :
            age(old) {
                strcpy(call, tel);
                strcpy(name, n);
            }
        
        void setName(const char *n) {
            strcpy(name, n);
        }

        void setTel(const char *tel) {
            strcpy(call, tel);
        }

        void setAge(int old) {
            age = old;
        }
        /* 

        const char *getName(const char *n) {
            return n;
        }

        const char *getTel(const char *tel) {
            return tel;
        }

        int getAge(int old) {
            return old;
        } */
        
        void Prn() const {
            cout << "이름 : " << name << endl;
            cout << "전번 : " << call << endl;
            cout << "나이 : " << age << "\n" << endl;
        }
};

int main() {
    char name[10], phone[20];
    int age;
    Info p1("Taylor", "010-1588-1312", 21);

    p1.Prn();

    cout << "이름 : ";
    cin >> name;

    cout << "전번 : ";
    cin >> phone;

    cout << "나이 : ";
    cin >> age;
    cout << endl;

    Info p2(name, phone, age);

    p2.Prn();
}



// class FruitSeller {
//     const int APPLE_PRICE;
//     int numofapples,myMoney;

//     public :
//         FruitSeller (int price, int num, int money) :
//           APPLE_PRICE(price),
//           numofapples(num),
//           myMoney(money)
//         {}

//         int SaleApples(int money) {
//             int num = money / APPLE_PRICE;
//             numofapples -= num;
//             myMoney += money;

//             return num;
//         }

//         void ShowSalesResult() const {
//             cout << "남은 사과 : " << numofapples << endl;
//             cout << "판매 수익 : " << myMoney << "\n" << endl;
        
//         }
// };

// int main() {
//     int price;
//     FruitSeller seller(1000, 20, 50000);

//     cout << "=====판매자 현항=====" << endl; 
//     seller.ShowSalesResult();
// }

// class Complex {
//     int real, image;

//     public :
//         Complex (int r = 0, int i = 0) : real(r), image(i) {}

//         void ShowComplex() const {
//             cout << "( " << real << " + " << image << "i )" << endl;
//         }
// };

// int main() {
//   Complex x(10, 20);
//   Complex y(30);

//   x.ShowComplex();
//   y.ShowComplex();  
// }