#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2) {
	return sqrt(pow(side1, 2) + pow(side2, 2));
}

int main() {
	struct TriangleSides {
		double side1;
		double side2;
	};

	struct TriangleSides triangles[3];
	int triangleArrayLength = (sizeof(triangles) / sizeof(triangles[0]));

	triangles[0].side1 = 3.0;
	triangles[0].side2 = 4.0;
	triangles[1].side1 = 5.0;
	triangles[1].side2 = 12.0;
	triangles[2].side1 = 8.0;
	triangles[2].side2 = 15.0;

	for (int i = 0; i <= (triangleArrayLength - 1); i++) {
		double side1 = triangles[i].side1;
		double side2 = triangles[i].side2;

		printf("Side 1: %.2lf - Side 2: %.2lf - Hypotenuse: %.2lf\n", side1, side2, hypotenuse(side1, side2));
	}
}
