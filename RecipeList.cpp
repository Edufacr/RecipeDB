//
// Created by eduardo on 10/03/19.
//

#include "RecipeList.h"
#include "Recipe.h"

void RecipeList::InsertFirst(Recipe* recipe){
    FirstNode = new RecipeNode(recipe,FirstNode);
}

RecipeNode *RecipeList::Search(std::string s) {
    RecipeNode* tmp = FirstNode;
    while(tmp != nullptr){
        if(tmp->recipe->name == s)
            break;
        tmp = tmp->next;
    }
    return tmp;
}

void RecipeList::Delete(RecipeNode *node) {
    if(node != nullptr){
        if(node == FirstNode){
            //DeleteFirst();
            FirstNode = node->next;
            delete node;

        }
        else {
                RecipeNode *tmp = FirstNode;
                while (tmp->next != node) {
                    tmp = tmp->next;
                }
                tmp->next = node->next;
                node->next = nullptr;
                delete node;

        }
        
    }
}
void DeleteLast(){

}
void RecipeList::PrintAll() {
    RecipeNode* tmp = FirstNode;
    while(tmp != nullptr){
        tmp->recipe->Print();
        tmp = tmp->next;
    }
}

//void RecipeList::DeleteFirst() {
  //  FirstNode = nullptr;

//}

