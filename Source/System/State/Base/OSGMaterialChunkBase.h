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
 **     class MaterialChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATERIALCHUNKBASE_H_
#define _OSGMATERIALCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGColor4rFields.h" // Diffuse type
#include "OSGColor4rFields.h" // Ambient type
#include "OSGColor4rFields.h" // Specular type
#include "OSGColor4rFields.h" // Emission type
#include "OSGRealFields.h" // Shininess type
#include "OSGBoolFields.h" // Lit type
#include "OSGGLenumFields.h" // ColorMaterial type
#include "OSGBoolFields.h" // BackMaterial type
#include "OSGColor4rFields.h" // BackDiffuse type
#include "OSGColor4rFields.h" // BackAmbient type
#include "OSGColor4rFields.h" // BackSpecular type
#include "OSGColor4rFields.h" // BackEmission type
#include "OSGRealFields.h" // BackShininess type
#include "OSGGLenumFields.h" // BackColorMaterial type

#include "OSGMaterialChunkFields.h"

OSG_BEGIN_NAMESPACE

class MaterialChunk;

//! \brief MaterialChunk Base Class.

class OSG_SYSTEM_DLLMAPPING MaterialChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              MaterialChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DiffuseFieldId = Inherited::NextFieldId,
        AmbientFieldId = DiffuseFieldId + 1,
        SpecularFieldId = AmbientFieldId + 1,
        EmissionFieldId = SpecularFieldId + 1,
        ShininessFieldId = EmissionFieldId + 1,
        LitFieldId = ShininessFieldId + 1,
        ColorMaterialFieldId = LitFieldId + 1,
        BackMaterialFieldId = ColorMaterialFieldId + 1,
        BackDiffuseFieldId = BackMaterialFieldId + 1,
        BackAmbientFieldId = BackDiffuseFieldId + 1,
        BackSpecularFieldId = BackAmbientFieldId + 1,
        BackEmissionFieldId = BackSpecularFieldId + 1,
        BackShininessFieldId = BackEmissionFieldId + 1,
        BackColorMaterialFieldId = BackShininessFieldId + 1,
        NextFieldId = BackColorMaterialFieldId + 1
    };

    static const OSG::BitVector DiffuseFieldMask =
        (TypeTraits<BitVector>::One << DiffuseFieldId);
    static const OSG::BitVector AmbientFieldMask =
        (TypeTraits<BitVector>::One << AmbientFieldId);
    static const OSG::BitVector SpecularFieldMask =
        (TypeTraits<BitVector>::One << SpecularFieldId);
    static const OSG::BitVector EmissionFieldMask =
        (TypeTraits<BitVector>::One << EmissionFieldId);
    static const OSG::BitVector ShininessFieldMask =
        (TypeTraits<BitVector>::One << ShininessFieldId);
    static const OSG::BitVector LitFieldMask =
        (TypeTraits<BitVector>::One << LitFieldId);
    static const OSG::BitVector ColorMaterialFieldMask =
        (TypeTraits<BitVector>::One << ColorMaterialFieldId);
    static const OSG::BitVector BackMaterialFieldMask =
        (TypeTraits<BitVector>::One << BackMaterialFieldId);
    static const OSG::BitVector BackDiffuseFieldMask =
        (TypeTraits<BitVector>::One << BackDiffuseFieldId);
    static const OSG::BitVector BackAmbientFieldMask =
        (TypeTraits<BitVector>::One << BackAmbientFieldId);
    static const OSG::BitVector BackSpecularFieldMask =
        (TypeTraits<BitVector>::One << BackSpecularFieldId);
    static const OSG::BitVector BackEmissionFieldMask =
        (TypeTraits<BitVector>::One << BackEmissionFieldId);
    static const OSG::BitVector BackShininessFieldMask =
        (TypeTraits<BitVector>::One << BackShininessFieldId);
    static const OSG::BitVector BackColorMaterialFieldMask =
        (TypeTraits<BitVector>::One << BackColorMaterialFieldId);
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
                  SFColor4r           *getSFDiffuse         (void);
#endif
                  SFColor4r           *editSFDiffuse        (void);
            const SFColor4r           *getSFDiffuse         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFAmbient         (void);
#endif
                  SFColor4r           *editSFAmbient        (void);
            const SFColor4r           *getSFAmbient         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFSpecular        (void);
#endif
                  SFColor4r           *editSFSpecular       (void);
            const SFColor4r           *getSFSpecular        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFEmission        (void);
#endif
                  SFColor4r           *editSFEmission       (void);
            const SFColor4r           *getSFEmission        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFShininess       (void);
#endif
                  SFReal              *editSFShininess      (void);
            const SFReal              *getSFShininess       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFLit             (void);
#endif
                  SFBool              *editSFLit            (void);
            const SFBool              *getSFLit             (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFColorMaterial   (void);
#endif
                  SFGLenum            *editSFColorMaterial  (void);
            const SFGLenum            *getSFColorMaterial   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFBackMaterial    (void);
#endif
                  SFBool              *editSFBackMaterial   (void);
            const SFBool              *getSFBackMaterial    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFBackDiffuse     (void);
#endif
                  SFColor4r           *editSFBackDiffuse    (void);
            const SFColor4r           *getSFBackDiffuse     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFBackAmbient     (void);
#endif
                  SFColor4r           *editSFBackAmbient    (void);
            const SFColor4r           *getSFBackAmbient     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFBackSpecular    (void);
#endif
                  SFColor4r           *editSFBackSpecular   (void);
            const SFColor4r           *getSFBackSpecular    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4r           *getSFBackEmission    (void);
#endif
                  SFColor4r           *editSFBackEmission   (void);
            const SFColor4r           *getSFBackEmission    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal              *getSFBackShininess   (void);
#endif
                  SFReal              *editSFBackShininess  (void);
            const SFReal              *getSFBackShininess   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFBackColorMaterial (void);
#endif
                  SFGLenum            *editSFBackColorMaterial(void);
            const SFGLenum            *getSFBackColorMaterial (void) const;


#ifdef OSG_1_GET_COMPAT
                  Color4r             &getDiffuse         (void);
#endif
                  Color4r             &editDiffuse        (void);
            const Color4r             &getDiffuse         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getAmbient         (void);
#endif
                  Color4r             &editAmbient        (void);
            const Color4r             &getAmbient         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getSpecular        (void);
#endif
                  Color4r             &editSpecular       (void);
            const Color4r             &getSpecular        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getEmission        (void);
#endif
                  Color4r             &editEmission       (void);
            const Color4r             &getEmission        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getShininess       (void);
#endif
                  Real                &editShininess      (void);
            const Real                &getShininess       (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getLit             (void);
#endif
                  bool                &editLit            (void);
            const bool                &getLit             (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getColorMaterial   (void);
#endif
                  GLenum              &editColorMaterial  (void);
            const GLenum              &getColorMaterial   (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getBackMaterial    (void);
#endif
                  bool                &editBackMaterial   (void);
            const bool                &getBackMaterial    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getBackDiffuse     (void);
#endif
                  Color4r             &editBackDiffuse    (void);
            const Color4r             &getBackDiffuse     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getBackAmbient     (void);
#endif
                  Color4r             &editBackAmbient    (void);
            const Color4r             &getBackAmbient     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getBackSpecular    (void);
#endif
                  Color4r             &editBackSpecular   (void);
            const Color4r             &getBackSpecular    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4r             &getBackEmission    (void);
#endif
                  Color4r             &editBackEmission   (void);
            const Color4r             &getBackEmission    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real                &getBackShininess   (void);
#endif
                  Real                &editBackShininess  (void);
            const Real                &getBackShininess   (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getBackColorMaterial (void);
#endif
                  GLenum              &editBackColorMaterial(void);
            const GLenum              &getBackColorMaterial (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDiffuse        (const Color4r &value);
            void setAmbient        (const Color4r &value);
            void setSpecular       (const Color4r &value);
            void setEmission       (const Color4r &value);
            void setShininess      (const Real &value);
            void setLit            (const bool &value);
            void setColorMaterial  (const GLenum &value);
            void setBackMaterial   (const bool &value);
            void setBackDiffuse    (const Color4r &value);
            void setBackAmbient    (const Color4r &value);
            void setBackSpecular   (const Color4r &value);
            void setBackEmission   (const Color4r &value);
            void setBackShininess  (const Real &value);
            void setBackColorMaterial(const GLenum &value);

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

    static  MaterialChunkPtr create     (void);
    static  MaterialChunkPtr createEmpty(void);

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

    SFColor4r         _sfDiffuse;
    SFColor4r         _sfAmbient;
    SFColor4r         _sfSpecular;
    SFColor4r         _sfEmission;
    SFReal            _sfShininess;
    SFBool            _sfLit;
    SFGLenum          _sfColorMaterial;
    SFBool            _sfBackMaterial;
    SFColor4r         _sfBackDiffuse;
    SFColor4r         _sfBackAmbient;
    SFColor4r         _sfBackSpecular;
    SFColor4r         _sfBackEmission;
    SFReal            _sfBackShininess;
    SFGLenum          _sfBackColorMaterial;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MaterialChunkBase(void);
    MaterialChunkBase(const MaterialChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MaterialChunkBase(void);

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

            void execSync (      MaterialChunkBase *pFrom,
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

            void execSync (      MaterialChunkBase *pFrom,
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
    void operator =(const MaterialChunkBase &source);
};

typedef MaterialChunkBase *MaterialChunkBaseP;

/** Type specific RefPtr type for MaterialChunk. */
typedef RefPtr<MaterialChunkPtr> MaterialChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<MaterialChunkBase::isNodeCore>,
    CoredNodePtr<MaterialChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        MaterialChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGMATERIALCHUNKBASE_H_ */
