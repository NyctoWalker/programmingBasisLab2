#include <iostream>

#include <ctime>;

using namespace std;

int main()
{
    /*Дана упорядоченная по возрастанию последовательность из целых чисел. Включить в неё заданное 
    число так, чтобы упорядоченность не нарушилась.
    По условию задачи, должно быть 3 посделовательных блока: чтение и запись, обработка, вывод.*/
    //Блок чтения и записи
    setlocale(LC_ALL, "ru");
    const SIZE = 10;
    int arr[SIZE], buffer;
    srand(time(0));
    //int arrChanged[SIZE], newNumber;

    cout << "Изначальный массив:\n";
    //Заполнение массива числами
    for (int i = 0; i < (SIZE-1); i++)
    {
        arr[i] = rand() % 50; //Для задачи достаточно генерации псевдослучайных чисел
    }
    //Сортировка чисел по возрастанию
    for (int i = 0; i < (SIZE - 2); i++)
    {
        while (arr[i] > arr[i + 1])
        {
            buffer = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = buffer;
            i = 0;
        }
    }

    for (int i = 0; i < (SIZE - 1); i++) { cout << arr[i] << "\t"; }
    cout <<"\nВведите целое число для вставки в массив:\n";
//    cin >> newNumber;
    cin >>arr[SIZE-1];
    cout << endl;

    //Блок обработки данных
    //Сортировка чисел по возрастанию
    for (int i = 0; i < SIZE-1; i++)
    {
        while (arr[i] > arr[i + 1])
        {
            buffer = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = buffer;
            i = 0;
        }
    }

    //Блок вывода
    cout << "\nПолученный массив:\n";
    for (int i = 0; i < (SIZE); i++) { cout << arr[i] << "\t"; }
    
#pragma region does not work
    /*
    buffer = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr[i] <= newNumber) && (buffer==0)) //Проверяет, больше ли вставляемое число члена массива, и была ли до этого замена
        {
            arrChanged[i] = arr[i];
        }
        else if (buffer==0) //Если вставляемое число больше текущего члена массива, происходит замена
        {
            arrChanged[i] = newNumber;
            buffer = 1;
        }
        else
        {
            arrChanged[i] = arr[i-1];
        }

        cout << arrChanged[i] << "\t";
    }
    */
#pragma endregion
}