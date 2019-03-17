//
// Created by eduardo on 10/03/19.
//

#include "Recipe.h"
//Constructors
Recipe::Recipe() {
    name = "";
    portion = 0;
    IngredientList = NULL;
}

Recipe::Recipe(const std::string &name, int portion) : name(name), portion(portion) {
    IngredientList = CreateIngArray();
}

Recipe::Recipe(const std::string &name, int portion, Ingredients *IngredientList) : name(name), portion(portion),
                                                                                    IngredientList(IngredientList) {}

//Getter n Setter
void Recipe::setName(const std::string &name) {
    Recipe::name = name;
}

void Recipe::setPortion(int portion) {
    Recipe::portion = portion;
}


//


Ingredients *Recipe::CreateIngArray() {
    Ingredients array[21];
    return array;
}

Ingredients* Recipe::SearchIngredient(std::string s){
    for(int i; i<21; i++){
        if(s == IngredientList[i].name){
            return &IngredientList[i];
        }
    }
}


