#include <iostream>
#include <string>

//Metody, które liczą pole figur.
class MyClass{
	public:
		int poleTrapezu(int a,int b, int h){
			return (a+b) /2 * h;
		}
	public:
		int poleTrojkata(int a, int h){
			return (a*h)/2;
		}
	public:
		int poleRombu(int e, int f){
			return (e*f) /2;
		}
	public:
		float poleKola(int r, float pi){
			return pi*(r*r);
		}

};
//˩̅̅̅̅̅̅̚˥┘┐│┌▲
int main()
{
	//Instancja do klasy, która liczy pola.
	MyClass myCls;
	

	//Zdefiniowanie podstawowych długości boków.
	int a = 0;
	int b = 0;
	int h = 0;
	float pi = 0;
	std::string figura;

	std::cout << "Podaj jakiej figury pole chcesz policzyc (Trojkat, Trapez, Romb, Kolo): ";
	std::cin >> figura;
	
	if(figura == "Trapez")
	{
		//Początkowa sygnaturka wysyłana za każdym razem.
		std::cout << "PROGRAM DO OBLICZANIA POLA TRAPEZU\n";
		std::cout << "         a\n";
		std::cout << "   ______________ \n";
		std::cout << "  /            | \\" <<"\n";
		std::cout << " /           h |  \\" << "\n";
		std::cout << "/______________|___\\" << "\n";
		std::cout << "       b\n";

		//Podajemy długości boków.
		std::cout << "Podaj wartosc a = ";
		std::cin >> a;

		std::cout << "Podaj wartosc b = ";
		std::cin >> b;

		std::cout << "Podaj wartosc h = ";
		std::cin >> h;

		//Wysyla nam dlugosci boków które przed chwilą podaliśmy.
		std::cout << "a = " << a << "\n";
		std::cout << "b = " << b << "\n";
		std::cout << "h = " << h << "\n";

		//Sprawdzamy czy podane długości boków nie są liczbami ujemnymi.
		if(a>0 and b>0 and h>0)
		{
		//Jeżeli są dodatnie to podajemy pole figury.
		std::cout << "Pole tego trapezu wynosi: " << myCls.poleTrapezu(a,b,h) << " [j2]";
		}
		else
		//W przeciwnym razie wysyłamy wiadomość, że boki są niepoprawnie podane.
		{
			std::cout << "Niepoprawne dlugosci bokow!";
		}
	}
	else if (figura == "Trojkat")
	{
		std::cout << "PROGRAM DO OBLICZANIA POLA TROJKATA" << "\n";
		std::cout << "      /\\      | "<< "\n";
		std::cout << "     /  \\     | "<< "\n";
		std::cout << "    /    \\    | "<< "\n";
		std::cout << "   /      \\   | h "<< "\n";
		std::cout << "  /        \\  | "<< "\n"; 
		std::cout << " /          \\ | "<< "\n";
		std::cout << "/____________\\| "<< "\n";
		std::cout << "      a    "<< "\n";

		std::cout << "Podaj wartosc a = ";
		std::cin >> a;

		std::cout << "Podaj wartosc h = ";
		std::cin >> h;

		std::cout << "a = " << a << "\n";
		std::cout << "h = " << h << "\n";

		if(a>0 and h>0)
		{
			std::cout << "Pole tego trojkata wynosi: " << myCls.poleTrojkata(a,h) << " [j2]" << "\n";
		}
		else
		{
			std::cout << "Niepoprawne dlugosci bokow!";
		}
		
	}
	else if(figura == "Romb")
	{
		std::cout << "PROGRAM DO OBLICZANIA POLA ROMBU"<< "\n";
		std::cout << "     /|\\" << "\n";
		std::cout << "    / | \\"<< "\n";
		std::cout << "   /  |  \\"<< "\n";
		std::cout << "  /   e   \\"<< "\n";
		std::cout << " /    |    \\"<< "\n";
		std::cout << "/__f__|__f__\\"<< "\n";
		std::cout << "\\     |     /"<< "\n";
		std::cout << " \\    |    / " << "\n";
		std::cout << "  \\   e   /" << "\n";
		std::cout << "   \\  |  /" << "\n";
		std::cout << "    \\ | /" << "\n";
		std::cout << "     \\|/" << "\n";

		std::cout << "Podaj wartosc e = ";
		std::cin >> a;

		std::cout << "Podaj wartosc f = ";
		std::cin >> b;

		std::cout << "e = " << a << "\n";
		std::cout << "f = " << b << "\n";

		if(a>0 and b>0){
			std::cout << "Pole tego rombu wynosi: " << myCls.poleRombu(a,b) << " [j2]";
		}
		else
		{
			std::cout << "Niepoprawna dlugosc przekatnych";
		}
		
	}
	else if(figura == "Kolo")
	{
		std::cout << "PROGRAM OBLICZAJACY POLE KOLA" << "\n";

		std::cout << "Podaj wartosc zblizona liczby Pi: ";
		std::cin >> pi;

		std::cout << "Podaj wartosc promienia okregu: ";
		std::cin >> a;

		std::cout << "pi = " << pi << "\n";
		std::cout << "r = " << a << "\n";

		if(a> 0 and pi > 0)
		{
			std::cout << "Pole tego kola wynosi: " << myCls.poleKola(a,pi) << " [j2]";
		}
		else 
		{
			std::cout << "Niepoprawny promien, lub przyblizona liczba Pi";
		}

	}
	else
	{
		std::cout << "Niepoprawny argument!";
	}

}
