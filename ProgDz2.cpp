// ProgDz2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
#include <locale.h>
#include <math.h>

void r1() {
    float a, b, c, x, D;
    printf("Введите коэффициенты a, b и c: \n");
    scanf("%f %f %f",&a,&b,&c);
    if (a == 0) {
        printf("x = %f",(-c/b));
    }
    else {
        D =  powf(b,2)- 4 * a * c;
        if (D == 0) {
            printf("x = %f\n", (-b /(2*a)));
        }
        if (D < 0) {
            printf("Нет решений в действительных числах\n");
        }
        if (D > 0) {
            printf("x1 = %f \nx2 = %f\n", ((-b +sqrtf(D))/(2*a)), ((-b - sqrtf(D))/(2 * a)));
        }
    }
}
void r2() {
    int num;
    float x, y, z, max, min;
    printf("Введите номер задачи (34, 42, 43, 47, 60):\n ");
    scanf("%i",&num);
    switch (num)
    {
    case 34:
        printf("Введите x, y и z:\n");
        scanf("%f%f%f",&x,&y,&z);
        max = (x>y)?x:y;
        max = (max > z) ? max : z;
        min = (x < y) ? x : y;
        min = (min < z) ? min : z;
        printf("max = %f\nmin = %f\n",max,min);
        break;
    case 42:
        printf("Введите x, y:\n");
        scanf("%f%f",&x,&y);
        z = x;
        x = (x>y)?2*x*y:(x+y)/2;
        y = (y > z)?2 * z * y : (z + y) / 2;
        printf("x= %f\ny= %f\n",x,y);
        break;
    case 43:
        printf("Введите x, y и z:\n");
        scanf("%f%f%f", &x, &y, &z);
        x = (x >= 0)? x * x * x:x;
        y = (y >= 0)? y * y * y:y;
        z = (z >= 0)? z * z * z:z;
        printf("x= %f\ny= %f\nz= %f\n", x, y,z);
        break;
    case 47:
        printf("Введите x, y и z:\n");
        scanf("%f%f%f", &x, &y, &z);
        if ((x<y+z)&&(y<x+z)&&(z<x+y)) {
            printf("Треугольник с такими сторанами существует!\n");
            if ((x > y&& x > z && (x * x < (y * y + z * z)))||(y > x&& y > z && (y * y < (x * x + z * z))) || (z > x&& z > y && (z * z < (x * x + y * y)))) {
                printf("И он остроугольный\n");
            }
            else {
                printf("Но он не остроугольный\n");
            }
        }
        else {
            printf("Треугольника с такими сторанами не существует\n");
        }
        break;
    case 60:
        printf("Введите x, y:\n");
        scanf("%f%f", &x, &y);
        z = (y>=0&&x*x+y*y<=4&& x * x + y * y >=1)?0:x;
        printf("u= %f\n",z);
        break;
    default:
        printf("Данное число не доступно\n");
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    bool go = true;
    int again = 1;
    //программирование. дз2
    while (again) {
        go = true;
        while (go)
        {
            printf("Введите номер задания (1- квадратное уравление, 2- 5 задач из задачника):\n ");
            scanf("%i", &num);
            switch (num)
            {
            case 1:
                r1();
                go = false;
                break;
            case 2:
                r2();
                go = false;
                break;
            default:
                printf("Данное число не доступно\n");
                break;
            }
        }
        printf("Чтобы закончить введите 0, а чтобы продолжить 1\n");
        scanf("%i", &again);
    }
    _getch();
}



//3 пункт (int->float, %d->%f, scanf->scanf_s, getch()->_getch();)

//#include<conio.h>
//#include<stdio.h>
//#include<windows.h>
//
////Задача №33 из задачника
//int main()
//{
//    //Объявляем переменные - числа с плавающей точкой
//    float x, y;
//
//    //Исправляем кодовую страницу
//    //не забыть исправить шрифт после запуска программы на "Lucida Console" 
//    SetConsoleOutputCP(1251);	//на вывод
//    SetConsoleCP(1251);	//на ввод - в этой программе не обязательно
//
//    //Запрашиваем значения переменных с клавиатуры
//    printf("Введите значение x ");
//    scanf_s("%f",&x);
//    printf("Введите значение y ");
//    scanf_s("%f",&y);
//
//    printf("Задание а)\n");
//    if (x > y)
//        printf("max=x=%f\n", x);
//    else
//        printf("max=y=%f\n", y);
//
//    printf("Задание б)\n");
//    if (x < y) {
//        printf("min=x=%f\n", x);
//    }
//    else {
//        printf("min=y=%f\n", y);
//    }
//
//    printf("Задание в)\n");
//    if (x < y)
//    {
//        printf("min=x=%f\n", x);
//        printf("max=y=%f\n", y);
//    }
//    else
//    {
//        printf("min=y=%f\n", y);
//        printf("max=x=%f\n", x);
//    }
//
//    _getch();
//}