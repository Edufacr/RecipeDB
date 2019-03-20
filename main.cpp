#include <iostream>
#include "RecipeList.h"
#include "Menu.h"
int main() {
    RecipeList* List = new RecipeList();
    Menu* menu = new Menu(List);
    menu->MainMenu();
}