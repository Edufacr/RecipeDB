//
// Created by eduardo on 10/03/19.
//

#include "RecipeList.h"
#include "Recipe.h"

void RecipeList::InsertFirst(Recipe* recipe){
    FirstNode = new RecipeNode(recipe,FirstNode);
}