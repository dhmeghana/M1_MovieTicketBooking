/**
 * @file Movieticketbooking.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __Movieticketbooking_H__
#define ___Movieticketbooking_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"

#ifndef __Movieticketbooking_H__
#define __Movieticketbooking_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"



       





#endif /* #define _Movieticketbooking_H__ */


/**
 * @brief login withrespective to customer or admin
 */


int enterchoice(void);
/**
 * @brief login for admin
 * 
 */
void details(void);
/**
 * @brief Displays the movie available to purchase a ticket
 */

int ListofMovies(void);
int movieselect(void);

/**
 * @brief admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changepriceticket(int);

/**
 * @brief Customer can purchase a ticket 
 */

void show1(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show2(int choice,char name[10],int id1,int price);
/**
 * @brief Customer can purchase a ticket 
 */
void show3(int choice,char name[10],int id1,int price);
/**
 * @brief A customer can reserve the ticket
 */
void reserveticket(int *,int,int );

/**
 * @brief A customer can cancel the ticket  
 */
void cancelticket(int *); 


#endif /* #define _Movieticketbooking_H__ */


