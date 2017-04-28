//
//  main.c
//  wk7forum1
//
//  Created by Jen de Gruchy on 5/4/13.
//  Copyright (c) 2013 Jen McKeon (de Gruchy). All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
	struct CheckingAccount {
		int accountNumber;
		double interest;
		double balance;
	};
    
	struct CheckingAccount c1;
    c1.accountNumber = 6789;
    c1.balance = 250.13;
    c1.interest = 14.36;
	
	printf ("Welcome! Checking Account #%i! We're pleased to see you again!\n", c1.accountNumber);
   	printf ("Your Account Balance is: $%f\n", c1.balance);
	printf ("The interest you've earned is: $%f\n", c1.interest);
    
	c1.balance = c1.balance + c1.interest;
	printf ("So, due to your interest, your new balance is: $%f.\n", c1.balance);
    
	return 0;
}
