#include <stdio.h>
#include <stdlib.h>

void manageProduct()
{
    
}
void purchaseProduct()
{
    
}
void generateBill()
{
    
}

void suppermarket()
{
    int quantity;
    float pricePerUnit, totalPrice;
    
    char item[15];
    
    
   /* if(item = cookingOil)
    {
        totalPrice = 300*quantity;
    }*/
    
    
    printf("\t\t\t================\n\n");
    printf("\t\t WELCOME TO JEFF MINI-SUPERMARKET \n\n");
    printf("\t\t\t================\n\n");
    int ch;

    while (1)
    {
       
       
        printf("\t\t SHOPPING CART!!\n\n");
        
        printf("\t\t 1. Manage Product\n\n");
        printf("\t\t 2. Purchase Product\n\n");
        printf("\t\t 3. Generate Bill\n\n");
        printf("\t\t 0. Exit\n\n");
        printf("\t\t===========================\n\n");
        printf("\t\t Please enter your Choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1: {
                manageProduct();
                break;
            }
            case 2:{
                purchaseProduct();
                break;
            }
            case 3: {
                generateBill();
                break;
            }
            case 0: exit(0);
            default: printf("Valid choice not entered!");
        }

    }
}
int main()
{
    suppermarket();
}

