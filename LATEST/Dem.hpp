#pragma once
/******************************************************************************/
/* File   : Dem.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgDem.hpp"
#include "Dem_core.hpp"
#include "infDem_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Dem:
      INTERFACES_EXPORTED_DEM
   ,  public abstract_module
   ,  public class_Dem_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, DEM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, DEM_CONFIG_DATA, DEM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DEM_CODE) DeInitFunction (void);
      FUNC(void, DEM_CODE) MainFunction   (void);
      DEM_CORE_FUNCTIONALITIES

      FUNC(void, DEM_CODE) PreInit        (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Dem, DEM_VAR) Dem;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

