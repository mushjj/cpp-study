#include <iostream>

using namespace std;

int main() {
    int menu, price, num, total;
    int coffee, water, milk, sugar; // 한 번의 재료
    int tcoffee, twater, tmilk, tsugar; // 총 재료
    char check;
    tcoffee = twater = tmilk = tsugar = total = 0; // 초기값 설정

    cout << "======메뉴를 선택해주세요======" << endl;
    cout << "1. 아메리카노" << endl;
    cout << "2. 에스프레소" << endl;
    cout << "3. 카푸치노" << endl;
    cout << "===============================" << endl;

    while (total < 200000) {
        coffee = water = milk = sugar = 0; // 초기값 설정

        cout << "커피를 주문하세요 : ";
        cin >> menu;

        // 가격 책정 및 필요 재료 계산
        switch (menu) {
            case 1 :
                price = 2000;
                break;
            case 2 :
                price = 500;
                break;
            case 3 :
                price = 6500;
                break;
            default :
                cout << "1~3번 중에 선택해주세요.\n" << endl;
                continue;
        }

        cout << "몇 잔? : ";
        cin >> num;

        switch (menu) {
            case 1 :
                coffee += 1 * num;
                water += 2 * num;

                tcoffee += 1 * num;
                twater += 2 * num;

                break;

            case 2 :
                coffee += 1 * num;
                water += 1 * num;

                tcoffee += 1 * num;
                twater += 1 * num;

                break;

            case 3 :                                
                coffee += 2 * num;
                water += 2 * num;
                milk += 2 * num;
                sugar += 2 * num;

                tcoffee += 2 * num;
                twater += 2 * num;
                tmilk += 2 * num;
                tsugar += 2 * num;

                break;

            default :
                cout << "1~3번 중에 선택해주세요." << endl;
                continue;
        }

        total += price * num; // 총계 계산

        cout << endl;
        cout << "주문금액 : " << total << "원" << endl;
        cout << "필요한 재료 : " << endl;
        cout << "커피 " << coffee << "잔, 물 " << water << "잔, 우유 " << milk << "잔, 설탕 " << sugar << "스푼" << endl;

        cout << "계속 주문 받을까요?(y/n) : ";
        cin >> check;
        if (check == 'n') {
            cout << "총 사용한는 커피 " << tcoffee << "잔, 물 " << twater << "잔, 우유 " << tmilk << "잔, 설탕 " << tsugar << "스푼입니다." << endl;            
            break; // n 입력할 경우 종료
        }

        cout << endl;
    }
}


// int main() {
//     int i, total = 0;

//     for (i = 1; i <= 10; i++) {
//         if (i % 2 == 0)
//             continue;
//         total += i;
//     }
//     cout << "i가 " << i << "일 때 for문을 벗어남." << endl;
//     cout << "Total : " << total << "." << endl;
// }


// int main() {
//     int num;
//     do {
//         cout << "수 입력 : ";
//         cin >> num;

//         cout << num << "(을)를 입력했습니다." << endl;
//     } while (num != 0);
// }


// int main() {
//     int num;
//     while (1) {
//         cout << "수 입력 : ";
//         cin >> num;

//         cout << num << "(을)를 입력했습니다." << endl;

//         if (num == 0) break;
//     }
// }


// int main() { // 구구단
//     for (int dan = 2; dan <= 9; dan++) 
//         for (int j = 1; j < 10; j++)
//             cout << dan << "*" << j << " = " << dan * j << endl;
// }


// int main() {
//     for (int r = 1; r <= 5; r++) {
//         for (int c = 1; c <= r; c++)
//             cout << "*";
//         cout << endl;
//     }

//     /*/
//     *
//     **
//     ***
//     ****
//     *****
//     /*/
// }


// int main() {
//     int count, menu, price, num, temp = 0, total = 0;

//     cout << "======메뉴를 선택해주세요======" << endl;
//     cout << "1. 라면" << endl;
//     cout << "2. 김밥" << endl;
//     cout << "3. 떡볶이" << endl;
//     cout << "4. 탄산음료" << endl;
//     cout << "===============================" << endl;

//     cout << "인원을 입력해주세요 : ";
//     cin >> count;

//     for (int i = 1; i <= count; i++) {
//         cout << "선택 : ";
//         cin >> menu;
//         cout << "수량 : ";
//         cin >> num;
        
//         // 메뉴에 따른 가격 책정 /////
//         switch (menu) {
//             case 1 :
//                 price = 5000; break;
//             case 2 :
//                 price = 3500; break;
//             case 3 :
//                 price = 4500; break;
//             case 4 :
//                 price = 2000; temp += 1; // temp는 음료수 주문한 인원 수
//                 break;
//             default :
//                 cout << "1~4번 중에 선택해주세요." << endl;
//                 return 0;
//         }
//         ////////////////////////////
//         total += price;
        
//         //////// 음료수 서비스 알림 /////////
//         if (num >= 3) {
//             if (menu == 4) {
//                 total -= 2000 * temp;
//                 cout << "음료수 "<< temp << "개 값은 서비스로 차감되었습니다.\n" << endl;
//             }
//             else
//                 cout << "음료수 " << temp << "개 서비스입니다.\n" << endl;
//         }
//         /////////////////////////////
//     }
//     //최종 출력
//     cout << "총금액은 " << total << "원입니다." << endl;
// }


// int main() {
//     int menu, price, num, total;

//     cout << "======메뉴를 선택해주세요======" << endl;
//     cout << "1. 라면" << endl;
//     cout << "2. 김밥" << endl;
//     cout << "3. 떡볶이" << endl;
//     cout << "4. 탄산음료" << endl;
//     cout << "===============================" << endl;

//     cout << "선택 : ";
//     cin >> menu;

//     switch (menu) {
//         case 1 :
//             price = 5000; break;
//         case 2 :
//             price = 3500; break;
//         case 3 :
//             price = 4500; break;
//         case 4 :
//             price = 2000; break;
//         default :
//             cout << "1~4번 중에 선택해주세요." << endl;
//             return 0;
//     }

//     cout << "수량 : ";
//     cin >> num;

//     total = price * num;
    
//     if (num >= 3) {
//         if (menu == 4)
//             total -= 2000;
//         else
//             cout << "음료수 1개 서비스입니다." << endl;
//     }

//     cout << "총금액은 " << total << "원입니다." << endl;
// }


// int main() {
//     int score;
//     char grade;
    
//     cout << "점수를 입력하세요 : ";
//     cin >> score;

//     switch (score / 10) {
//         case 10 : grade = 'A';
//             break;
//         case 9 : grade = 'B';
//             break;
//         case 8 : grade = 'C';
//             break;
//         case 7 : grade = 'D';
//             break;
//         default : grade = 'F';
//     }

//     cout << "학점은 " << grade << "입니다." << endl;
// }


// int main() {
//     int price, num, ship_fee;
//     float tax, total;
//     string name;

//     cout << "상품명이 무엇인가요? : ";
//     cin >> name;

//     cout << "상품의 가격을 입력해주세요 : ";
//     cin >> price;

//     cout << "상품 수량을 입력해주세요 : ";
//     cin >> num;

//     // 택배비 책정
//     if (num < 10)
//         ship_fee = num * 500;
//     else if (num < 20)
//         ship_fee = 3000;
//     else if (num <= 100)
//         ship_fee = 1000;
//     else
//         ship_fee = 0;

//     // 부가세 책정
//     if (price < 50000)
//         tax = price * 0.1;
//     else if (price < 100000)
//         tax = price * 0.13;
//     else   
//         tax = price * 0.15;
    
//     total = price + ship_fee + tax;

//     cout << name << "의 총금액은 " << total << "원 입니다." << endl;
// }


// int main() {
//     int score;
//     char grade;

//     cout << "점수를 입력하세요 : ";
//     cin >> score;

//     if (score >= 90)
//         grade = 'A';
//     else if (score >= 80)
//         grade = 'B';
//     else if (score >= 70)
//         grade = 'C';
//     else if (score >= 60)
//         grade = 'D';
//     else
//         grade = 'F';

//     cout << score << "점에 따른 학점은 \"" << grade << "\"입니다." << endl;
// }


// int main() {
//     int num, ship_fee;

//     cout << "수량을 입력하세요 : ";
//     cin >> num;
    
//     if (num < 10)
//         ship_fee = num * 500;
//     else if (num < 20)
//         ship_fee = 3000;
//     else if (num <= 100)
//         ship_fee = 1000;
//     else
//         ship_fee = 0;
    
//     cout << "\n배송비는 " << ship_fee << "원 입니다." << endl;

//     return 0;
// }


// int main() {
//     string name;
//     int num, price, total, ship_fee;

//     cout << "상품명을 입력하세요 : ";
//     cin >> name;

//     cout << "수량 및 단가를 차례로 입력하세요 : ";
//     cin >> num >> price;

//     if (price >= 50000)
//         ship_fee = 0;
//     else 
//         ship_fee = 2500;

//     total = num*price + ship_fee;

//     cout << name << "의 총금액은 " << total << "원 이며, 택배비는 " << ship_fee << "원입니다." << endl;

//     return 0;
// }


// int main() {
//     float x, y;

//     cout << "두 수를 입력하세요 : ";
//     cin >> x >> y;

//     if (y != 0)
//         cout << "x / y = " << (x/y) << endl;
//     else
//         cout << "계산이 불가합니다." << endl;

//     cout << x << ", " << y << endl;
// }