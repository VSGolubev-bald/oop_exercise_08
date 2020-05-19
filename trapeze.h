#ifndef LAB8_TRAPEZE_H
#define LAB8_TRAPEZE_H
#include "figure.h"

struct trapeze : figure{
private:
    point a_,b_,c_,d_;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    void printFile(std::ofstream&) const  override ;
    double square() const override ;
    trapeze() = default;
    trapeze(std::istream& is);
    trapeze(std::ifstream& is);
};

#endif //LAB8_TRAPEZE_H
