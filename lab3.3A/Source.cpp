#include <iostream>
#include "PublicDerived.h"
#include "PrivateDerived.h"
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PublicDerived z1, z2, z3;

    cout << "Введіть значення для z1 (PublicDerived):" << endl;
    cin >> z1;

    cout << "z1 (PublicDerived): " << z1 << ", значення: " << z1.value() << endl;
    z1.Reduce();
    cout << "Зменшене значення z1 (PublicDerived): " << z1 << endl;

    cout << "Введіть значення для z2 (PublicDerived):" << endl;
    cin >> z2;

    cout << "z2 (PublicDerived): " << z2 << ", значення: " << z2.value() << endl;
    z2.Reduce();
    cout << "Зменшене значення z2 (PublicDerived): " << z2 << endl;
    // Додавання
    z3 = z1 + z2;
    cout << "Результат додавання z1 і z2 (PublicDerived): " << z3 << ", його значення: " << z3.value() << endl;

    // Віднімання
    z3 = z1 - z2;
    cout << "Результат віднімання z1 і z2 (PublicDerived): " << z3 << ", його значення: " << z3.value() << endl;

    // Множення
    z3 = z1 * z2;
    cout << "Результат множення z1 і z2 (PublicDerived): " << z3 << ", його значення: " << z3.value() << endl;


    // Інкремент та декремент 
    ++z3;
    cout << "Після префіксного інкременту (PublicDerived): " << z3 << endl;

    PublicDerived objPostInc = z3++;
    cout << "Після постфіксного інкременту (PublicDerived): " << z3 << " (тимчасовий об'єкт: " << objPostInc << ")" << endl;

    --z3;
    cout << "Після префіксного декременту (PublicDerived): " << z3 << endl;

    PublicDerived objPostDec = z3--;
    cout << "Після постфіксного декременту (PublicDerived): " << z3 << " (тимчасовий об'єкт: " << objPostDec << ")" << endl;


    PrivateDerived z4, z5, z6;

    cout << "Введіть значення для z4 (PrivateDerived):" << endl;
    cin >> z4;

    cout << "z4 (PrivateDerived): " << z4 << ", значення: " << z4.value() << endl;
    z4.Reduce();
    cout << "Зменшене значення z4 (PrivateDerived): " << z4 << endl;

    cout << "Введіть значення для z5 (PrivateDerived):" << endl;
    cin >> z5;

    cout << "z5 (PrivateDerived): " << z5 << ", значення: " << z5.value() << endl;
    z5.Reduce();
    cout << "Зменшене значення z5 (PrivateDerived): " << z5 << endl;
    // Додавання
    z6 = z4 + z5;
    cout << "Результат додавання z4 і z5 (PrivateDerived): " << z6 << ", його значення: " << z6.value() << endl;

    // Віднімання
    z6 = z4 - z5;
    cout << "Результат віднімання z4 і z5 (PrivateDerived): " << z6 << ", його значення: " << z6.value() << endl;

    // Множення
    z6 = z4 * z5;
    cout << "Результат множення z4 і z5 (PrivateDerived): " << z6 << ", його значення: " << z6.value() << endl;


    // Інкремент та декремент 
    ++z6;
    cout << "Після префіксного інкременту (PrivateDerived): " << z6 << endl;

    PrivateDerived objPostInc2 = z6++;
    cout << "Після постфіксного інкременту (PrivateDerived): " << z6 << " (тимчасовий об'єкт: " << objPostInc2 << ")" << endl;

    --z6;
    cout << "Після префіксного декременту (PrivateDerived): " << z6 << endl;

    PrivateDerived objPostDec2 = z6--;
    cout << "Після постфіксного декременту (PrivateDerived): " << z6 << " (тимчасовий об'єкт: " << objPostDec2 << ")" << endl;

    return 0;
}
