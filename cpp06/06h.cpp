#include <iostream>
#include <cstring>

using namespace std;

class Deliver {
    int ship_num;
    char shiper[10];
    int fee, price, ship_fee;

    public : 
        Deliver(int n1, const char *name, int money, int total) :
            ship_num(n1),
            fee(money),
            price(total) {
                strcpy(shiper, name);
            }
        
        void Calc() {
            if (fee < 50000000)
                ship_fee = 2500;
            else
                ship_fee = 0;
            price = ship_fee + price;
        }
        
        void setSN(int SN) {
            ship_num = SN;
        }

        void setShiper(const char *name) {
            strcpy(shiper, name);
        }

        void setFee(int money) {
            fee = money;
        }

        void setPrice(int total) {
            price = total;
        }

        void Prn() const {
            cout << "배송번호 : " << ship_num << endl;
            cout << "배송기사 : " << shiper << endl;
            cout << "물품대금 : " << fee << endl;
            cout << "배 송 료 : " << price << endl;
        }
};

int main() {
    Deliver DM(201501, "홍길동", 0, 2500);
    int ship_num, fee, price;
    char shiper[10];

    DM.Calc();
    DM.Prn();
}