//
// Created by eduardo on 10/03/19.
//
#include <iostream>
#include "Menu.h"
#include "Recipe.h"

using namespace std;
void MainMenu(){
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
}

void SelectOption(){
    int selection;
    cin>> selection;
    switch(selection){
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:
            exit(0);
        default:
            cout<<"Invalid Option"<<endl;
            cout<<"Try Again"<<endl;
            SelectOption();

    }}

    void AddRecipeMenu(){
        cout<<"*Add Recipe*"<<endl;

        string name;
        int portion;

        cout<<"Please enter the name of the new recipe"<<endl;
        cin>>name;
        cout<<"Please enter the number of portions"<<endl;
        cin>>portion;

        Recipe* recipe = new Recipe(name,portion);

        for(int i;i<21;i++){
            cout<<"¿Do you want to enter an ingredient?"<<endl;
            cout<<"Y/N"<<endl;
            char answer;
            cin>>answer;
            if(answer != 'n'|| answer != 'N'){
                //Function that enters ingredient
            }
            else
                break;
        }



    }
    void SearchRecipeMenu();
    void DeleteRecipeMenu();
    void PrintAllMenu();
    void ModifyRecipeNameMenu();
    void ModifyIngredientQuantity();
    void AddIngredientMenu();
    void DeleteIngredientMenu();
