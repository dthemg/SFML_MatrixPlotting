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
private:
	unsigned m_rowSize;
	unsigned m_colSize;
	vector<vector<double> > m_matrix;


public:
	// Constructor declaration
	Matrix(unsigned, unsigned, double); 
	Matrix(const Matrix&);
	~Matrix();

	// Matrix operators
	Matrix operator+(Matrix&); // Address -> using the matrix itself
	//Matrix operator-(Matrix&);

	// Scalar operators
	//Matrix operator+(double);
	//Matrix operator-(double);
	//Matrix operator*(double);
	//Matrix operator/(double);
	
	// Functionality operators
	double& operator()(const unsigned&, const unsigned&);
	void print() const;
	unsigned getRows() const;
	unsigned getCols() const;
	void draw(sf::RenderWindow& window);
};

#endif