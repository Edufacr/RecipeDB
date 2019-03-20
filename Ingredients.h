//
// Created by eduardo on 10/03/19.
//

#ifndef TAREACORTA1_INGREDIENTS_H
#define TAREACORTA1_INGREDIENTS_H

#include <string>


struct Ingredients {
    std::string name;
    int quantity;
    std::string mesureUnit;
    bool erased;
    //flag de si esta borrado bool deleted;

    void setQuantity(int quantity);

    Ingredients(const std::string &name, int quantity, const std::string &mesureUnit);

    Ingredients();
};


#endif //TAREACORTA1_INGREDIENTS_H
