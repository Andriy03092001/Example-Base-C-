#include <iostream> 
#include <ctime> 
#include <conio.h>
#include <string>

//ϳ�������� �������� ���� ������� � ���� � ���� ����� ������ ��������� �������
#include "Sum.h"
#include "Calc.h"

//��������� ( define = ���������)
#define PI 3.14
#define TAB "\t"

//������� DANGER
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