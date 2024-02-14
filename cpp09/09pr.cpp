#include <iostream>
#include <cstring>

using namespace std;

class Girl;

class Boy {
    int height;
    const char *num;
    friend class Girl;

    public :
        Boy(int len) : height(len) {
            num = "010-4567-8215";
        }
        void ShowFrn(Girl &grl) {
            cout << "Her Phone number : " << grl.pNum << "\n" << endl;
        }
};

class Girl {
    char *pNum;
    friend class Boy;

    public :
        Girl(const char *num) {
            int len = strlen(num) + 1;
            pNum = new char[len];
            strcpy(pNum, num);
        }

        void ShowFriendInfo(Boy &frn) {
            cout << "His height : " << frn.height << endl;
            cout << "His Phone number : " << frn.num << endl;
        }
};

int main() {
    Boy boy(188);
    Girl girl("010-9790-2125");
    girl.ShowFriendInfo(boy);
    boy.ShowFrn(girl);
}