#include "trapeze.h"
#include <cmath>

point trapeze::center() const {
    double x,y;
    x = (a_.x + b_.x + c_.x + d_.x) / 4;
    y = (a_.y + b_.y + c_.y + d_.y) / 4;
    point p(x,y);
    return p;
}
void trapeze::print(std::ostream& os) const {
    os << "hexagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << "\n";
}

void trapeze::printFile(std::ofstream &of) const {
    of << "hexagon\n"<< a_ << '\n' << b_ << '\n' << c_ << '\n' << d_ << "\n";
}

double trapeze::square() const {
    if ( (VectProd(operator-(a_,b_), operator-(c_,d_)) == 0) && (VectProd(operator-(b_,c_), operator-(a_,d_)) == 0) ) {
        return std::fabs((VectProd(operator-(a_,b_), operator-(a_,d_)))) ;
    } else if (VectProd(operator-(a_,b_), operator-(d_,c_)) == 0) {
        return ((VectNorm(a_, b_) + VectNorm(d_, c_)) / 2) * sqrt(
                VectNorm(d_, a_) * VectNorm(d_, a_) - (
                        pow((
                                    (pow((VectNorm(d_, c_) - VectNorm(a_, b_)), 2) +
                                     VectNorm(d_, a_) * VectNorm(d_, a_) - VectNorm(b_, c_) * VectNorm(b_, c_)) /
                                    (2 * (VectNorm(d_, c_) - VectNorm(a_, b_)))
                            ), 2)
                )
        );

    } else if (VectProd(operator-(b_,c_), operator-(a_,d_)) == 0) {
        return ((VectNorm(b_, c_) + VectNorm(a_, d_)) / 2) * sqrt(
                VectNorm(a_, b_) * VectNorm(a_, b_) - (
                        pow((
                                    (pow((VectNorm(a_, d_) - VectNorm(b_, c_)), 2) +
                                     VectNorm(a_, b_) * VectNorm(a_, b_) - VectNorm(c_, d_) * VectNorm(c_, d_)) /
                                    (2 * (VectNorm(a_, d_) - VectNorm(b_, c_)))
                            ), 2)
                )
        );
    }
}

trapeze::trapeze(std::istream& is) {
    is >> a_ >> b_ >> c_ >> d_;
}

trapeze::trapeze(std::ifstream& is) {
    is >> a_ >> b_ >> c_ >> d_;
}
