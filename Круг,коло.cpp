#include <iostream>

int main(){

	int a,b,c,pl,ob;
	std::cin >> a >> b >> c;
	pl = 2*(a*b+a*c+b*c);
	ob = a*b*c;
	std::cout << "ob par: " << ob << ", pl par: " << pl;


}
