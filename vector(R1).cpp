#include <iostream>
#include <vector>

class Object
{
    public:
        Object()
        {
            FillVectorContents();
        }
        ~Object()
        {
            delete[] VECTOR;
        }
        int arryLen = 5;
        int *VECTOR = new int[arryLen];

        void  FillVectorContents()
        {
            int addNum = 0;
            for (int i = 0; i < 5; ++i) {
            std::cout << "Input Element " << i+1 << ": ";
            std::cin >> addNum;
            VECTOR[i] = addNum;
            }
        }

         void DisplayAverageVectorContents()
        {
            float sum = 0.0;    // переменная для суммы чисел в массиве
            for (int i = 0; i < arryLen; i++) {
            sum += VECTOR[i];  // накапливаем сумму
            }
            float ave = sum / arryLen;  // вычисляем среднее арифметическое
            std::cout << "\nArithmetical mean = " << ave << "\n" << std::endl;
        } 

        void DisplayVectorContents()
        {
            std::cout << std::endl;
            for( unsigned int i = 0; i < arryLen; i++ )
            {
                std::cout << "Element[" << i << "] = " << VECTOR[i] << std::endl;
            }
            std::cout << std::endl;
        }
};

int main()
{
    Object c_arry1;
    c_arry1.DisplayVectorContents();
    c_arry1.DisplayAverageVectorContents();

    Object c_arry2;
    c_arry2.DisplayVectorContents();
    c_arry2.DisplayAverageVectorContents();

    return 0;
}