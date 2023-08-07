//Topic:10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>

int main()
{

 int cost_price,selling_price;
 printf("Enter Cost price:");
 scanf("%d",&cost_price);
 printf("Enter Selling price:");
 scanf("%d",&selling_price);

 if(cost_price<selling_price)
 {
    float profit_percentage=((selling_price-cost_price)*100)/cost_price;
    return printf("Profit_percentage is %.2f.\n",profit_percentage);
 }
 else if(cost_price>selling_price)
 {
    float loss_percentage=((cost_price-selling_price)*100)/cost_price;
    return printf("Loss_percentage is %.2f.\n",loss_percentage);
 }
 else{
    return printf("No profit, No Loss.\n");
 }

 return 0;

}