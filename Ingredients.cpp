//
// Created by eduardo on 10/03/19.
//

#include "Ingredients.h"

Ingredients::Ingredients(const std::string &name, int quantity, const std::string &mesureUnit) : name(name),
                                                                                                 quantity(quantity),
                                                                                                 mesureUnit(
                                                                                                         mesureUnit) {}

Ingredients::Ingredients() {
    name = "";
    quantity = 0;
    mesureUnit = "";
}

