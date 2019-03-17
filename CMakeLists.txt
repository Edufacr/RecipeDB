cmake_minimum_required(VERSION 3.13)
project(TareaCorta1)

set(CMAKE_CXX_STANDARD 14)

add_executable(TareaCorta1 main.cpp Recipe.cpp Recipe.h Ingredients.cpp Ingredients.h RecipeNode.cpp RecipeNode.h RecipeList.cpp RecipeList.h Menu.cpp Menu.h)