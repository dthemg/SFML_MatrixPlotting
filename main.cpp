#include <SFML/Graphics.hpp>
#include "Matrix.h"

using namespace std;

int main()
{
	const int winHeight = 800;
	const int winWidth = 800;
	
	const int N = 5;
	const int M = 4;
	double initialValA = 1.0;
	double initialValB = 2.0;

	Matrix A(N, M, initialValA);
	Matrix B(N, M, initialValB);
	Matrix C = A + B;
	C.print();

	sf::RenderWindow window(sf::VideoMode(winHeight, winWidth), "Plotting matrix contents");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		
		window.display();
	}

	return 0;
}