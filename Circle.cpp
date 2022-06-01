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