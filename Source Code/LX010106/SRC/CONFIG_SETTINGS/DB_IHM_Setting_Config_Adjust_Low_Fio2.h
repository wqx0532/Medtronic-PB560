/******************************************************************************/
/*																										*/
/* Project Number	: 	RB0505     			     		                       	  		*/
/*																										*/
/*----------------------------------------------------------------------------*/
/*                                                                 			  	*/
/* Filename		: DB_IHM_Setting_Config_Adjust_Low_Fio2.h    		   			*/
/*                                                           				  		*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 			Functionnal description : 	datas declaration for             		*/
/*%C        DB_IHM_Setting_Config_Adjust_Low_Fio2		  								*/
/*                                                            				  		*/
/******************************************************************************/
/*%I 	Input Parameter :				 None                            		  	   */
/*%IO Input/Output Parameter :    None  	        			                  	*/
/*%O 	Output Parameter : 			 None 	                 				  		   */
/******************************************************************************/

#ifndef ADJUST_LOW_FIO2_H
#define ADJUST_LOW_FIO2_H


/******************************************************************************/
/*                      EXTERNAL FUNCTION DECLARATION	                      	*/
/******************************************************************************/

/* Access to the config write value */
extern void DB_ControlWrite(e_DB_CONTROL Id,
                            UWORD16 Value);
extern UWORD16 DB_ControlRead(e_DB_CONTROL Id);

extern UWORD16 DB_ConfigRead(e_DB_CONFIG Id);

#endif