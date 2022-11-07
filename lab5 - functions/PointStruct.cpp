#include <iostream>

using namespace std;

struct Point {
	double x, y;
};

Point operator-(Point point1, Point point2) {
	return {
		point1.x - point2.x,
		point1.y - point2.y
	};
}

double calculateDistanceBetweenPoints(const Point &point1, const Point &point2) {
	//Point vector = point1 - point2;
	double xDistance = point1.x - point2.x;
	double yDistance = point1.y - point2.y;

	double distance = sqrt(xDistance * xDistance + yDistance * yDistance);

	return distance;
}

int main()
{
	Point point1, point2;

	cin >> point1.x >> point1.y >> point2.x >> point2.y;

	cout << calculateDistanceBetweenPoints(point1, point2) << "\n";

	return 0;
}
