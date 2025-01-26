#include<stdio.h>
int main_menu(int choice );
int main()
{
    int n = 0;
    char order_again = 'y';
    int total_bill = 0;
    while(order_again == 'y' || order_again == 'y')
    {
    printf("----------Manu----------\n");
    printf("1.Pizza           price = 180rs/pcs\n");
    printf("2.Burger          price = 100rs/pcs\n");
    printf("3.Dosa            price = 80rs/pcs\n");
    printf("4.Idli            price = 50rs/pcs\n");
    printf("Enter your choice : ");
    scanf("%d",&n);

    int item_cost = main_menu(n);
    total_bill = total_bill + item_cost ;
    printf("Do you want to order again ? (y/n) :");
    scanf(" %c",&order_again);
    }
    printf("THe total bill is : %d\n",total_bill);
    printf("Thank you for Ordring");
    return 0;
}
int main_menu(int choice)
{
    int quantity = 0;
    int item_cost = 0;
    if (choice == 1){
        
        int price = 180 ;
     
        printf("You have selected Pizza\n");
        printf("Enter the Quantity : ");
        scanf("%d",&quantity);
        item_cost = quantity * price;
        printf("Item cost is : %d\n",item_cost);
    }
    else if (choice == 2){
        
        int price = 100 ;
        printf("you have selected Burger\n");
        printf("Enter the Quantity : ");
        scanf("%d",&quantity);
        item_cost = quantity * price;
        printf("Item cost is : %d\n",item_cost);

    }
   else if (choice == 3){
        
        int price = 80 ;
        printf("You have selected Dosa\n");
        printf("Enter the Quantity : ");
        scanf("%d",&quantity);
        item_cost = quantity * price;
        printf("Item cost is : %d\n",item_cost);
    }
    else if (choice == 4){
        
        int price = 50 ;
        printf("you have selected Idli\n");
        printf("Enter the Quantity : ");
        scanf("%d",&quantity);
        item_cost = quantity * price;
        printf("Item cost is : %d\n",item_cost);
    }
    else if (choice > 4){
        printf("Invalide choice\n");
        printf("Please choose again\n");
    }
    return item_cost;

}