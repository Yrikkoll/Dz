#include <iostream>

int main(){
	
	float p = 3.14;
	float ra;
	std::cout << "enter radius: ";
	std::cin >> ra;
	float pl = 2*p*ra*ra;
	float d = p*ra*ra;
	int n = pl;
	int a = d;
	std::cout << "ploshca kola: "<< n << "." << int(pl* 100) % (n*10) << '\n';
	std::cout << "dovzina kola: "<< a << "." << int(d*100) % (a*10) <<'\n';

}
