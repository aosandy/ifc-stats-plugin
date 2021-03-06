/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcLightSourcePositional.h"
class IFCQUERY_EXPORT IfcDirection;
class IFCQUERY_EXPORT IfcReal;
class IFCQUERY_EXPORT IfcPositivePlaneAngleMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcLightSourceSpot : public IfcLightSourcePositional
{ 
public:
	IfcLightSourceSpot() = default;
	IfcLightSourceSpot( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 13; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcLightSourceSpot"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcLightSource -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>									m_Name;						//optional
	//  shared_ptr<IfcColourRgb>								m_LightColour;
	//  shared_ptr<IfcNormalisedRatioMeasure>					m_AmbientIntensity;			//optional
	//  shared_ptr<IfcNormalisedRatioMeasure>					m_Intensity;				//optional

	// IfcLightSourcePositional -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcCartesianPoint>							m_Position;
	//  shared_ptr<IfcPositiveLengthMeasure>					m_Radius;
	//  shared_ptr<IfcReal>										m_ConstantAttenuation;
	//  shared_ptr<IfcReal>										m_DistanceAttenuation;
	//  shared_ptr<IfcReal>										m_QuadricAttenuation;

	// IfcLightSourceSpot -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcDirection>								m_Orientation;
	shared_ptr<IfcReal>										m_ConcentrationExponent;	//optional
	shared_ptr<IfcPositivePlaneAngleMeasure>				m_SpreadAngle;
	shared_ptr<IfcPositivePlaneAngleMeasure>				m_BeamWidthAngle;
};

