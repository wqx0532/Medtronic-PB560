/******************************************************************************/
/*																 	          						*/
/* Project Number	: 	RB0505     			     	       	  		          			*/
/*																	         			 			*/
/*----------------------------------------------------------------------------*/
/*                                                 			  	              	*/
/* Filename	: DB_Compute_Read.c 			   	           		              		*/
/*                                                 			  		          	*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 						Functionnal description : 				          				*/
/*%C			  This function reads the values in the						  			*/
/*%C         				  compute base							          				*/
/*                                                     				  		  		*/
/******************************************************************************/
/*%I 	Input Parameter : 			Id			                 	          			*/
/*%IO Input/Output Parameter : 	None 	          		                      	*/
/*%O 	Output Parameter : 			None				  		              				*/
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		         	              	*/
/******************************************************************************/

#include "typedef.h"
#include "DB_Compute.h"

/******************************************************************************/
/*                                FUNCTION BODY                               */
/******************************************************************************/
UWORD16 DB_Compute_Read(e_DB_Compute Id)
{
	/*%C Return the values of ID parameter 													*/
	return (DB_Compute[Id]);	
}
