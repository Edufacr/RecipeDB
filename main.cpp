#include <iostream>
#include "RecipeList.h"
#include "Menu.h"
int main() {
    RecipeList* List = new RecipeList();
    Menu* menu = new Menu(List);
    List->InsertFirst(new Recipe("Uno",1));
    List->InsertFirst(new Recipe("Dos",2));
    List->InsertFirst(new Recipe("Tres",3));
    List->InsertFirst(new Recipe("Cuatro",4));
    List->InsertFirst(new Recipe("Cinco",5));
    RecipeNode* tmp = List->FirstNode;
    while(tmp != nullptr){
        tmp->recipe->AddIngredient(1,"Banano","kg");
        tmp->recipe->AddIngredient(1,"Mango","hg");
        tmp->recipe->AddIngredient(1,"Kiwi","g");
        tmp->recipe->AddIngredient(4,"Avena","ml");
        tmp->recipe->AddIngredient(2,"Leche","l");
        tmp->recipe->AddIngredient(50,"Helado","Bolitas");
        tmp = tmp->next;
    }

    menu->MainMenu();

}