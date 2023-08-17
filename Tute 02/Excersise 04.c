#include <stdio.h>

struct item 
{
    int itemNo, quantity;
    double price;
};

int main()
{
    struct item it1, it2;
    
    printf("Enter the price of the first Item\n");
    scanf("%lf", &it1.price);
    printf("Enter the Quantity of the first Item\n");
    scanf("%d", &it1.quantity);
    printf("Enter the price of the Second Item\n");
    scanf("%lf", &it2.price);
    printf("Enter the Quantity of the second Item\n");
    scanf("%d", &it2.quantity);
    
    printf("%10s %15s %10s\n", "Item No", "Price", "Quantity"); 
    printf("%10s %15.2lf %10d\n", "1", it1.price, it1.quantity);
    printf("%10s %15.2lf %10d\n", "2", it2.price, it2.quantity);

    return 0;
}
