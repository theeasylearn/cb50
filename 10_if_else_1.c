/*
    write a program to findout which is cheaper product to buy based upon two product's weight and price 
    steps 
    1) create variable price1,price2,weight1,weight2,price_per_gram1,price_per_gram2;
    2) accept product 1's price and weight 
    3) accept product 2's price and weight
    4) findout price per gram for 1st product 
        price_per_gram1 = price1 / weight1
    5) findout price per gram for 2nd product 
        price_per_gram2 = price2/ weight2
    6) findout cheapest product 
        if price_per_gram1<price_per_gram2
            print 1st product is cheaper 
        else 
            print 2nd product is cheaper
*/
#include<stdio.h>
void main()
{
    int price1,price2,weight1,weight2;
    float price_per_gram1,price_per_gram2;
    printf("enter 1st' product price");
    scanf("%d",&price1);

    printf("enter 1st' product weight");
    scanf("%d",&weight1);
    
    printf("enter 2nd' product price");
    scanf("%d",&price2);

    printf("enter 2nd' product weight");
    scanf("%d",&weight2);
    
    price_per_gram1 = price1 / (float) weight1;
    price_per_gram2 = price2/ (float) weight2;

    if(price_per_gram1<price_per_gram2)
    {
       printf("product 1 is cheaper product ");
    }
    else 
    {
         printf("product 2 is cheaper product ");
    }
}