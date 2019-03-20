//
// Created by eduardo on 10/03/19.
//

#ifndef TAREACORTA1_RECIPELIST_H
#define TAREACORTA1_RECIPELIST_H


#include "RecipeNode.h"
#include "Recipe.h"

struct RecipeList {
    RecipeNode* FirstNode;

    void InsertFirst(Recipe* recipe);
    RecipeNode* Search(std::string s);
    void Delete(RecipeNode* node);
    void DeleteFirst();
    void PrintAll();










};


#endif //TAREACORTA1_RECIPELIST_H
