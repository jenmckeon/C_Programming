//
//  main.c
//  wk7q1
//
//  Created by Jen de Gruchy on 4/30/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include<stdio.h>

struct product
{
    char name[30];
    int stock;
    float price, discount;
};

void main()
{
    
    struct product p1 ={"Apple iPod Touch 32GB", 35,298.56, 2.32};
    clrscr();
    printf("Name    = %s\n",p1.name);
    printf("Stock   = %d\n",p1.stock);
    printf("Price   = %.2f\n",p1.price);
    printf("Discount= %.2f\n",p1.discount);
    getch();
}