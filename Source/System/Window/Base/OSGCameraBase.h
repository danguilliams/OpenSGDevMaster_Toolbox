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
 **     class Camera
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCAMERABASE_H_
#define _OSGCAMERABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGNodeFields.h" // Beacon type
#include "OSGReal32Fields.h" // Near type
#include "OSGReal32Fields.h" // Far type

#include "OSGCameraFields.h"

OSG_BEGIN_NAMESPACE

class Camera;

//! \brief Camera Base Class.

class OSG_SYSTEM_DLLMAPPING CameraBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Camera>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        BeaconFieldId = Inherited::NextFieldId,
        NearFieldId = BeaconFieldId + 1,
        FarFieldId = NearFieldId + 1,
        NextFieldId = FarFieldId + 1
    };

    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector NearFieldMask =
        (TypeTraits<BitVector>::One << NearFieldId);
    static const OSG::BitVector FarFieldMask =
        (TypeTraits<BitVector>::One << FarFieldId);
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

    virtual const SFNodePtr           *getSFBeacon          (void) const;

#ifdef OSG_1_GET_COMPAT
    virtual       SFReal32            *getSFNear            (void);
#endif
    virtual       SFReal32            *editSFNear           (void);
    virtual const SFReal32            *getSFNear            (void) const;

#ifdef OSG_1_GET_COMPAT
    virtual       SFReal32            *getSFFar             (void);
#endif
    virtual       SFReal32            *editSFFar            (void);
    virtual const SFReal32            *getSFFar             (void) const;


    virtual       NodePtrConst getBeacon         (void) const;

#ifdef OSG_1_GET_COMPAT
    virtual       Real32              &getNear            (void);
#endif
    virtual       Real32              &editNear           (void);
    virtual const Real32              &getNear            (void) const;

#ifdef OSG_1_GET_COMPAT
    virtual       Real32              &getFar             (void);
#endif
    virtual       Real32              &editFar            (void);
    virtual const Real32              &getFar             (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

    virtual void setBeacon         (NodePtrConstArg value);
    virtual void setNear           (const Real32 &value);
    virtual void setFar            (const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(      FieldContainerPtrConstArg pElement,
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFNodePtr         _sfBeacon;
    SFReal32          _sfNear;
    SFReal32          _sfFar;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CameraBase(void);
    CameraBase(const CameraBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CameraBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Camera *source = NULL);

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

            void execSync (      CameraBase *pFrom,
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

            void execSync (      CameraBase *pFrom,
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
    void operator =(const CameraBase &source);
};

typedef CameraBase *CameraBaseP;

/** Type specific RefPtr type for Camera. */
typedef RefPtr<CameraPtr> CameraRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<CameraBase::isNodeCore>,
    CoredNodePtr<Camera>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        CameraNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGCAMERABASE_H_ */
