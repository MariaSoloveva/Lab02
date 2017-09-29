#include <iostream>
#include <string>
#include <math.h>

int main(){
//Каждое из чисел X,Y  нечетное
    std::cout << " X=?,Y=?" << std::endl;
    int x = 0;
    std::cin >> x;
    int y = 0;
    std::cin >> y;
    if (x mod 2 ==0){
        std::cout << x << " even number" << std::endl;
    } else {
        std::cout << x << " odd number" << std::endl;
    }
    if (y mod 2 ==0){
        std::cout << y << " even number" << std::endl;
    } else {
        std::cout << y << " odd number"  << std::endl;
    }
//Только одно число меньше 20
    if ((x < 20) && (y => 20) || (x => 20) && (y < 20)){
        std::cout <<"True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
//Хотя бы 1 из чисел равно 0
    if ((x == 0) && (y => 0) || (x => 0) && (y == 0)){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
//Каждое число отрицатально
    int z = 0;
    std::cin >> z;
    if ((x < 0) && (y < 0) && (z < 0)){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
//толькл одно число кратно 5
    if ((fmod(x,5) ==0) && (fmod(y,5) <> 0) && (fmod(z,5) <> 0)){
        std::cout << "True" << std::endl;
    } else {
        if ((fmod(y,5) ==0) && (fmod(z,5) <> 0) && (fmod(x,5) <> 0){
            std::cout << "True" << std::endl;
        } else {
            if (fmod(z,5) ==0) && (fmod(y,5) <> 0) && (fmod(x,5) <> 0){
                std::cout << "True" << std::endl;
            } else {
                std::cout << "False" << std::endl;
            }
        }}
//Хотя бы одно из чисел больше 100
    if ((x >= 100) || (y >= 0) || (z >= 100)){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
        }
//На поле (a, b) расположена ладья. Записать условие, при котором она угрожает полю (c, d).
    std::pair<int, int> p;
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    p.first = a;
    p.second = b;
    int c = 0;
    std::cin >> c;
    int d = 0;
    std::cin >> d;
    if((p.first == c) || (p.second == d)){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }

//На поле (a, b) расположен слон. Записать условие, при котором он угрожает полю (c, d).
    std::pair<int, int> p;
    if(){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }
// На поле (a, b) расположен король. Записать условие, при котором он может одним ходом попасть на поле (c, d).
    std::pair<int, int> p;
    if(((p.first + 1 == c ) && (p.second == d)) || ((p.first - 1 == c ) && (p.second == d)) || ((p.second == d - 1) && (p.first == c )) || ((p.first == c ) && (p.second == d + 1))){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }
// На поле (a, b) расположен ферзь. Записать условие, при котором он угрожает полю (c, d).
    std::pair<int, int> p;
    if(){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }
// На поле (a, b) расположена белая пешка. Записать условие, при котором она может одним ходом попасть на поле (c, d):при обычном ходе;
    std::pair<int, int> p;
    if(){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }
// На поле (a, b) расположена белая пешка. Записать условие, при котором она может одним ходом попасть на поле (c, d):когда она "бьет" фигуру или пешку соперника.
    std::pair<int, int> p;
    if(){
        std::cout << "Danger" << std::endl;
    } else {
        std::cout << "Out Of Danger" << std::endl;
    }
//Напечатать таблицу умножения на 7:
    int n = 9;
    for (unsigned int i = 1; i <= n; ++i){
        std::cout << i << "*" << "7" << "=" << i * 7 << std::endl;
    }
//произведение всех целых чисел от 8 до 15
    int n = 15;
    for (unsigned int u = 8; u <= n; ++u){
        for (unsigned int i = 8; i <= n; ++i){
            std::cout << i << "*" << u << "=" << i * u << std::endl;
        }
    }
//произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; 1 < a < 20)
    std::cout << "Введите число" << std::endl;
    int a = 0;
    std::cin >> a;
    for (unsigned int u = a; u < 20; ++u){
        for (unsigned int i = a; i <= n; ++i){
            std::cout << i << "*" << u << "=" << i * u << std::endl;
        }
    }
//произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; 1 < b < 20)
    std::cout << "Введите число" << std::endl;
    int b = 0;
    std::cin >> b;
    for (unsigned int u = 1; u < b; ++u){
        for (unsigned int i = 1; i < b; ++i){
            std::cout << i << "*" << u << "=" << i * u << std::endl;
        }
    }
//произведение всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a)
    for (unsigned int u = a; u < b; ++u){
        for (unsigned int i = a; i < b; ++i){
            std::cout << i << "*" << u << "=" << i * u << std::endl;
        }
    }
    return 0;
}
