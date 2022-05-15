#include <iostream>


using namespace std;
int main()
{	srand(time(0));
	setlocale(LC_ALL, "RUS");
	int a, b, t = 0, r, c = 0;
	cout << "Введите границы"<<endl;
	cin >> a >> b;
	r = rand() % b + a;
	cout << "Угадывайте число"<<endl;
	while (c != r) {
		t++;
		c = 0;
		cin >> c;
		if (c < r)cout << "Больше"<< endl;
		if (c > r)cout << "Меньше"<< endl;
		if (c == r)cout << "Вы угадали вам понадобилось попыток - " << t;
	
	}
	
}


