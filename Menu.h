//
// Created by eduardo on 10/03/19.
//

#ifndef TAREACORTA1_MENU_H
#define TAREACORTA1_MENU_H

#include "Recipe.h"
#include "RecipeList.h"

struct Menu{
    RecipeList* List;

    Menu();
    Menu(RecipeList* list);
    void MainMenu();
    void SelectOption();
    void AddRecipeMenu();
    void SearchRecipeMenu();
    void DeleteRecipeMenu();
    void PrintAllMenu();
    void ModifyRecipeNameMenu();
    void ModifyIngredientQuantity();
    void AddIngredientMenu(Recipe* recipe);
    void DeleteIngredientMenu();


};





#endif //TAREACORTA1_MENU_H
