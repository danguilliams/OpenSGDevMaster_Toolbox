/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class CoordinateInterpolator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOORDINATEINTERPOLATORBASE_H_
#define _OSGCOORDINATEINTERPOLATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGBaseTypes.h"

#include "OSGNodeCore.h" // Parent

#include "OSGReal32Fields.h" // Fraction type
#include "OSGReal32Fields.h" // Key type
#include "OSGPnt3fFields.h" // KeyValue type
#include "OSGPnt3fFields.h" // Value type

#include "OSGCoordinateInterpolatorFields.h"

OSG_BEGIN_NAMESPACE

class CoordinateInterpolator;

//! \brief CoordinateInterpolator Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CoordinateInterpolatorBase : public NodeCore
{
  public:

    typedef NodeCore Inherited;
    typedef NodeCore ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CoordinateInterpolator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FractionFieldId = Inherited::NextFieldId,
        KeyFieldId = FractionFieldId + 1,
        KeyValueFieldId = KeyFieldId + 1,
        ValueFieldId = KeyValueFieldId + 1,
        NextFieldId = ValueFieldId + 1
    };

    static const OSG::BitVector FractionFieldMask =
        (TypeTraits<BitVector>::One << FractionFieldId);
    static const OSG::BitVector KeyFieldMask =
        (TypeTraits<BitVector>::One << KeyFieldId);
    static const OSG::BitVector KeyValueFieldMask =
        (TypeTraits<BitVector>::One << KeyValueFieldId);
    static const OSG::BitVector ValueFieldMask =
        (TypeTraits<BitVector>::One << ValueFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFFractionType;
    typedef MFReal32          MFKeyType;
    typedef MFPnt3f           MFKeyValueType;
    typedef MFPnt3f           MFValueType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFFraction       (void);
            const SFReal32            *getSFFraction        (void) const;

                  MFReal32            *editMFKey            (void);
            const MFReal32            *getMFKey             (void) const;

                  MFPnt3f             *editMFKeyValue       (void);
            const MFPnt3f             *getMFKeyValue        (void) const;

                  MFPnt3f             *editMFValue          (void);
            const MFPnt3f             *getMFValue           (void) const;


                  Real32              &editFraction       (void);
                  Real32               getFraction        (void) const;

                  Real32              &editKey            (const UInt32 index);
                  Real32               getKey             (const UInt32 index) const;

                  Pnt3f               &editKeyValue       (const UInt32 index);
            const Pnt3f               &getKeyValue        (const UInt32 index) const;

                  Pnt3f               &editValue          (const UInt32 index);
            const Pnt3f               &getValue           (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFraction       (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CoordinateInterpolatorTransitPtr  create          (void);
    static  CoordinateInterpolator           *createEmpty     (void);

    static  CoordinateInterpolatorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CoordinateInterpolator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfFraction;
    MFReal32          _mfKey;
    MFPnt3f           _mfKeyValue;
    MFPnt3f           _mfValue;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CoordinateInterpolatorBase(void);
    CoordinateInterpolatorBase(const CoordinateInterpolatorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CoordinateInterpolatorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFraction        (void) const;
    EditFieldHandlePtr editHandleFraction       (void);
    GetFieldHandlePtr  getHandleKey             (void) const;
    EditFieldHandlePtr editHandleKey            (void);
    GetFieldHandlePtr  getHandleKeyValue        (void) const;
    EditFieldHandlePtr editHandleKeyValue       (void);
    GetFieldHandlePtr  getHandleValue           (void) const;
    EditFieldHandlePtr editHandleValue          (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      CoordinateInterpolatorBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CoordinateInterpolatorBase &source);
};

typedef CoordinateInterpolatorBase *CoordinateInterpolatorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCOORDINATEINTERPOLATORBASE_H_ */
