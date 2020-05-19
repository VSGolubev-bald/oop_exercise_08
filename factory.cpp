#include "factory.h"

std::shared_ptr<figure> factory::FigureCreate(std::istream &is) {
    std::string name;
    is >> name;
    if ( name == "pentagon" ) {
        return std::shared_ptr<figure> ( new pentagon(is));
    } else if ( name == "trapeze") {
        return std::shared_ptr<figure> ( new trapeze(is));
    } else if ( name == "rhombus") {
        return std::shared_ptr<figure> ( new rhombus(is));
    } else {
        throw std::logic_error("There is no such figure\n");
    }
}

std::shared_ptr<figure> factory::FigureCreateFile(std::ifstream &is) {
    std::string name;
    is >> name;
    if ( name == "pentagon" ) {
        return std::shared_ptr<figure> ( new pentagon(is));
    } else if ( name == "rhombus") {
        return std::shared_ptr<figure> ( new trapeze(is));
    } else if ( name == "rhombus") {
        return std::shared_ptr<figure> ( new rhombus(is));
    } else {
        throw std::logic_error("There is no such figure\n");
    }
}