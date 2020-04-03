/******************************************************************************/
/*																 	          						*/
/* Project Number	: 	RB0505     			     	       	  		          			*/
/*																	          						*/
/*----------------------------------------------------------------------------*/
/*                                                 			  	              	*/
/* Filename	: DB_EEPROM_BAT_Read.c 			   	           		             	*/
/*                                                 			  		          	*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 							Functionnal description : 			          				*/
/*%C		This function reads the values in the EEPROM Battery base				*/
/******************************************************************************/
/*%I 	Input Parameter : 			Id			                 	          			*/
/*%IO Input/Output Parameter : 	None 	          		                      	*/
/*%O 	Output Parameter : 			Value				  		              				*/
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		         	              	*/
/******************************************************************************/

#include "typedef.h"
#include "DB_EEPROM_BAT.h"

/******************************************************************************/
/*                                FUNCTION BODY                               */
/******************************************************************************/
UWORD16 DB_EEPROM_BAT_Read(e_EEPROM_BAT_DATA Id)
{
	/* Return the values of ID parameter 													*/
	return (Ram_Read_Bat[Id]);
}
