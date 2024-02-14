#include <iostream>

using namespace std;

class FruitSeller {
    int fruit_price, countOffruit, margin ;

    public :
        FruitSeller() {
            fruit_price = countOffruit = margin = 0;
        }
        FruitSeller(int fruitprice, int num, int profit) :
            fruit_price(fruitprice),
            countOffruit(num),
            margin(profit) {}

        int SaleFruit(int num) {
            int price;
            
            countOffruit -= num;
            price = num * fruit_price;

            return price;
        }

        int getFruitNum() {
            return countOffruit;
        }
        
        void showSalesInfo() {
            cout << endl;// �Ǹ� ���� ���
        }
};

class FruitBuyer {
    int buyerMoney, numOffruit;

    public :
        FruitBuyer(int money) : buyerMoney(money) {}

        void BuyerFruit(FruitSeller &seller, int numOforder) {
            if (buyerMoney <= seller.SaleFruit(numOforder)) {
                if (seller.getFruitNum() >= numOffruit) { // �Ǹ��ڰ� ������ �ִ� ���� ������ �����;� ��

                }
            }
            else cout << "�Һ����� ������ �����մϴ�." << endl;
        }

        void showBuy() {

        }
};

int main() {
    int price, n;
    FruitSeller seller(1000, 20, 50000);
    FruitBuyer buy[3] = {FruitBuyer(5000), FruitBuyer(10000), FruitBuyer(4000)};

    for (int i = 0; i < 3; i++) {
        cout << "������ ������ ���� �Է��Ͻÿ� : ";
        cin >> n;
        buy[i].BuyerFruit(seller, n);
    }
    cout << "==================================================" << endl;
    cout << "�Ǹ��� ��Ȳ" << endl;
    
    seller.showSalesInfo();
    cout << "���� ������ ��Ȳ" << endl;
    for (int i = 0; i < 3; i++) {
        buy[i].showBuy();
    }
}