//первое

#include <iostream>          // я не совсем понимаю как делать первое задание,поэтому первое задание скопировано:( 
using namespace std;

int getIntPart(float num) {
	int temp = num;
	return num;
}

float getFloatPart(float num) {
	int temp = num;
	num -= (float)temp;
	return num;
}

int main()
{
	float num1;
	float num2;

	int sum_int;
	float sum_float;

	cout << "Enter first number ";
	cin >> num1;

	cout << "Enter second number ";
	cin >> num2;

	sum_int = getIntPart(num1) + getIntPart(num2);
	sum_float = getFloatPart(num1) + getFloatPart(num2);

	cout << "Sum of whole parts " << sum_int << "\n";
	cout << "Sum of fractional parts " << sum_float << "\n";
}

//второе

#include <iostream>
using namespace std;

int main()
{
	float S, V, T;

	cout << "Enter distance(km) ";
	cin >> S;

	cout << "Enter time(min) ";
	cin >> T;

	V = S / T;

	cout << "Your speed going to be " << (int)V << "km in hour" << "\n";

}

//третье

#include <iostream>
using namespace std;

int main()
{
	float time_passed;
	int time_left;
	int work_day = 28800;

	cout << "Enter how much time passed in seconds ";
	cin >> time_passed;

	cout << "Left to work " << (work_day - time_passed) / 3600 << " hours left" << "\n";
}

//четвертое

#include <iostream>
using namespace std;

int main()
{
	float sale, price;
	int number;

	cout << "Enter price for 1 laptop ";
	cin >> price;

	cout << "Enter sale on it ";
	cin >> sale;

	cout << "Enter how many laptops u going to buy ";
	cin >> number;

	double summ = price * number * ((100 - sale) / 100);
	cout << "You must pay " << summ << "\n";
}

//пятое

#include <iostream>
using namespace std;

int main()
{
	double gb, bit;


	cout << "Enter the size of the movie(gb):";
	cin >> gb;

	cout << "Enter speed connection (mbit in seconds):";
	cin >> bit;

	gb = gb * 1024 * 8;
	gb /= bit;

	int hours = gb / 3600;
	int min = gb / 60 - hours * 60;
	int sec = gb - min * 60 - hours * 3600;

	cout << hours << " h " << min << " min " << sec << " sec" << "\n";
}

