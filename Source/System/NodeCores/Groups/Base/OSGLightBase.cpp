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
 **     class Light!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILELIGHTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // Beacon Class
#include <OSGLightEngine.h> // LightEngine Class

#include "OSGLightBase.h"
#include "OSGLight.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Light
    \ingroup GrpSystemNodeCoresLights

    Light is the base class for all the light source nodes.
    It contains the field for the general light source attributes
    (AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon
    defines the reference coordinate system for the lightsource, while
    the position in the graph defines the objects that are lit.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color4r         LightBase::_sfAmbient
    The light's ambient component.
*/

/*! \var Color4r         LightBase::_sfDiffuse
    The light's diffuse color.
*/

/*! \var Color4r         LightBase::_sfSpecular
    The light's specular color.
*/

/*! \var Node *          LightBase::_sfBeacon
    
*/

/*! \var bool            LightBase::_sfOn
    
*/

/*! \var Real            LightBase::_sfConstantAttenuation
    The light's constant attenuation.
*/

/*! \var Real            LightBase::_sfLinearAttenuation
    The light's linear attenuation.
*/

/*! \var Real            LightBase::_sfQuadraticAttenuation
    The light's quadratic attenuation.
*/

/*! \var LightEngine *   LightBase::_sfLightEngine
    
*/


void LightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "ambient",
        "The light's ambient component.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "diffuse",
        "The light's diffuse color.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "specular",
        "The light's specular color.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "on",
        "",
        OnFieldId, OnFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleOn),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleOn));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "constantAttenuation",
        "The light's constant attenuation.\n",
        ConstantAttenuationFieldId, ConstantAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleConstantAttenuation),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleConstantAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "linearAttenuation",
        "The light's linear attenuation.\n",
        LinearAttenuationFieldId, LinearAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleLinearAttenuation),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleLinearAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "quadraticAttenuation",
        "The light's quadratic attenuation.\n",
        QuadraticAttenuationFieldId, QuadraticAttenuationFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleQuadraticAttenuation),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleQuadraticAttenuation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecLightEnginePtr::Description(
        SFUnrecLightEnginePtr::getClassType(),
        "lightEngine",
        "",
        LightEngineFieldId, LightEngineFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&LightBase::editHandleLightEngine),
        static_cast<FieldGetMethodSig >(&LightBase::getHandleLightEngine));

    oType.addInitialDesc(pDesc);
}


LightBase::TypeObject LightBase::_type(
    LightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Light::initMethod,
    Light::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LightBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Light\"\n"
    "\tparent=\"NodeCore\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemNodeCoresLights\n"
    "\n"
    "Light is the base class for all the light source nodes.\n"
    "It contains the field for the general light source attributes\n"
    "(AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon\n"
    "defines the reference coordinate system for the lightsource, while\n"
    "the position in the graph defines the objects that are lit.\n"
    "\t<Field\n"
    "\t\tname=\"ambient\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f,1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's ambient component.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"diffuse\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's diffuse color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"specular\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's specular color.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        doRefCount=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"on\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's constant attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"linearAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's linear attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"quadraticAttenuation\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe light's quadratic attenuation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lightEngine\"\n"
    "\t\ttype=\"LightEnginePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemNodeCoresLights\n"
    "\n"
    "Light is the base class for all the light source nodes.\n"
    "It contains the field for the general light source attributes\n"
    "(AmbientColor, DiffuseColor, SpecularColor, Beacon). The Beacon\n"
    "defines the reference coordinate system for the lightsource, while\n"
    "the position in the graph defines the objects that are lit.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LightBase::getType(void)
{
    return _type;
}

const FieldContainerType &LightBase::getType(void) const
{
    return _type;
}

UInt32 LightBase::getContainerSize(void) const
{
    return sizeof(Light);
}

/*------------------------- decorator get ------------------------------*/


SFColor4r *LightBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor4r *LightBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightBase::getSFAmbient        (void)
{
    return this->editSFAmbient        ();
}
#endif

SFColor4r *LightBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor4r *LightBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightBase::getSFDiffuse        (void)
{
    return this->editSFDiffuse        ();
}
#endif

SFColor4r *LightBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor4r *LightBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}

#ifdef OSG_1_GET_COMPAT
SFColor4r           *LightBase::getSFSpecular       (void)
{
    return this->editSFSpecular       ();
}
#endif

//! Get the Light::_sfBeacon field.
const SFWeakNodePtr *LightBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *LightBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}

SFBool *LightBase::editSFOn(void)
{
    editSField(OnFieldMask);

    return &_sfOn;
}

const SFBool *LightBase::getSFOn(void) const
{
    return &_sfOn;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *LightBase::getSFOn             (void)
{
    return this->editSFOn             ();
}
#endif

SFReal *LightBase::editSFConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return &_sfConstantAttenuation;
}

const SFReal *LightBase::getSFConstantAttenuation(void) const
{
    return &_sfConstantAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightBase::getSFConstantAttenuation(void)
{
    return this->editSFConstantAttenuation();
}
#endif

SFReal *LightBase::editSFLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return &_sfLinearAttenuation;
}

const SFReal *LightBase::getSFLinearAttenuation(void) const
{
    return &_sfLinearAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightBase::getSFLinearAttenuation(void)
{
    return this->editSFLinearAttenuation();
}
#endif

SFReal *LightBase::editSFQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return &_sfQuadraticAttenuation;
}

const SFReal *LightBase::getSFQuadraticAttenuation(void) const
{
    return &_sfQuadraticAttenuation;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *LightBase::getSFQuadraticAttenuation(void)
{
    return this->editSFQuadraticAttenuation();
}
#endif

//! Get the Light::_sfLightEngine field.
const SFUnrecLightEnginePtr *LightBase::getSFLightEngine(void) const
{
    return &_sfLightEngine;
}

SFUnrecLightEnginePtr *LightBase::editSFLightEngine    (void)
{
    editSField(LightEngineFieldMask);

    return &_sfLightEngine;
}





/*------------------------------ access -----------------------------------*/

UInt32 LightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        returnValue += _sfOn.getBinSize();
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        returnValue += _sfConstantAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        returnValue += _sfLinearAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        returnValue += _sfQuadraticAttenuation.getBinSize();
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        returnValue += _sfLightEngine.getBinSize();
    }

    return returnValue;
}

void LightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        _sfLightEngine.copyToBin(pMem);
    }
}

void LightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OnFieldMask & whichField))
    {
        _sfOn.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
    {
        _sfConstantAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
    {
        _sfLinearAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
    {
        _sfQuadraticAttenuation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightEngineFieldMask & whichField))
    {
        _sfLightEngine.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

LightBase::LightBase(void) :
    Inherited(),
    _sfAmbient                (Color4r(0.f,0.f,0.f,1.f)),
    _sfDiffuse                (Color4r(1.f,1.f,1.f,1.f)),
    _sfSpecular               (Color4r(1.f,1.f,1.f,1.f)),
    _sfBeacon                 (NULL),
    _sfOn                     (bool(true)),
    _sfConstantAttenuation    (Real(1.f)),
    _sfLinearAttenuation      (Real(0.f)),
    _sfQuadraticAttenuation   (Real(0.f)),
    _sfLightEngine            (NULL)
{
}

LightBase::LightBase(const LightBase &source) :
    Inherited(source),
    _sfAmbient                (source._sfAmbient                ),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfBeacon                 (NULL),
    _sfOn                     (source._sfOn                     ),
    _sfConstantAttenuation    (source._sfConstantAttenuation    ),
    _sfLinearAttenuation      (source._sfLinearAttenuation      ),
    _sfQuadraticAttenuation   (source._sfQuadraticAttenuation   ),
    _sfLightEngine            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

LightBase::~LightBase(void)
{
}

void LightBase::onCreate(const Light *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Light *pThis = static_cast<Light *>(this);

        pThis->setBeacon(source->getBeacon());

        pThis->setLightEngine(source->getLightEngine());
    }
}

GetFieldHandlePtr LightBase::getHandleAmbient         (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleAmbient        (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleDiffuse         (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleDiffuse        (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleSpecular        (void) const
{
    SFColor4r::GetHandlePtr returnValue(
        new  SFColor4r::GetHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleSpecular       (void)
{
    SFColor4r::EditHandlePtr returnValue(
        new  SFColor4r::EditHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon, 
             this->getType().getFieldDesc(BeaconFieldId)));

    returnValue->setSetMethod(boost::bind(&Light::setBeacon, 
                                          static_cast<Light *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleOn              (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfOn, 
             this->getType().getFieldDesc(OnFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleOn             (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfOn, 
             this->getType().getFieldDesc(OnFieldId)));

    editSField(OnFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleConstantAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleConstantAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfConstantAttenuation, 
             this->getType().getFieldDesc(ConstantAttenuationFieldId)));

    editSField(ConstantAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleLinearAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleLinearAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfLinearAttenuation, 
             this->getType().getFieldDesc(LinearAttenuationFieldId)));

    editSField(LinearAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleQuadraticAttenuation (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleQuadraticAttenuation(void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfQuadraticAttenuation, 
             this->getType().getFieldDesc(QuadraticAttenuationFieldId)));

    editSField(QuadraticAttenuationFieldMask);

    return returnValue;
}

GetFieldHandlePtr LightBase::getHandleLightEngine     (void) const
{
    SFUnrecLightEnginePtr::GetHandlePtr returnValue(
        new  SFUnrecLightEnginePtr::GetHandle(
             &_sfLightEngine, 
             this->getType().getFieldDesc(LightEngineFieldId)));

    return returnValue;
}

EditFieldHandlePtr LightBase::editHandleLightEngine    (void)
{
    SFUnrecLightEnginePtr::EditHandlePtr returnValue(
        new  SFUnrecLightEnginePtr::EditHandle(
             &_sfLightEngine, 
             this->getType().getFieldDesc(LightEngineFieldId)));

    returnValue->setSetMethod(boost::bind(&Light::setLightEngine, 
                                          static_cast<Light *>(this), _1));

    editSField(LightEngineFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<LightBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void LightBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Light *>(this)->setBeacon(NULL);

    static_cast<Light *>(this)->setLightEngine(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Light *>::_type("LightPtr", "NodeCorePtr");
#endif


OSG_END_NAMESPACE
