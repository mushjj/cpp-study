#include <iostream>

using namespace std;

class Base {
    public :
        Base() {
            cout << "Base class 생성자 호출!" << endl;
        }

        Base(int i) {
            cout << "Base class (int i) 생성자 호출!" << endl;
        }

        ~Base() {
            cout << "Base class 소멸자 호출!" << endl;
        }
};

class Derived : public Base {
    public :
        Derived() {
            cout << "Derived class 생성자 호출!" << endl;
        }

        Derived(int i) {
            cout << "Derived class (int i) 생성자 호출!" << endl;
        }

        ~Derived() {
            cout << "Derived class 소멸자 호출!" << endl;
        }
};

int main() {
    cout << "Object 1" << endl;
    Derived obj1;

    cout << "Object 2" << endl;
    Derived obj2(10);
}





// class Calc {
// protected :
//     int a, b, c;

// public :
//     void Init(int nA, int nB) {
//         a = nA;
//         b = nB;
//         c = 0;
//     }

//     void Prn() {
//         cout << a << "\t" << b << "\t" << c << endl;
//     }
// };

// class Add : public Calc {
// public :
//     void Sum() {
//         c = a + b;
//     }
// };

// class Mul : public Calc {
// public :
//     void Multi() {
//         c = a * b;
//     }
// };

// int main() {
//     Add x;
//     x.Init(3, 5);

//     Mul y;
//     y.Init(2, 7);

//     x.Sum();
//     x.Prn();

//     y.Multi();
//     y.Prn();
// }




// class Point {
//     int x, y;

//     public :
//         Point(int i = 0, int j = 0) : x(i), y(j) {}

//         Point operator-(Point p) {
//             Point point;
//             point.x = this->x - p.x;
//             point.y = this->y - p.y;

//             return point;
//         }

//         void Show() {
//             cout << x << ", " << y << endl;
//         }
// };

// int main() {
//     Point p1(10, 20), p2(20, 40), result;
    
//     result = p1 - p2;
//     result.Show();
// }




// class Complex {
//     int real, image;

// public :
//     Complex(int r = 0, int i = 0) : real(r), image(i) {}

//     void ShowComplex() {
//         if (image > 0)
//             cout << "(" << real << " + " << image << "i)" << endl;
//         else if (image < 0)
//             cout << "(" << real << image << "i)" << endl;
//         else cout << real << endl;
//     }

//     Complex operator+(Complex right_hand) {
//         Complex res;
//         res.real = this->real + right_hand.real;
//         res.image = this->image + right_hand.image;

//         return res;
//     }

//     Complex operator-(const Complex& right_hand) const {
//         Complex res;
        
//         res.real = this->real + right_hand.real;
//         res.image = this->image + right_hand.image;

//         return res;
//     }

//     Complex operator-() const {
//         Complex res;
        
//         res.real = -real;
//         res.image = -image;

//         return res;
//     }
// };

// int main() {
//     Complex x(10, 20), y(20, 40), z;

//     cout << "-- 두 Complex 객체에 대한 덧셈 --" << endl;
//     z = x + y;
//     x.ShowComplex();
//     y.ShowComplex();
//     z.ShowComplex();

//     cout << "\n-- 두 Complex 객체에 대한 뺄셈 --" << endl;
//     z = x - y;
//     x.ShowComplex();
//     y.ShowComplex();
//     z.ShowComplex();

//     cout << "\n-- Complex 객체의 부호 변경 --" << endl;
//     z = -x;
//     x.ShowComplex();
//     z.ShowComplex();
// }




// class Point {
//     int xpos, ypos;

// public :
//     Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

//     void ShowPointInfo() {
//         cout << "[" << xpos << ", " << ypos << "]" << endl;
//     }

//     friend Point operator+(const Point& pos1, const Point& pos2);
// };

// Point operator+(const Point& pos1, const Point& pos2) {
//     Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//     return pos;
// }

// int main() {
//     Point pos1(3, 4);
//     Point pos2(30, 40);
//     Point pos3 = pos1 + pos2;

//     pos1.ShowPointInfo();
//     pos2.ShowPointInfo();
//     pos3.ShowPointInfo();
// }




// class Complex {
//     int real, image;

//     public :
//         Complex(int r = 0, int i = 0) : real(r), image(i) {}

//         void ShowComplex() {
//             cout << this->real << " + " << this->image << "i" << endl;
//         }

//         friend Complex Sum(Complex left_hand, Complex right_hand) {
//             Complex res;
            
//             res.real = left_hand.real + right_hand.real;
//             res.image = left_hand.image + right_hand.image;

//             return res;
//         }
// };        

// int main() {
//     Complex comp[2] = {Complex(3, 4), Complex(7, 1)};
//     Complex z;

//     z = Sum(comp[0], comp[1]);

//     z.ShowComplex();
// }



// class Girl;

// class Boy {
//     int height;
//     const char *num;
//     friend class Girl;

//     public :
//         Boy(int len) : height(len) {
//             num = "010-4567-8215";
//         }
//         void ShowFrn(Girl &grl) {
//             cout << "Her Phone number : " << grl.pNum << "\n" << endl;
//         }
// };

// class Girl {
//     char *pNum;
//     friend class Boy;

//     public :
//         Girl(const char *num) {
//             int len = strlen(num) + 1;
//             pNum = new char[len];
//             strcpy(pNum, num);
//         }

//         void ShowFriendInfo(Boy &frn) {
//             cout << "His height : " << frn.height << endl;
//             cout << "His Phone number : " << frn.num << endl;
//         }
// };

// int main() {
//     Boy boy(188);
//     Girl girl("010-9790-2125");
//     girl.ShowFriendInfo(boy);
//     boy.ShowFrn(girl);
// }