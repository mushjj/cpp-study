#include <iostream>

using namespace std;

class PrinterTest {
    int paper = 0;
    bool isDP;
    
    void NumOfPapers() {
        cout << "현재 용지 " << paper << "장이 남아있습니다.\n" << endl;
    }

    void isDuplex() {
        if (isDP) {
            cout << "현재 모드 : 양면\n" << endl;
        }
        else {
            cout << "현재 모드 : 단면\n" << endl;
        }
    }

    public :
        PrinterTest(int i, bool TF) {
            paper = i;
            isDP = TF;
        }

        void Print(int n) {
            PrinterTest::isDuplex(); // 현재 모드(양면/단면) 출력
            PrinterTest::NumOfPapers(); // 현재 용지 수 출력
            if (isDP) { // 양면
                    cout << "용지 " << n << "장을 양면으로 출력합니다.\n" << endl;
                    if (paper >= (int)(n/2.0+0.5)) {
                        paper -= (int)(n/2.0+0.5);
                    }
                    else if (paper < n) {
                        cout << "모두 출력하려면 용지가 " << (int)(n/2.0+0.5)-paper << "장 부족합니다." << endl;
                        paper = 0;
                    }
                }
            else { // 단면
                cout << "용지 " << n << "장을 단면으로 출력합니다.\n" << endl;
                if (paper >= n) {
                    paper -= n;
                }
                else if (paper < n) {
                    cout << "모두 출력하려면 용지가 " << n-paper << "장 부족합니다." << endl;
                    paper = 0;
                }
            }
            PrinterTest::NumOfPapers();
        }
        
        void setNumofPapers(int n) {
            paper = n;
            cout << "용지 " << n << "장을 추가합니다.\n" << endl;
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