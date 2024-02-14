#include <iostream>

using namespace std;

void PrintSeat(const bool (&)[10]);

int main() {
    bool seat[10] = {false};
    char select;
    int book, flag;

    cout << "\n\n\n\n" << endl;
    while (true) {
        flag = 0;
        cout << "좌석을 예약하시겠습니까? (y/n) : ";
        cin >> select;
        cout << "\n\n\n\n" << endl;

        if (select == 'y') {
            PrintSeat(seat);

            cout << "몇 번째 좌석을 예약할까요? : ";
            cin >> book;
            cout << endl;
            if (1 <= book && book <= 10) {
                for (int i = 0; i < 10; i++) {
                    if (seat[book-1] == true) {
                        cout << "해당 좌석은 이미 예약된 좌석입니다.\n" << endl;
                        cout << "다시 ";
                        break;
                    }
                    else {
                        if (i+1 == book) {
                            seat[i] = true;
                            flag = 1;
                            break;
                        }
                    }
                }   
            }
            else {
                cout << "1~10의 범위 내에서 선택하여 주십시오.\n\n\n\n" << endl;
                continue;
            }
            if (flag == 1) {
                PrintSeat(seat);
                cout << "예약이 완료되었습니다." << endl;
                cout << "더 ";
            }
        }

        else if (select == 'n') {
            cout << "예약 시스템을 종료합니다." << endl;
            cout << "이용해주셔서 감사합니다.\n\n\n\n" << endl;
            break;
        }
        else
            cout << "y와 n 중에서 입력하여 주십시오.\n\n\n\n" << endl;
    }
}

// 좌석 및 예약 현황 출력 함수
void PrintSeat(const bool (&seat)[10]) {
    cout << "         <좌석 현황>" << endl;
    cout << "------------------------------" << endl;
    cout << "1 2 3 4 5 6 7 8 9 10" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < 10; i++)
        cout << seat[i] << " ";
    cout << "\n\n\n\n" << endl;
}