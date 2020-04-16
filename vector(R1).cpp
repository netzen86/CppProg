#include <iostream>


class cVECTOR // определяем класс cVECTOR
{
    public:
        cVECTOR() // конструктор
        {
        }
        ~cVECTOR() // деструктор
        {
            delete[] aVECTOR; // уаляем массив aVECTOR из динамической памяти
        }

        int arrayLen = 5; // длинна массива aVECTOR- переменная
        int tos = 0; // счетчик для определения заполнения массива aVECTOR - переменная
        std::string arrayName = ""; // имя массива - переменная
        int* aVECTOR = new int[arrayLen]; // определяем массив aVECTOR в динамической памяти

        void FillVectorContents(int v) // функция для заполнения массива aVECTOR значениями
        {
            if (tos == arrayLen) {                                  // условие для 
                std::cout << "\nArray" << arrayName << " full\n";   // проверки заполняемости 
                return;                                             // массива aVECTOR
            }
            aVECTOR[tos] = v; // присваивание значения эленту массива
            tos++; // счетчик для движения по элементам массива
        }

        void DisplayVectorContents() //функция для вывода на экран значений массива aVECTOR
        {
            std::cout << "\nArray " << arrayName << ": "; // печать симфола ввод
            for(int i = 0; i < arrayLen; i++ ) // цикл для перебора массива aVECTOR 
            {
                std::cout << aVECTOR[i] << ", "; // вывод на экран элементов массива aVECTOR
            }
            std::cout << std::endl; // печать симфола ввод
        }

         void DisplayAverageVectorContents() // фунцкия для расчета среднего арфметическго элеметов массива aVECTOR
        {
            float sum = 0.0;    // переменная для суммы чисел в массиве
            for (int i = 0; i < arrayLen; i++) { // цикл для перебора массива aVECTOR 
            sum += aVECTOR[i];  // накапливаем сумму
            }
            float ave = sum / arrayLen;  // вычисляем среднее арифметическое
            std::cout << "\nArithmetical mean = " << ave << "\n" << std::endl; // вывод на экран среднего арифметического массива aVECTOR
        } 
};

int main() // определяем функцию main
{

    cVECTOR c_arrayA; // используя класс cVECTOR создаем объект c_arrayA
    c_arrayA.arrayName = "A"; // присваиваем имя массиву
    c_arrayA.FillVectorContents(33); // присваиваем значение элементу 0 масива A
    c_arrayA.FillVectorContents(34); // присваиваем значение элементу 1 масива A
    c_arrayA.FillVectorContents(33); // присваиваем значение элементу 2 масива A
    c_arrayA.FillVectorContents(56); // присваиваем значение элементу 3 масива A
    c_arrayA.FillVectorContents(35); // присваиваем значение элементу 4 масива A
    c_arrayA.DisplayVectorContents(); // вывод на экран элементов массива A
    c_arrayA.DisplayAverageVectorContents(); // вывод на экран среднего арифметического массива A

    cVECTOR c_arrayB; // используя класс cVECTOR создаем объект c_arrayB
    c_arrayB.arrayName = "B"; // присваиваем имя массиву
    c_arrayB.FillVectorContents(1); // присваиваем значение элементу 0 масива B
    c_arrayB.FillVectorContents(2); // присваиваем значение элементу 1 масива B
    c_arrayB.FillVectorContents(3); // присваиваем значение элементу 2 масива B
    c_arrayB.FillVectorContents(4); // присваиваем значение элементу 3 масива B
    c_arrayB.FillVectorContents(5); // присваиваем значение элементу 4 масива B
    c_arrayB.DisplayVectorContents(); // вывод на экран элементов массива B
    c_arrayB.DisplayAverageVectorContents();  // вывод на экран среднего арифметического массива B

    return 0;
}