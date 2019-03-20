//
// Created by eduardo on 10/03/19.
//

#include "Recipe.h"
#include <iostream>
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
    Ingredients array[20];
    return array;
}

Ingredients* Recipe::SearchIngredient(std::string s){
    for(int i=0; i<21; i++){
        if(s == IngredientList[i].name){
            return &IngredientList[i];
        }
    }
    return nullptr;
}

void Recipe::AddIngredient(Ingredients* ing, int pos) {
    IngredientList[pos] = *ing;
}

bool Recipe::AddIngredient(int quantity, std::string s,std::string mesureunit) {
    int pos = GetFreeIngredientSpot();
    if(pos != -1 && SearchIngredient(s) == nullptr){
        AddIngredient(new Ingredients(s,quantity,mesureunit),pos);
        return true;
    }
    return false;
}

int Recipe::GetFreeIngredientSpot() {
    for (int i = 0; i < 21 ; ++i) {
        if(IngredientList[i].erased){
            return i;
        };
    }
    return -1;
}

void Recipe::PrintIngredients() {
    for (int i = 0; i < 21 ; ++i) {
        if(!IngredientList[i].erased){
            std::cout<<"Name:"<<IngredientList[i].name<<"Quantity:"<<IngredientList[i].quantity<<IngredientList[i].mesureUnit<<std::endl;
        };
    }
}

void Recipe::Print() {
    std::cout << "***************************************************"<<std::endl;
    std::cout << "Name:" << name << std::endl;
    std::cout << "Portions:" << portion << std::endl;
    std::cout << "Ingredients:" << std::endl;
    PrintIngredients();
    std::cout << "***************************************************"<<std::endl;

}



