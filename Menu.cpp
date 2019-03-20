#include <utility>

//
// Created by eduardo on 10/03/19.
//
#include <iostream>
#include "Menu.h"
#include "Recipe.h"
#include "RecipeList.h"

using namespace std;
void Menu::MainMenu(){
    cout<<"Welcome"<<endl;


    cout<<"1. Add Recipe"<<endl;
    cout<<"2. Search Recipe"<<endl;
    cout<<"3. Delete Recipe"<<endl;
    cout<<"4. Print All Recipes"<<endl;
    cout<<"5. Modify Recipe Name"<<endl;
    cout<<"6. Modify Ingredient Quantity"<<endl;
    cout<<"7. Add Ingredient"<<endl;
    cout<<"8. Delete Ingredient"<<endl;

    cout<<"9. EXIT"<<endl;

    cout<<"Choose an option: "<<endl;
    SelectOption();
}

void Menu::SelectOption(){
    int selection;
    cin>> selection;
    switch(selection){
        case 1:
            AddRecipeMenu();
            break;
        case 2:
            SearchRecipeMenu();
            break;
        case 3:
            DeleteRecipeMenu();
            break;
        case 4:
            PrintAllMenu();
            break;
        case 5:
            ModifyRecipeNameMenu();
            break;
        case 6:
            ModifyIngredientQuantity();
            break;
        case 7:
            AddIngredientMenu2();
            break;
        case 8:
            DeleteIngredientMenu();
            break;
        case 9:
            exit(0);
        default:
            cout<<"Invalid Option"<<endl;
            cout<<"Try Again"<<endl;
            SelectOption();

    }
    MainMenu();
}

    void Menu::AddRecipeMenu(){
        cout<<"*Add Recipe*"<<endl;

        string name;
        int portion;

        cout<<"Please enter the name of the new recipe"<<endl;
        cin>>name;
        if(List->Search(name) == nullptr){
            cout<<"Please enter the number of portions"<<endl;
            cin>>portion;

            Recipe* recipe = new Recipe(name,portion);
            List->InsertFirst(recipe);
            for(int i = 0;i<21;i++){
                cout<<"¿Do you want to enter an ingredient?"<<endl;
                cout<<"y/n"<<endl;
                char answer;
                cin>>answer;
                if(answer != 'n'){
                    AddIngredientMenu(recipe);
                }
                else
                    break;
            }
        }
        else
            cout<<"Recipe Already Exists"<<endl;
    }
    void Menu::AddIngredientMenu(Recipe* recipe){
    cout<<"Enter the name of the ingredient:"<<endl;
    string name;
    cin>>name;
    cout<<"Enter the quantity:"<<endl;
    int quantity;
    cin>>quantity;
    cout<<"Enter the mesure Unit"<<endl;
    string mesureUnit;
    cin>>mesureUnit;
    AddIngredientMenuA(quantity,name,mesureUnit,recipe);
}
    void Menu::AddIngredientMenuA(int quantity, string name, string mesureUnit, Recipe* recipe) {
        if(recipe->AddIngredient(quantity, std::move(name), std::move(mesureUnit)))
            cout<<"Ingredient added successfully"<<endl;
        else
            cout<<"Error while adding ingredients"<<endl;
    }

void Menu::AddIngredientMenu2(){
    cout<<"Enter the name of the recipe:"<<endl;
    string recipename;
    cin>>recipename;
    RecipeNode* recipe = List->Search(recipename);
    if(recipe != nullptr) {
        cout << "Enter the name of the ingredient:" << endl;
        string name;
        cin >> name;
        cout << "Enter the quantity:" << endl;
        int quantity;
        cin >> quantity;
        cout << "Enter the mesure Unit" << endl;
        string mesureUnit;
        cin >> mesureUnit;
        AddIngredientMenuA(quantity, name, mesureUnit, recipe->recipe);
    }
    else
        cout<<"Recipe not found"<<endl;

}


    void Menu::SearchRecipeMenu(){
    cout<<"Enter the name of the recipe:"<<endl;
    string name;
    cin>>name;
    RecipeNode* ToPrint = List->Search(name);
    if(ToPrint != nullptr) {
        ToPrint->recipe->Print();
    }
    else
        cout<<"Recipe not found"<<endl;

}
    void Menu::DeleteRecipeMenu(){
        cout<<"Enter the name of the recipe:"<<endl;
        string name;
        cin>>name;
        RecipeNode* node = List->Search(name);
        if(node != nullptr){
            List->Delete(node);
            
        }
        else
        {
            cout<<"Non existent recipe"<<endl;
        }
        
    }



    void Menu::PrintAllMenu(){
    List->PrintAll();
}
    void Menu::ModifyRecipeNameMenu(){
        cout<<"Enter the name of the recipe you want to change:"<<endl;
        string name;
        cin>>name;
        cout<<"Enter the new name for the recipe:"<<endl;
        string newname;
        cin>>newname;
        RecipeNode* ToChange = List->Search(name);
        if(ToChange != nullptr){
            ToChange->recipe->setName(newname);
        }
        else
            cout<<"Non existent recipe "<<endl;
}
    void Menu::ModifyIngredientQuantity(){
        cout<<"Enter the name of the recipe you want to change:"<<endl;
        string name;
        cin>>name;
        RecipeNode* recipenode = List->Search(name);
        if(recipenode!= nullptr) {
            cout << "Enter the name of the ingredient you want to change:" << endl;
            string Ingname;
            cin >> Ingname;
            Ingredients* Ingre = recipenode->recipe->SearchIngredient(Ingname);
            if(Ingre != nullptr) {
                cout << "Enter the new quantity:" << endl;
                int q;
                cin >> q;
                Ingre->setQuantity(q);
            }
            else
                cout<<"Ingredient not found"<<endl;
        }
        else
            cout<<"Recipe not found"<<endl;

}

    void Menu::DeleteIngredientMenu(){
        cout<<"Enter the name of the recipe:"<<endl;
        string recipename;
        cin>>recipename;
        RecipeNode* recipe = List->Search(recipename);
        if(recipe != nullptr) {
            cout << "Enter the name of the ingredient:" << endl;
            string name;
            cin >> name;
            recipe->recipe->SearchIngredient(name)->erased = true;
        }
        else
            cout<<"Recipe not found"<<endl;
}

Menu::Menu(RecipeList* list) {
    List = list;
}
Menu::Menu(){}
