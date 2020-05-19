#include "pentagon.h"
#include "point.h"

point pentagon::center() const {
    double x,y;
    x = (a_.x + b_.x + c_.x + d_.x + e_.x) / 5;
    y = (a_.y + b_.y + c_.y + d_.y + e_.y) / 5;
    point p(x,y);
    return p;
}

void pentagon::print(std::ostream& os) const {
    os << "pentagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << '\n' << e_ << '\n';
}

void pentagon::printFile(std::ofstream& of) const {
    of << "pentagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << '\n' << e_ << '\n';
}

double pentagon::square() const {
    return TrAngle(a_, b_, c_) + TrAngle(c_, d_, e_) + TrAngle(a_, c_, e_);
}

pentagon::pentagon(std::istream& is) {
    is >> a_ >> b_ >> c_ >> d_ >> e_;
}

pentagon::pentagon(std::ifstream& is) {
    is >> a_ >> b_ >> c_ >> d_ >> e_;
}
