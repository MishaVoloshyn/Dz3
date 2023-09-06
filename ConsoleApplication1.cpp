#include <iostream>
using namespace std;


class Fraction {
private:
	float A;
	float B;
public:
	void Print() {
		cout << A << "/" << B << endl;
	}
	void SetA(int v)
	{
			A = v;
	}
	void SetB(int v)
	{
			B = v;

	}
	float GetA()
	{
		return A;
	}
	float GetB()
	{
		return B;
	}
	float Sum(float num)
	{
		float sum = (A / B) + num;
		return sum;
	}
	float Dif(float num)
	{
		float dif = (A / B) - num;
		return dif;
	}
	float Multiply(float num)
	{
		float multiply = (A / B) * num;
		return multiply;
	}
	float Divide(float num)
	{
		float divide = (A / B) / num;
		return divide;
	}
};
int main()
{
	setlocale(LC_ALL, "");
	Fraction a;

	a.SetA(-10);
	a.SetB(100);

	float A = a.GetA();
	float B = a.GetB();
	float num = 10;
	float sum = a.Sum(num);
	float dif = a.Dif(num);
	float multiply = a.Multiply(num);
	float divide = a.Divide(num);

	cout << "Функция сложения" << endl << A << "/" << B << " + " << num << endl << "Результат сложения:" << sum << endl << endl;
	cout << "Функция вычитания" << endl << A << "/" << B << " - " << num << endl << "Результат вычитания:" << dif << endl << endl;
	cout << "Функция умножения" << endl << A << "/" << B << " * " << num << endl << "Результат умножения:" << multiply << endl << endl;
	cout << "Функция деления" << endl << A << "/" << B << " / " << num << endl << "Результат деления:" << divide << endl;
}