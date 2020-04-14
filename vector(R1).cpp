#include <iostream>


class Object
{
    public:
        Object()
        {
//            FillVectorContents();
        }
        ~Object()
        {
//            delete[] VECTOR;
        }
        int arryLen = 5;
        std::string arrayName = "";

        int* VECTOR = new int[arryLen];

        void  FillVectorContents()
        {
            int addNum = 0;
            for (int i = 0; i < arryLen; ++i) {
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
            std::cout << "\nArray " << arrayName << ": ";
            for( unsigned int i = 0; i < arryLen; i++ )
            {
                std::cout << VECTOR[i] << ", ";
            }
            std::cout << std::endl;
        }
};

int main()
{
    int ArrayA[5] = {1,2,3,4,5};
    int ArrayB[5] = {23,23,24,25,26};

    Object c_arryA;
    c_arryA.arrayName = "A";
    c_arryA.VECTOR = ArrayA;
    c_arryA.DisplayVectorContents();
    c_arryA.DisplayAverageVectorContents();

    Object c_arryB;
    c_arryB.arrayName = "B";
    c_arryB.VECTOR = ArrayB;
    c_arryB.DisplayVectorContents();
    c_arryB.DisplayAverageVectorContents();

    return 0;
}