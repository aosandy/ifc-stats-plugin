/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcObjectPlacement.h"
class IFCQUERY_EXPORT IfcObjectPlacement;
class IFCQUERY_EXPORT IfcAxis2Placement;
//ENTITY
class IFCQUERY_EXPORT IfcLocalPlacement : public IfcObjectPlacement
{ 
public:
	IfcLocalPlacement() = default;
	IfcLocalPlacement( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcLocalPlacement"; }
	virtual const std::wstring toString() const;


	// IfcObjectPlacement -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcProduct> >			m_PlacesObject_inverse;
	//  std::vector<weak_ptr<IfcLocalPlacement> >	m_ReferencedByPlacements_inverse;

	// IfcLocalPlacement -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcObjectPlacement>				m_PlacementRelTo;			//optional
	shared_ptr<IfcAxis2Placement>				m_RelativePlacement;
};

