#include <iostream>
using namespace std;

template<typename Type>
int HigherFunc(Type massiv[],int size) { // меньше ли заданное число числа 10
    int A = 0;
    for (int i = 0; i < size;i++){
        if ((massiv[i])<10){
            A++;
        }
    }
    return A;
}

template<typename Type>
int SumFunc(Type massiv[],int size) { // сумма соседних чисел меньше заданного числа
    int A = 0;
    for (int i = 0; i < size;i++){
        Type D = 0;
        if (i==0){
            D = massiv[1];
        }
        if (i==(size-1)){
            D = massiv[size-2];
        }
        else{
            D = massiv[i+1]+massiv[i-1];
        }
        if ((massiv[i])>D){
            A++;
        }
    }
    return A;
}

template<typename Type>
int NeiFunc(Type massiv[],int size) { // число лежит в Пи (3.14) окрестности числа 13
    int A = 0;
    for (int i = 0; i < size;i++){
        if ((massiv[i])<13+3.14 && massiv[i]>13-3.14){
            A++;
        }
    }
    return A;
}

int main() {
    int masInt[] = {1,2,12,24};
    float masFloat[] = {3.5,6.5,10.5,13.5};
    long double masLDouble[] = {13.567,124.14451,3265.36336,21.2135512};

    cout <<"More than 10"<<endl;
    cout << "Int: " << HigherFunc(masInt,4) <<endl;
    cout << "float: " << HigherFunc(masFloat,4) <<endl;
    cout << "Long Double: "<< HigherFunc(masLDouble,4) <<endl;
    cout << endl;

    cout << "Sum" << endl;
    cout << "Int: " << SumFunc(masInt,4) <<endl;
    cout << "float: " << SumFunc(masFloat,4) <<endl;
    cout << "Long Double: "<< SumFunc(masLDouble,4) <<endl;
    cout << endl;

    cout << "Pi" << endl;
    cout <<  "Int: " << NeiFunc(masInt,4) <<endl;
    cout << "float: " << NeiFunc(masFloat,4) <<endl;
    cout << "Long Double: "<< NeiFunc(masLDouble,4) <<endl;
    cout << endl;
}