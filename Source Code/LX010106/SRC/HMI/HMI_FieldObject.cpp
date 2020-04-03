/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : HMI_FieldObject.cpp                                     			*/
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                                                                          */
/*%C Objet de type Champ																      */
/*		                                                                        */
/******************************************************************************/

/******************************************************************************/
/*                           HEADER INCLUDE FILE		                  		*/
/******************************************************************************/

#include "HMI_FieldObject.hpp"

/******************************************************************************/
/*                           OTHER INCLUDE FILE		                  			*/
/******************************************************************************/

/******************************************************************************/
/*                           CONSTRUCTEUR/DESTRUCTEUR                			*/
/******************************************************************************/
FieldObject::FieldObject():DisplayObject()
{
   Font = FONT_1;
   ReverseVideo = FALSE;
}

/******************************************************************************/
/*                           ACCESSEURS				                	   		*/
/******************************************************************************/
void FieldObject::SetFont(UWORD16 _Font)
{
   Font = _Font;
}
/*----------------------------------------------------------------------------*/
UWORD16 FieldObject::GetFont()
{
   return Font;
}
/*----------------------------------------------------------------------------*/
void FieldObject::SetReverseVideo(e_BOOL _ReverseVideo)
{
   ReverseVideo = _ReverseVideo;
}
/*----------------------------------------------------------------------------*/
e_BOOL FieldObject::GetReverseVideo()
{
   return ReverseVideo;
}

/******************************************************************************/
/*                           METHODES                					      		*/
/******************************************************************************/

/******************************************************************************/
/*%C                       Functionnal description :                      		*/
/*%C                                                                          */
/*%C Initialisation																				*/
/*%C                                                                         	*/
/*%I Input Parameter : 																			*/
/*%I		Line : ligne 											            				*/
/*%I		Col : colonne 										            					*/
/*%I		ReverseVideo : TRUE si en reverse video										*/
/*%IO Input/Output : 																			*/
/*%IO		NONE																					  	*/
/*%O Output Parameter : 																	 	*/
/*%O 		NONE  							  														*/
/******************************************************************************/
void FieldObject::Init( UWORD16 _Line, 
								UWORD16 _Col, 
								UWORD16 _Font,
                        e_BOOL _ReverseVideo)
{
	/*%C Init Line, colon and font */
   DisplayObject::Init(_Line, _Col);
   SetFont(_Font);
   SetReverseVideo(_ReverseVideo);
}

/******************************************************************************/
/*%C                       Functionnal description :                      		*/
/*%C                                                                          */
/*%C Efface la valeur courante																*/
/*%C                                                                         	*/
/*%I Input Parameter : 																			*/
/*%I	  	NONE																						*/
/*%IO Input/Output : 																			*/
/*%IO		NONE																					  	*/
/*%O Output Parameter : 																	 	*/
/*%O 		NONE  							  														*/
/******************************************************************************/
void FieldObject::Clear()
{
	(void)this; /* to avoid w68 compilation warning (parameter "this" not used) */
}

