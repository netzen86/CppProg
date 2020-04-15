#include <iostream>


class Object
{
    public:
        Object()
        {
        }
        ~Object()
        {
            delete[] VECTOR;
        }
        int arryLen = 5;
        int tos = 0;
        std::string arrayName = "";

        int* VECTOR = new int[arryLen];

        void FillVectorContents(int v)
        {
            if (tos == arryLen) {
                std::cout << "Array " << arrayName << "full";
                return;
            }
            VECTOR[tos] = v;
            tos++;
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
/*
    int ArrayA[5] = {1,2,3,4,5};
    int ArrayB[5] = {23,23,24,25,26};
*/
    Object c_arryA;
    c_arryA.arrayName = "A";
    c_arryA.FillVectorContents(33);
    c_arryA.FillVectorContents(34);
    c_arryA.FillVectorContents(33);
    c_arryA.FillVectorContents(56);
    c_arryA.FillVectorContents(35);
    c_arryA.DisplayVectorContents();
    c_arryA.DisplayAverageVectorContents();

    Object c_arryB;
    c_arryB.arrayName = "B";
    c_arryB.FillVectorContents(1);
    c_arryB.FillVectorContents(2);
    c_arryB.FillVectorContents(3);
    c_arryB.FillVectorContents(4);
    c_arryB.FillVectorContents(5);
    c_arryB.DisplayVectorContents();
    c_arryB.DisplayAverageVectorContents();

    return 0;
}