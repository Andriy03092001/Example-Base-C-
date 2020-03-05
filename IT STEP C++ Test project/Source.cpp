#include <iostream> 
#include <ctime> 
#include <conio.h>
#include <string>

//Підключаємо прототип нашої функції а вона в свою чергу підтягує реалізацію функції
#include "Sum.h"
#include "Calc.h"

//Директива ( define = Оприділити)
#define PI 3.14
#define TAB "\t"

//Функція DANGER
#define begin {
#define end }

#define CLEAR system("cls");


using namespace std;

int main(){

	cout << "Hello"<< TAB<<"Eman" << endl;
	CLEAR
		cout << "Eman" << endl;
	

	 
	StringWorker::Sum("ads", "ad");

	int a = Calculator::Sum(10, 5);


	return 0;
}