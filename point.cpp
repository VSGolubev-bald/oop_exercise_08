#include "point.h"
#include <cmath>

std::istream& operator >> (std::istream& is,point& p ) {
    return  is >> p.x >> p.y;
}

std::ostream& operator << (std::ostream& os,const point& p) {
    return os << p.x <<' '<< p.y;
}

point operator-(point l, point r) {
    return {r.x - l.x, r.y - l.y};
}

double VectNorm(point l, point r) {
    point vect = operator-(l, r);
    double res = sqrt(vect.x * vect.x + vect.y * vect.y);
    return res;
}

double TrAngle(point a, point b, point c) {
    point  v1{}, v2{};
    v1 = operator-(a, b);
    v2 = operator-(a, c);
    return std::abs(v1.x * v2.y - v2.x * v1.y) / 2;
}

double VectProd(point l, point r) {
    return l.x * r.y - r.x * l.y;
}

double ScalProd(point l, point r) {
    return std::abs(l.x * r.x + l.y * r.y);
}
