#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double X, double Y) : x(X), y(Y) {}
    // Getter methods
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    // Setter methods
    void setX(double newX) {
        x = newX;
    }
    void setY(double newY) {
        y = newY;
    }
    // Method to calculate distance between two points
    double distance(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};
int main() {
    Point p1(2.0, 3.0);
    Point p2(7.0, 9.0);
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    // Changing coordinates of p1
    p1.setX(4.0);
    p1.setY(6.0);
    cout << "New distance between p1 and p2: " << p1.distance(p2) << endl;
    return 0;
}