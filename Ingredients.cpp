//
// Created by eduardo on 10/03/19.
//

#include "Ingredients.h"

Ingredients::Ingredients(const std::string &name, int quantity, const std::string &mesureUnit) : name(name),
                                                                                                 quantity(quantity),
                                                                                                 mesureUnit(
                                                                                                         mesureUnit) {
    erased = true;
}

Ingredients::Ingredients() {
    name = "";
    quantity = 0;
    mesureUnit = "";
    erased = true;
}

void Ingredients::setQuantity(int quantity) {
    Ingredients::quantity = quantity;
}

