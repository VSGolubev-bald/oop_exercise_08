#include "rhombus.h"

point rhombus::center() const {
    double x,y;
    x = (a_.x + b_.x + c_.x + d_.x) / 4;
    y = (a_.y + b_.y + c_.y + d_.y) / 4;
    point p(x,y);
    return p;
}
void rhombus::print(std::ostream& os) const {
    os << "octagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << '\n';
}

void rhombus::printFile(std::ofstream& of) const {
    of << "octagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << '\n';
}

double rhombus::square() const {
    return VectNorm(c_, a_) * VectNorm(d_, b_) / 2;
}

rhombus::rhombus(std::istream& is) {
    is >> a_ >> b_ >> c_ >> d_;
}

rhombus::rhombus(std::ifstream& is) {
    is >> a_ >> b_ >> c_ >> d_;
}