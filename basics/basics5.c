// typedef creates an alias for a datatype. generally used with the struct custom type so that instance creation is easier.

#include <stdio.h>
#include <string.h>

typedef float decimal;

// declaring a struct
struct Person
{
    char name[20];
    int age;
};

typedef struct {
    int pages;
    decimal price;
}Notebook;

typedef struct {
    Notebook base;  //kinda like inheritance
    char coverPage[30];
}HardcoverNotebook;


int main()
{
    decimal weight = 40.3;
    printf("weight: %f\n", weight);

    struct Person person1;
    printf("name: %s\n", person1.name); // uninitialized so you get garbage values at this point.

    strcpy(person1.name, "Nisha"); // we have to assign like this because once defined, the arrays in C can't be reassigned the values
    printf("name: %s\n", person1.name);

    // char name[20];
    // name = "Nisha"; // This is not valid in C

    person1.age = 20;
    printf("age: %d\n", person1.age);

    // when we use strcut type with typedef the instance creation syntax gets easier. 
    // for example: instantiating the notebook struct 
    Notebook myNotebook = {100, 30.0}; 
    printf("myNotebook pages: %d and price : %.1f\n", myNotebook.pages, myNotebook.price);
    
    myNotebook.pages = 120;
    printf("myNotebook pages: %d and price : %.1f\n", myNotebook.pages, myNotebook.price);
    
    HardcoverNotebook notebook2;
    strcpy(notebook2.coverPage, "classmate");
    notebook2.base.pages = 90;
    notebook2.base.price = 200.0;

    printf("notebook2 pages: %d and price : %.1f and coverPage : %s\n", notebook2.base.pages, notebook2.base.price, notebook2.coverPage);


    HardcoverNotebook notebook3 = {
        // these are designated initializers; 
        // if some of the members/properties are not initalized here then they are given default values as NULL or 0 depending on their datatype. 
        .base.pages = 90,  
        .base.price = 230.0,
        .coverPage = "classmate"
    };

    printf("notebook3 pages: %d and price : %.1f and coverPage : %s\n", notebook3.base.pages, notebook3.base.price, notebook3.coverPage);

    return 0;
}
