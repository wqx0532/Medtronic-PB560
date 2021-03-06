/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : HMI_LabelVersion.cpp 			   	      	 	  					*/
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                                                                          */
/*%C Objet d'affichage	de la Version									 					*/
/*		                                                                   	 	*/
/******************************************************************************/


/******************************************************************************/
/*                           HEADER INCLUDE FILE		                        */
/******************************************************************************/

#include "HMI_LabelVersion.hpp"

/******************************************************************************/
/*                           OTHER INCLUDE FILE		                     	   */
/******************************************************************************/


/******************************************************************************/
/*                           CONSTRUCTEUR/DESTRUCTEUR                       	*/
/******************************************************************************/
LabelVersion::LabelVersion():LabelValueString()
{

}
/******************************************************************************/
/*                                 ACCESSEURS				                	   */
/******************************************************************************/
UBYTE* LabelVersion::GetValue1Name()
{
   if(DbTarget == VERSION)
   {
      return (Tools::GetVersionSoft());
   }
   else if(DbTarget == POWER_SUPPLY)
   {
      return (Tools::GetVersionSoftSupply());
   }
   else
      return (UBYTE *) "???";
}
/*----------------------------------------------------------------------------*/
void LabelVersion::InitDbAccess(e_TYPE_OF_DB_TARGET _DbTarget)
{
    DbTarget = _DbTarget;

   if(DbTarget == VERSION)
   {
      SetValue1(Tools::GetVersionSoft());
   }
   else if(DbTarget == POWER_SUPPLY)
   {
      SetValue1(Tools::GetVersionSoftSupply());
   }
   else
      SetValue1((UBYTE *) "???");
}
/******************************************************************************/
/*                                METHODES                 					      */
/******************************************************************************/

