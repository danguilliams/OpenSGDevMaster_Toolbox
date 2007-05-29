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
 **     class BlendChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBLENDCHUNKBASE_H_
#define _OSGBLENDCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGGLenumFields.h" // SrcFactor type
#include "OSGGLenumFields.h" // DestFactor type
#include "OSGGLenumFields.h" // Equation type
#include "OSGColor4fFields.h" // Color type
#include "OSGGLenumFields.h" // AlphaFunc type
#include "OSGReal32Fields.h" // AlphaValue type
#include "OSGGLenumFields.h" // AlphaSrcFactor type
#include "OSGGLenumFields.h" // AlphaDestFactor type

#include "OSGBlendChunkFields.h"

OSG_BEGIN_NAMESPACE

class BlendChunk;

//! \brief BlendChunk Base Class.

class OSG_SYSTEM_DLLMAPPING BlendChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              BlendChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SrcFactorFieldId = Inherited::NextFieldId,
        DestFactorFieldId = SrcFactorFieldId + 1,
        EquationFieldId = DestFactorFieldId + 1,
        ColorFieldId = EquationFieldId + 1,
        AlphaFuncFieldId = ColorFieldId + 1,
        AlphaValueFieldId = AlphaFuncFieldId + 1,
        AlphaSrcFactorFieldId = AlphaValueFieldId + 1,
        AlphaDestFactorFieldId = AlphaSrcFactorFieldId + 1,
        NextFieldId = AlphaDestFactorFieldId + 1
    };

    static const OSG::BitVector SrcFactorFieldMask =
        (TypeTraits<BitVector>::One << SrcFactorFieldId);
    static const OSG::BitVector DestFactorFieldMask =
        (TypeTraits<BitVector>::One << DestFactorFieldId);
    static const OSG::BitVector EquationFieldMask =
        (TypeTraits<BitVector>::One << EquationFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector AlphaFuncFieldMask =
        (TypeTraits<BitVector>::One << AlphaFuncFieldId);
    static const OSG::BitVector AlphaValueFieldMask =
        (TypeTraits<BitVector>::One << AlphaValueFieldId);
    static const OSG::BitVector AlphaSrcFactorFieldMask =
        (TypeTraits<BitVector>::One << AlphaSrcFactorFieldId);
    static const OSG::BitVector AlphaDestFactorFieldMask =
        (TypeTraits<BitVector>::One << AlphaDestFactorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFSrcFactor       (void);
#endif
                  SFGLenum            *editSFSrcFactor      (void);
            const SFGLenum            *getSFSrcFactor       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFDestFactor      (void);
#endif
                  SFGLenum            *editSFDestFactor     (void);
            const SFGLenum            *getSFDestFactor      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFEquation        (void);
#endif
                  SFGLenum            *editSFEquation       (void);
            const SFGLenum            *getSFEquation        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFColor           (void);
#endif
                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFAlphaFunc       (void);
#endif
                  SFGLenum            *editSFAlphaFunc      (void);
            const SFGLenum            *getSFAlphaFunc       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFAlphaValue      (void);
#endif
                  SFReal32            *editSFAlphaValue     (void);
            const SFReal32            *getSFAlphaValue      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFAlphaSrcFactor  (void);
#endif
                  SFGLenum            *editSFAlphaSrcFactor (void);
            const SFGLenum            *getSFAlphaSrcFactor  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFAlphaDestFactor (void);
#endif
                  SFGLenum            *editSFAlphaDestFactor(void);
            const SFGLenum            *getSFAlphaDestFactor (void) const;


#ifdef OSG_1_GET_COMPAT
                  GLenum              &getSrcFactor       (void);
#endif
                  GLenum              &editSrcFactor      (void);
            const GLenum              &getSrcFactor       (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getDestFactor      (void);
#endif
                  GLenum              &editDestFactor     (void);
            const GLenum              &getDestFactor      (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getEquation        (void);
#endif
                  GLenum              &editEquation       (void);
            const GLenum              &getEquation        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getColor           (void);
#endif
                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getAlphaFunc       (void);
#endif
                  GLenum              &editAlphaFunc      (void);
            const GLenum              &getAlphaFunc       (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getAlphaValue      (void);
#endif
                  Real32              &editAlphaValue     (void);
            const Real32              &getAlphaValue      (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getAlphaSrcFactor  (void);
#endif
                  GLenum              &editAlphaSrcFactor (void);
            const GLenum              &getAlphaSrcFactor  (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getAlphaDestFactor (void);
#endif
                  GLenum              &editAlphaDestFactor(void);
            const GLenum              &getAlphaDestFactor (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSrcFactor      (const GLenum &value);
            void setDestFactor     (const GLenum &value);
            void setEquation       (const GLenum &value);
            void setColor          (const Color4f &value);
            void setAlphaFunc      (const GLenum &value);
            void setAlphaValue     (const Real32 &value);
            void setAlphaSrcFactor (const GLenum &value);
            void setAlphaDestFactor(const GLenum &value);

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

    static  BlendChunkPtr create     (void);
    static  BlendChunkPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGLenum          _sfSrcFactor;
    SFGLenum          _sfDestFactor;
    SFGLenum          _sfEquation;
    SFColor4f         _sfColor;
    SFGLenum          _sfAlphaFunc;
    SFReal32          _sfAlphaValue;
    SFGLenum          _sfAlphaSrcFactor;
    SFGLenum          _sfAlphaDestFactor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BlendChunkBase(void);
    BlendChunkBase(const BlendChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BlendChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      BlendChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      BlendChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BlendChunkBase &source);
};

typedef BlendChunkBase *BlendChunkBaseP;

/** Type specific RefPtr type for BlendChunk. */
typedef RefPtr<BlendChunkPtr> BlendChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<BlendChunkBase::isNodeCore>,
    CoredNodePtr<BlendChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        BlendChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGBLENDCHUNKBASE_H_ */
