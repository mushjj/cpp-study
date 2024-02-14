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
            cout << endl;// 판매 정보 출력
        }
};

class FruitBuyer {
    int buyerMoney, numOffruit;

    public :
        FruitBuyer(int money) : buyerMoney(money) {}

        void BuyerFruit(FruitSeller &seller, int numOforder) {
            if (buyerMoney <= seller.SaleFruit(numOforder)) {
                if (seller.getFruitNum() >= numOffruit) { // 판매자가 가지고 있는 과일 수량을 가져와야 됨

                }
            }
            else cout << "소비자의 현금이 부족합니다." << endl;
        }

        void showBuy() {

        }
};

int main() {
    int price, n;
    FruitSeller seller(1000, 20, 50000);
    FruitBuyer buy[3] = {FruitBuyer(5000), FruitBuyer(10000), FruitBuyer(4000)};

    for (int i = 0; i < 3; i++) {
        cout << "구입할 과일의 수를 입력하시오 : ";
        cin >> n;
        buy[i].BuyerFruit(seller, n);
    }
    cout << "==================================================" << endl;
    cout << "판매자 현황" << endl;
    
    seller.showSalesInfo();
    cout << "과일 구매자 현황" << endl;
    for (int i = 0; i < 3; i++) {
        buy[i].showBuy();
    }
}