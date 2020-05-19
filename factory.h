#ifndef LAB8_FACTORY_H
#define LAB8_FACTORY_H
#include <memory>
#include <iostream>
#include <fstream>
#include "trapeze.h"
#include "rhombus.h"
#include "pentagon.h"
#include <string>

struct factory {
    std::shared_ptr<figure> FigureCreate(std::istream& is);

    std::shared_ptr<figure> FigureCreateFile(std::ifstream& is);

};

#endif //LAB8_FACTORY_H
