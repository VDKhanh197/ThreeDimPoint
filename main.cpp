#include <iostream>
#include"point.h"
#include"threedimpoint.h"
#include"colorthreedimpoint.h"


using namespace std;
int main()
{
    Point A, B;
    ThreeDimPoint P, Q;
    cout << "\nPoint A: " << A;
    cout << "\nThreeDimPoint P: " << P;
    cin >> A;
    cin >> P;
    cout << "\nPoint A: " << A;
    cout << "\nThreeDimPoint P: " << P;
    B = A;
    Q = P;
    cout << "\nPoint B: " << B;
    cout << "\nThreeDimPoint Q: " << Q;

    ThreeDimPoint R(1,1,1);
    R++;
    ++R;
    cout << "\nThreeDimPoint R: " << R;
    cout << "\nR++: " << R++;
    cout << "\nThreeDimPoint R: " << R;
    cout << "\n++R: " << ++R;
    cout << "\nThreeDimPoint R: " << R;
    return 0;
}
/*
int main()
{
    Point A(1,2), B(3,4);
    ThreeDimPoint P, Q(5,6,7);
    cout << "\nP: ";
    P.Show();
    cout << "\nQ: ";
    Q.Show();
    ThreeDimPoint M = Q;
    cout << "\nM: ";
    M.Show();

    P.Init();
    cout << "\nP: ";
    P.Show();
    P.Point::Show();
    cout << "\nOP = " << P.Distance();
    cout << "\nOQ = " << Q.Distance();
    cout << "\nPQ = " << P.Distance(Q);
    ColorThreeDimPoint M(1,2,3,5);
    cout << "\nM: ";
    M.Show();

    ColorThreeDimPoint N = M;//HTL Sao chep
    N.Show();
    N.Init();
    N.Show();
    return 0;
}
*/
/*
int main()
{
    Point A(1,2), B(3,4), C(5);
    cout << "\nOA = " << A.Distance();
    cout << "\nOB = " << B.Distance();
    cout << "\nAB = " << A.Distance(B);
    cout << "\nBA = " << B.Distance(A);
//    cout << "\nDiem A:";
//    A.Show();
//    cout << "\nDiem B:";
//    B.Show();
//    cout << "\nDiem C:";
//    C.Show();
    cout << "\nDiem A: " << A;
    cout << "\nDiem B: " << B;
    cout << "\nDiem C: " << C;

    Point D = B;//HTL sao chep
//    cout << "\nDiem D:";
//    D.Show();
    cout << "\nDiem D: " << D;

//    Point E(B);//HTL sao chep
//    cout << "\nDiem E:";
//    E.Show();
    Point F;
    F = B;//SD phep gan
    cout << "\nDiem F: " << F;

    F = A++;
    cout << "\nDiem A: " << A;
    cout << "\nDiem F: " << F;

    F = ++B;
    cout << "\nDiem B: " << B;
    cout << "\nDiem F: " << F;

    return 0;
}
*/
