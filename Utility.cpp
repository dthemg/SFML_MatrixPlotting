#include "Utility.h"

sf::Color colorGradient(sf::Image& color, float x)
{
	if (x > 0.999) x = 0.999;
	if (x < 0.001) x = 0.001;
	return color.getPixel((int)(x * color.getSize().x), 0);
}