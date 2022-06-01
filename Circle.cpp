//
// Created by sorer on 6/1/22.
//

#include "Circle.h"

Circle::Circle(const Circle &other) {
    this->m_radius = other.getRadius();
    this->setShape(strdup(other.getName()), other.getCenter());
}
Circle::Circle(double r, const char *sn) {
    this->setShape(sn, Point(0, 0));
    this->setRadius(r);
}
