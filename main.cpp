#include <SFML/Graphics.hpp>
#include "Matrix.h"

using namespace std;

int main()
{
	const int winHeight = 512;
	const int winWidth = 1024;
	
	float initialValA = 100.0;
	float initialValB = 50.0;

	Matrix A(winHeight, winWidth, initialValA);
	//Matrix B(winHeight, winWidth, initialValB);
	//Matrix C = A + B;
	//C.print();

	sf::RenderWindow window(sf::VideoMode(winHeight, winWidth), "Plotting matrix contents");
	window.setFramerateLimit(60);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		A.update();

		window.clear();
		
		window.draw(A.getMatrixSprite());

		window.display();
	}

	return 0;
}