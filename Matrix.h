#ifndef __SFML_matrix__
#define __SFML_matrix__

#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>
#include <vector>

using std::vector;


class Matrix
{

public:
	// Constructor declaration
	Matrix(unsigned, unsigned, float); 
	//Matrix(const Matrix&);
	~Matrix();

	// Matrix operators
	Matrix operator+(Matrix&); // Address -> using the matrix itself
	void update();
	sf::Sprite getMatrixSprite();
	//Matrix operator-(Matrix&);

	// Scalar operators
	//Matrix operator+(double);
	//Matrix operator-(double);
	//Matrix operator*(double);
	//Matrix operator/(double);
	
	// Functionality operators
	float& operator()(const unsigned&, const unsigned&);
	void print() const;
	unsigned getRows() const;
	unsigned getCols() const;

private:
	unsigned m_rowSize;
	unsigned m_colSize;
	vector<vector<float> > m_matrix;
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;
	float t;
};
#endif