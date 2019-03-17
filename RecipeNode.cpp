//
// Created by eduardo on 10/03/19.
//

#include "RecipeNode.h"

RecipeNode::RecipeNode(Recipe *recipe, RecipeNode *next) : recipe(recipe), next(next) {}

RecipeNode::RecipeNode() {}

RecipeNode::RecipeNode(Recipe *recipe) : recipe(recipe) {}
