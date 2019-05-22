#include <SFML/Graphics.hpp>
#include "Matrix.h"

using namespace std;

int main()
{
	const int winHeight = 800;
	const int winWidth = 800;
	
	const int N = 1;
	const int M = 100;
	double initialValA = 1.0;
	double initialValB = 2.0;

	sf::VertexArray triangle(sf::Triangles, 3);
	triangle[0].position = sf::Vector2f(10.f, 10.f);
	triangle[1].position = sf::Vector2f(100.f, 200.f);
	triangle[2].position = sf::Vector2f(300.f, 100.f);

	triangle[0].color = sf::Color::Red;
	triangle[1].color = sf::Color::Blue;
	triangle[2].color = sf::Color::Green;

	


	Matrix A(N, M, initialValA);
	Matrix B(N, M, initialValB);
	Matrix C = A + B;
	C.print();



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

		window.clear();
		C.draw(window);
		window.display();
	}

	return 0;
}