#include <iostream>

using namespace std;

struct Matrix {
	double a, b, c, d;
};

Matrix operator+(Matrix matrix1, Matrix matrix2) {
	return {
		matrix1.a + matrix2.a,
		matrix1.b + matrix2.b,
		matrix1.c + matrix2.c,
		matrix1.d + matrix2.d,
	};
}

Matrix operator-(Matrix matrix1, Matrix matrix2) {
	return {
		matrix1.a - matrix2.a,
		matrix1.b - matrix2.b,
		matrix1.c - matrix2.c,
		matrix1.d - matrix2.d,
	};
}

Matrix operator*(Matrix matrix, int num) {
	return {
		matrix.a * num,
		matrix.b * num,
		matrix.c * num,
		matrix.d * num,
	};
}

ostream& operator<<(ostream& out, Matrix matrix) {
	out << matrix.a << " " << matrix.b << "\n" << matrix.c << " " << matrix.d << "\n";

	return out;
}

//ostream& operator>>(ostream& in, Matrix matrix) {
//	in >> matrix.a >> " " >> matrix.b >> "\n" >> matrix.c >> " " >> matrix.d << "\n";
//
//	return in;
//}

int main()
{
	Matrix matrix1, matrix2, matrix3, matrix4;

	cin >> matrix1.a >> matrix1.b >> matrix1.c >> matrix1.d;
	cin >> matrix2.a >> matrix2.b >> matrix2.c >> matrix2.d;

	cout << matrix1 << "\n";
	cout << matrix2 << "\n\n";

	matrix1 = matrix1 * 5;
	matrix2 = matrix2 * 10;

	cout << matrix1 << "\n";
	cout << matrix2 << "\n\n";

	matrix3 = matrix1 + matrix2;

	cout << matrix3 << "\n";

	matrix4 = matrix1 - matrix2;

	cout << matrix3 << "\n";

	return 0;
}
