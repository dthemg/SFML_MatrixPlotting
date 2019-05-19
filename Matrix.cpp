
#include "Matrix.h"

using namespace std;

// Constructor
Matrix::Matrix(unsigned rowSize, unsigned colSize, double initial)
{
	m_rowSize = rowSize;
	m_colSize = colSize;
	m_matrix.resize(rowSize);
	for (unsigned i = 0; i < m_matrix.size(); i++) 
	{
		m_matrix[i].resize(colSize, initial);
	}
}

// Copy constuctor
Matrix::Matrix(const Matrix& B)
{
	this->m_colSize = B.getCols();
	this->m_rowSize = B.getRows();
	this->m_matrix = B.m_matrix;
}

// Destructor
Matrix::~Matrix() {
	// Should I do something here?
}


// Addition of Two Matrices
Matrix Matrix::operator+(Matrix &B) 
{
	Matrix sum(m_rowSize, m_colSize, 0.0);
	unsigned i, j;
	for (i = 0; i < m_rowSize; i++) 
	{
		for (j = 0; j < m_colSize; j++)
		{
			sum(i, j) = this->m_matrix[i][j] + B(i, j);
		}
	}
	return sum;
}

// TODO Subtraction of two matrices
// TODO Multiplication of two matrices
// TODO Scalar operations

// Getting a matrix value
double& Matrix::operator()(const unsigned & rowNo, const unsigned & colNo)
{
	return this->m_matrix[rowNo][colNo];
}

// Get number of matrix rows
unsigned Matrix::getRows() const
{
	return this->m_rowSize;
}


// Get number of matrix columns
unsigned Matrix::getCols() const
{
	return this->m_colSize;
}

// TODO Transpose

// Prints the matrix 
void Matrix::print() const
{
	cout << "Matrix: " << endl;
	for (unsigned i = 0; i < m_rowSize; i++) {
		for (unsigned j = 0; j < m_colSize; j++) {
			cout << "[" << m_matrix[i][j] << "] ";
		}
		cout << endl;
	}
}