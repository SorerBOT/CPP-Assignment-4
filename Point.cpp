//
// Created by sorer on 6/1/22.
//

#include "Point.h"

Point::Point(const Point &other) { this->m_x = other.getX(); this->m_y = other.getY(); }
Point::Point(int x, int y) { this->m_x = x; this->m_y = y; }
