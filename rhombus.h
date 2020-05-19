#ifndef LAB8_RHOMBUS_H
#define LAB8_RHOMBUS_H
#include "figure.h"

struct rhombus : figure{
private:
    point a_,b_,c_,d_;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    void printFile(std::ofstream&) const  override ;
    double square() const override ;
    rhombus() = default;
    rhombus(std::istream& is);
    rhombus(std::ifstream& is);
};


#endif //LAB8_RHOMBUS_H
