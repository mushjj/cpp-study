#include <iostream>

using namespace std;

int main() {
    int menu, price, num, total;
    int coffee, water, milk, sugar; // �� ���� ���
    int tcoffee, twater, tmilk, tsugar; // �� ���
    char check;
    tcoffee = twater = tmilk = tsugar = total = 0; // �ʱⰪ ����

    cout << "======�޴��� �������ּ���======" << endl;
    cout << "1. �Ƹ޸�ī��" << endl;
    cout << "2. ����������" << endl;
    cout << "3. īǪġ��" << endl;
    cout << "===============================" << endl;

    while (total < 200000) {
        coffee = water = milk = sugar = 0; // �ʱⰪ ����

        cout << "Ŀ�Ǹ� �ֹ��ϼ��� : ";
        cin >> menu;

        // ���� å�� �� �ʿ� ��� ���
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
                cout << "1~3�� �߿� �������ּ���.\n" << endl;
                continue;
        }

        cout << "�� ��? : ";
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
                cout << "1~3�� �߿� �������ּ���." << endl;
                continue;
        }

        total += price * num; // �Ѱ� ���

        cout << endl;
        cout << "�ֹ��ݾ� : " << total << "��" << endl;
        cout << "�ʿ��� ��� : " << endl;
        cout << "Ŀ�� " << coffee << "��, �� " << water << "��, ���� " << milk << "��, ���� " << sugar << "��Ǭ" << endl;

        cout << "��� �ֹ� �������?(y/n) : ";
        cin >> check;
        if (check == 'n') {
            cout << "�� ����Ѵ� Ŀ�� " << tcoffee << "��, �� " << twater << "��, ���� " << tmilk << "��, ���� " << tsugar << "��Ǭ�Դϴ�." << endl;            
            break; // n �Է��� ��� ����
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
//     cout << "i�� " << i << "�� �� for���� ���." << endl;
//     cout << "Total : " << total << "." << endl;
// }


// int main() {
//     int num;
//     do {
//         cout << "�� �Է� : ";
//         cin >> num;

//         cout << num << "(��)�� �Է��߽��ϴ�." << endl;
//     } while (num != 0);
// }


// int main() {
//     int num;
//     while (1) {
//         cout << "�� �Է� : ";
//         cin >> num;

//         cout << num << "(��)�� �Է��߽��ϴ�." << endl;

//         if (num == 0) break;
//     }
// }


// int main() { // ������
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

//     cout << "======�޴��� �������ּ���======" << endl;
//     cout << "1. ���" << endl;
//     cout << "2. ���" << endl;
//     cout << "3. ������" << endl;
//     cout << "4. ź������" << endl;
//     cout << "===============================" << endl;

//     cout << "�ο��� �Է����ּ��� : ";
//     cin >> count;

//     for (int i = 1; i <= count; i++) {
//         cout << "���� : ";
//         cin >> menu;
//         cout << "���� : ";
//         cin >> num;
        
//         // �޴��� ���� ���� å�� /////
//         switch (menu) {
//             case 1 :
//                 price = 5000; break;
//             case 2 :
//                 price = 3500; break;
//             case 3 :
//                 price = 4500; break;
//             case 4 :
//                 price = 2000; temp += 1; // temp�� ����� �ֹ��� �ο� ��
//                 break;
//             default :
//                 cout << "1~4�� �߿� �������ּ���." << endl;
//                 return 0;
//         }
//         ////////////////////////////
//         total += price;
        
//         //////// ����� ���� �˸� /////////
//         if (num >= 3) {
//             if (menu == 4) {
//                 total -= 2000 * temp;
//                 cout << "����� "<< temp << "�� ���� ���񽺷� �����Ǿ����ϴ�.\n" << endl;
//             }
//             else
//                 cout << "����� " << temp << "�� �����Դϴ�.\n" << endl;
//         }
//         /////////////////////////////
//     }
//     //���� ���
//     cout << "�ѱݾ��� " << total << "���Դϴ�." << endl;
// }


// int main() {
//     int menu, price, num, total;

//     cout << "======�޴��� �������ּ���======" << endl;
//     cout << "1. ���" << endl;
//     cout << "2. ���" << endl;
//     cout << "3. ������" << endl;
//     cout << "4. ź������" << endl;
//     cout << "===============================" << endl;

//     cout << "���� : ";
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
//             cout << "1~4�� �߿� �������ּ���." << endl;
//             return 0;
//     }

//     cout << "���� : ";
//     cin >> num;

//     total = price * num;
    
//     if (num >= 3) {
//         if (menu == 4)
//             total -= 2000;
//         else
//             cout << "����� 1�� �����Դϴ�." << endl;
//     }

//     cout << "�ѱݾ��� " << total << "���Դϴ�." << endl;
// }


// int main() {
//     int score;
//     char grade;
    
//     cout << "������ �Է��ϼ��� : ";
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

//     cout << "������ " << grade << "�Դϴ�." << endl;
// }


// int main() {
//     int price, num, ship_fee;
//     float tax, total;
//     string name;

//     cout << "��ǰ���� �����ΰ���? : ";
//     cin >> name;

//     cout << "��ǰ�� ������ �Է����ּ��� : ";
//     cin >> price;

//     cout << "��ǰ ������ �Է����ּ��� : ";
//     cin >> num;

//     // �ù�� å��
//     if (num < 10)
//         ship_fee = num * 500;
//     else if (num < 20)
//         ship_fee = 3000;
//     else if (num <= 100)
//         ship_fee = 1000;
//     else
//         ship_fee = 0;

//     // �ΰ��� å��
//     if (price < 50000)
//         tax = price * 0.1;
//     else if (price < 100000)
//         tax = price * 0.13;
//     else   
//         tax = price * 0.15;
    
//     total = price + ship_fee + tax;

//     cout << name << "�� �ѱݾ��� " << total << "�� �Դϴ�." << endl;
// }


// int main() {
//     int score;
//     char grade;

//     cout << "������ �Է��ϼ��� : ";
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

//     cout << score << "���� ���� ������ \"" << grade << "\"�Դϴ�." << endl;
// }


// int main() {
//     int num, ship_fee;

//     cout << "������ �Է��ϼ��� : ";
//     cin >> num;
    
//     if (num < 10)
//         ship_fee = num * 500;
//     else if (num < 20)
//         ship_fee = 3000;
//     else if (num <= 100)
//         ship_fee = 1000;
//     else
//         ship_fee = 0;
    
//     cout << "\n��ۺ�� " << ship_fee << "�� �Դϴ�." << endl;

//     return 0;
// }


// int main() {
//     string name;
//     int num, price, total, ship_fee;

//     cout << "��ǰ���� �Է��ϼ��� : ";
//     cin >> name;

//     cout << "���� �� �ܰ��� ���ʷ� �Է��ϼ��� : ";
//     cin >> num >> price;

//     if (price >= 50000)
//         ship_fee = 0;
//     else 
//         ship_fee = 2500;

//     total = num*price + ship_fee;

//     cout << name << "�� �ѱݾ��� " << total << "�� �̸�, �ù��� " << ship_fee << "���Դϴ�." << endl;

//     return 0;
// }


// int main() {
//     float x, y;

//     cout << "�� ���� �Է��ϼ��� : ";
//     cin >> x >> y;

//     if (y != 0)
//         cout << "x / y = " << (x/y) << endl;
//     else
//         cout << "����� �Ұ��մϴ�." << endl;

//     cout << x << ", " << y << endl;
// }