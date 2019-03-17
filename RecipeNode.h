//
// Created by eduardo on 10/03/19.
//

#ifndef TAREACORTA1_RECIPENODE_H
#define TAREACORTA1_RECIPENODE_H


#include "Recipe.h"

struct RecipeNode {
    Recipe* recipe;
    RecipeNode* next;

    RecipeNode(Recipe *recipe, RecipeNode *next);

    RecipeNode();

    RecipeNode(Recipe *recipe);
};


#endif //TAREACORTA1_RECIPENODE_H
