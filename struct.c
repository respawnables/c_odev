#include <stdio.h>
#include <stdlib.h>

typedef struct costumer
{
    char *name;
    int amount;
    struct costumer *next;
} costumer;


typedef struct indlist
{
    struct customer * ind;
    struct indlist * next;
} indlist;

void ekleListe(costumer *r, char *name, int amount); // customer listesini doldurur
void ekleindList(costumer * r, indlist * i); // index listesini doldurur

void bastir(costumer *r)
{
    while (r != NULL)
    {
        printf("%s\t %d \n", r->name, r->amount);
        r = r->next;
    }
}

int main()
{
    costumer *root;
    indlist * list;

    root = (costumer *)malloc(sizeof(costumer));
    

    root->name = "Ahmet";
    root->amount = 100;
    root->next = NULL;

    
    
    

    ekleListe(root, "Bilal", 1000);
    ekleListe(root, "Cemal", 600);
    ekleListe(root, "Adem", 650);
    ekleListe(root, "Yasin", 350);
    ekleListe(root, "Esin", 270);
    ekleListe(root, "Emel", 410);
    ekleListe(root, "Mustafa", 750);
    ekleListe(root, "Ayten", 600);
    ekleListe(root, "Ceylan", 1000);
    ekleListe(root, "Nesrin", 900);
    ekleListe(root, "Bekir", 850);
    ekleListe(root, "Emin", 790);
    ekleListe(root, "Hakan", 610);
    ekleListe(root, "Hatice", 550);

    
    


    bastir(root);

    return 0;
}

void ekleListe(costumer *r, char *name, int amount)
{

    while (r->next != NULL)
    {
        r = r->next;
    }

    r->next = (costumer *)malloc(sizeof(costumer));
    r->next->name = name;
    r->next->amount = amount;
    r->next->next = NULL;
}

void ekleindList(costumer * r, indlist * i)
{
    costumer * iter = r;
    i = (indlist*) malloc(sizeof(indlist));


    
}

