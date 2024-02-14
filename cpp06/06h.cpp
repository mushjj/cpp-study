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
            cout << "��۹�ȣ : " << ship_num << endl;
            cout << "��۱�� : " << shiper << endl;
            cout << "��ǰ��� : " << fee << endl;
            cout << "�� �� �� : " << price << endl;
        }
};

int main() {
    Deliver DM(201501, "ȫ�浿", 0, 2500);
    int ship_num, fee, price;
    char shiper[10];

    DM.Calc();
    DM.Prn();
}