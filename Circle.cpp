//
// Created by sorer on 6/1/22.
//

#include "math.h"
#include "Circle.h"

Circle::Circle(const Circle &other) {
    this->m_radius = other.getRadius();
    this->setShape(strdup(other.getName()), other.getCenter());
}
Circle::Circle(double r, const char *sn) {
    this->setShape(sn, Point(0, 0));
    this->setRadius(r);
}
double Circle::getRadius() const { return this->m_radius; }
void Circle::setRadius(double r) { this->m_radius = r; }
int Circle::calcArea() const { return (int) (M_PI * pow(this->getRadius(), 2)); }
int Circle::calcPerimeter() const { return (int) (M_PI * 2 * this->getRadius()); }

const Circle &Circle::operator=(const Circle &other) { this->setRadius(other.getRadius()); this->setShape(other.getName(), other.getCenter()); return *this; }
const Circle &Circle::operator=(const char *name) { this->setName(name); return *this; }

Circle operator+(int r, const Circle &other) {
    Circle circle(r, other.getName());
    circle.setShape(other.getName(), other.getCenter());
    return circle;
}