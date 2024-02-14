#include <iostream>

using namespace std;

class PrinterTest {
    int paper = 0;
    bool isDP;
    
    void NumOfPapers() {
        cout << "���� ���� " << paper << "���� �����ֽ��ϴ�.\n" << endl;
    }

    void isDuplex() {
        if (isDP) {
            cout << "���� ��� : ���\n" << endl;
        }
        else {
            cout << "���� ��� : �ܸ�\n" << endl;
        }
    }

    public :
        PrinterTest(int i, bool TF) {
            paper = i;
            isDP = TF;
        }

        void Print(int n) {
            PrinterTest::isDuplex(); // ���� ���(���/�ܸ�) ���
            PrinterTest::NumOfPapers(); // ���� ���� �� ���
            if (isDP) { // ���
                    cout << "���� " << n << "���� ������� ����մϴ�.\n" << endl;
                    if (paper >= (int)(n/2.0+0.5)) {
                        paper -= (int)(n/2.0+0.5);
                    }
                    else if (paper < n) {
                        cout << "��� ����Ϸ��� ������ " << (int)(n/2.0+0.5)-paper << "�� �����մϴ�." << endl;
                        paper = 0;
                    }
                }
            else { // �ܸ�
                cout << "���� " << n << "���� �ܸ����� ����մϴ�.\n" << endl;
                if (paper >= n) {
                    paper -= n;
                }
                else if (paper < n) {
                    cout << "��� ����Ϸ��� ������ " << n-paper << "�� �����մϴ�." << endl;
                    paper = 0;
                }
            }
            PrinterTest::NumOfPapers();
        }
        
        void setNumofPapers(int n) {
            paper = n;
            cout << "���� " << n << "���� �߰��մϴ�.\n" << endl;
        }

        void setDuplex(bool tf) {
            isDP = tf;
        }
};

int main() {
    PrinterTest Printer(20, true);

    Printer.Print(25);
    Printer.setDuplex(false);
    Printer.Print(10);
    
    return 0;
}