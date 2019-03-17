//
// Created by eduardo on 10/03/19.
//

#ifndef TAREACORTA1_TEST_H
#define TAREACORTA1_TEST_H

#include <string>
#include "Ingredients.h"


struct Recipe {
    std::string name;
    int portion;
    Ingredients* IngredientList;
//Constructors
    Recipe();

    Recipe(const std::string &name, int portion);

    Recipe(const std::string &name, int portion, Ingredients *IngredientList);

//Methods

    Ingredients* CreateIngArray();

    void setName(const std::string &name);

    void setPortion(int portion);

    Ingredients* SearchIngredient(std::string s);

};



#endif //TAREACORTA1_TEST_H