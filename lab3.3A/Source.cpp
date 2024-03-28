#include <iostream>
#include "PublicDerived.h"
#include "PrivateDerived.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PublicDerived z1, z2, z3;

    cout << "������ �������� ��� z1 (PublicDerived):" << endl;
    cin >> z1;

    cout << "z1 (PublicDerived): " << z1 << ", ��������: " << z1.value() << endl;
    z1.Reduce();
    cout << "�������� �������� z1 (PublicDerived): " << z1 << endl;

    cout << "������ �������� ��� z2 (PublicDerived):" << endl;
    cin >> z2;

    cout << "z2 (PublicDerived): " << z2 << ", ��������: " << z2.value() << endl;
    z2.Reduce();
    cout << "�������� �������� z2 (PublicDerived): " << z2 << endl;
    // ���������
    z3 = z1 + z2;
    cout << "��������� ��������� z1 � z2 (PublicDerived): " << z3 << ", ���� ��������: " << z3.value() << endl;

    // ³�������
    z3 = z1 - z2;
    cout << "��������� �������� z1 � z2 (PublicDerived): " << z3 << ", ���� ��������: " << z3.value() << endl;

    // ��������
    z3 = z1 * z2;
    cout << "��������� �������� z1 � z2 (PublicDerived): " << z3 << ", ���� ��������: " << z3.value() << endl;


    // ��������� �� ��������� 
    ++z3;
    cout << "ϳ��� ����������� ���������� (PublicDerived): " << z3 << endl;

    PublicDerived objPostInc = z3++;
    cout << "ϳ��� ������������ ���������� (PublicDerived): " << z3 << " (���������� ��'���: " << objPostInc << ")" << endl;

    --z3;
    cout << "ϳ��� ����������� ���������� (PublicDerived): " << z3 << endl;

    PublicDerived objPostDec = z3--;
    cout << "ϳ��� ������������ ���������� (PublicDerived): " << z3 << " (���������� ��'���: " << objPostDec << ")" << endl;


    PrivateDerived z4, z5, z6;

    cout << "������ �������� ��� z4 (PrivateDerived):" << endl;
    cin >> z4;

    cout << "z4 (PrivateDerived): " << z4 << ", ��������: " << z4.value() << endl;
    z4.Reduce();
    cout << "�������� �������� z4 (PrivateDerived): " << z4 << endl;

    cout << "������ �������� ��� z5 (PrivateDerived):" << endl;
    cin >> z5;

    cout << "z5 (PrivateDerived): " << z5 << ", ��������: " << z5.value() << endl;
    z5.Reduce();
    cout << "�������� �������� z5 (PrivateDerived): " << z5 << endl;
    // ���������
    z6 = z4 + z5;
    cout << "��������� ��������� z4 � z5 (PrivateDerived): " << z6 << ", ���� ��������: " << z6.value() << endl;

    // ³�������
    z6 = z4 - z5;
    cout << "��������� �������� z4 � z5 (PrivateDerived): " << z6 << ", ���� ��������: " << z6.value() << endl;

    // ��������
    z6 = z4 * z5;
    cout << "��������� �������� z4 � z5 (PrivateDerived): " << z6 << ", ���� ��������: " << z6.value() << endl;


    // ��������� �� ��������� 
    ++z6;
    cout << "ϳ��� ����������� ���������� (PrivateDerived): " << z6 << endl;

    PrivateDerived objPostInc2 = z6++;
    cout << "ϳ��� ������������ ���������� (PrivateDerived): " << z6 << " (���������� ��'���: " << objPostInc2 << ")" << endl;

    --z6;
    cout << "ϳ��� ����������� ���������� (PrivateDerived): " << z6 << endl;

    PrivateDerived objPostDec2 = z6--;
    cout << "ϳ��� ������������ ���������� (PrivateDerived): " << z6 << " (���������� ��'���: " << objPostDec2 << ")" << endl;

    return 0;
}
