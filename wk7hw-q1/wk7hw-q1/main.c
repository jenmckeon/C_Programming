#include <stdio.h>

int main()
{
    int i;
    
    struct shoppingCart {
        int id;
        char description[42];
        double price;
    };
    
    const struct shoppingCart products[10] =
    {
        {1234, {"Bananas"}, 1.29},
        {1235, {"Tomatoes"}, 2.69},
        {1236, {"Lettuce"}, 3.49},
        {1237, {"Avocado"}, 2.00},
        {1238, {"Bread"}, 3.49},
        {1239, {"Skim Milk"}, 2.49},
        {1240, {"Eggs"}, 2.69},
        {1241, {"Sour Cream"}, 3.49},
        {1242, {"Chicken"}, 7.69},
        {1243, {"Cheese"}, 2.49}
    };
    printf("Welcome to Stop and Shop.\nThese are the items in your cart:\n\n");
    printf("Product ID      Price           Item\n");
    printf("----------      -----           ----\n");
    
    for (i = 0; i < 10; ++i)
        printf("  %i        %f          %s\n",
               products[i].id, products[i].price, products[i].description);
    
    return 0;
}