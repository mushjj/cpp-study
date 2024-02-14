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
        cout << "�¼��� �����Ͻðڽ��ϱ�? (y/n) : ";
        cin >> select;
        cout << "\n\n\n\n" << endl;

        if (select == 'y') {
            PrintSeat(seat);

            cout << "�� ��° �¼��� �����ұ��? : ";
            cin >> book;
            cout << endl;
            if (1 <= book && book <= 10) {
                for (int i = 0; i < 10; i++) {
                    if (seat[book-1] == true) {
                        cout << "�ش� �¼��� �̹� ����� �¼��Դϴ�.\n" << endl;
                        cout << "�ٽ� ";
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
                cout << "1~10�� ���� ������ �����Ͽ� �ֽʽÿ�.\n\n\n\n" << endl;
                continue;
            }
            if (flag == 1) {
                PrintSeat(seat);
                cout << "������ �Ϸ�Ǿ����ϴ�." << endl;
                cout << "�� ";
            }
        }

        else if (select == 'n') {
            cout << "���� �ý����� �����մϴ�." << endl;
            cout << "�̿����ּż� �����մϴ�.\n\n\n\n" << endl;
            break;
        }
        else
            cout << "y�� n �߿��� �Է��Ͽ� �ֽʽÿ�.\n\n\n\n" << endl;
    }
}

// �¼� �� ���� ��Ȳ ��� �Լ�
void PrintSeat(const bool (&seat)[10]) {
    cout << "         <�¼� ��Ȳ>" << endl;
    cout << "------------------------------" << endl;
    cout << "1 2 3 4 5 6 7 8 9 10" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < 10; i++)
        cout << seat[i] << " ";
    cout << "\n\n\n\n" << endl;
}