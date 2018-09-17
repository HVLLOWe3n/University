//
//  main.cpp
//  University
//
//  Created by Roman Synovets on 9/4/18.
//  Copyright © 2018 Roman Synovets. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <locale.h>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    setlocale(LC_ALL, 0);
    //
    // Потоки для вывода в консоль инструкций
    //
    printf("Автор: Роман Сыновец - группа КН 3-7 СК\n");
    printf("Программа \"Калькулятор\" для расчета 2-х чисел!m\n\n");
    printf("******** Инструкция ********\n");
    printf("Пользователь задает 2 числа\n");
    printf("Выбирает операцию\n");
    printf("Получает результат!\n\n\n");

    /*
        Объявление переменных
    */
    float operand_a = 0.0, operand_b = 0.0;
    // float num_correct_b = ceil(operand_b);
    float result = 0.0;
    char quit, operation;

    do {
        
        printf("Введите первое число: ");
        scanf("%f", &operand_a);

        printf("Введите второе число: ");
        scanf("%f", &operand_b);
        
        
        printf("Выбирете операцию: +, - *, /");
        scanf("%s", &operation);
        
        switch(operation) {
            case '+': {
                result = operand_a + operand_b;
                printf("Сумма данных чисел: %f", result);
                break;
            }
            case '-': {
                result = operand_a - operand_b;
                printf("Разница данных чисел: %f", result);
                break;
            }
            case '*': {
                result = operand_a * operand_b;
                printf("Умножение данных чисел: %f", result);
                break;
            }
            case '/': {
                result = operand_a / operand_b;
                printf("Деление данных чисел: %f", result);
                break;
            }
            default: {
                printf("Данной операции не существует, введите корректную операцию\n");
                break;
            }
        }
        
        printf("\nВыйти из программы? (Y/N): ");
        scanf("%s", &quit);

    } while((quit != 'y' && quit != 'Y') && ());
    
    return 0;
}
